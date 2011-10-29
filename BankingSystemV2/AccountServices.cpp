// AccountServices.cpp
// Provides services to open, close, retrieve and modify customer 
// accounts. Uses the Singleton Pattern to ensure there is only
// ever one AccountServices

#include "stdafx.h"
#include <sstream>
#include <list>
#include <set>
#include <vector>


using std::stringstream;

DataSource* AccountServices::_ds = NULL;
AccountServices* AccountServices::_accountServicesInstance = NULL;
PhraseGenerator* AccountServices::_pg = NULL;

// -------------------------------------------------------------------------------------------- //
// constructors / destructors / instance retreival

// precondition: none
// postcondition: an AccountSerices is returned, if none is alreay
// available one is created then returned
AccountServices *AccountServices::instance(void){

	if(_accountServicesInstance == NULL){
	
		_accountServicesInstance = new AccountServices;
		return _accountServicesInstance;
	}		
	return _accountServicesInstance;
}

AccountServices::AccountServices()
{
	_pg = PhraseGenerator::instance();
}

// -------------------------------------------------------------------------------------------- //
// behaviours

// precondition: valid parameters passed in
// postcondition: a savings account is created and returned
int AccountServices::makeSavingsAccount 
(
	string accountName, int customerId,
	double interestRate, double balance
)
{
	
	int accountId = getNextSavingsAccountId();
	SavingsAccount* sa = new SavingsAccount (accountId, customerId, accountName, interestRate);
	AccountServices::_ds->addAccount(sa);
	return accountId;

}

// precondition: valid parameters passed in 
// postcondition: a credit account is created and returned
int AccountServices::makeCreditCardAccount 
(
    string accountName, int customerId,
    double interestRate, double balance,
	double overdraftLimit
)
{

	int accountId = getNextCreditCardAccountId();
	CreditCardAccount *cca = new CreditCardAccount
		(	
			accountId,
			customerId,
			accountName, 
			interestRate, 
			balance, 
			overdraftLimit
		);

	AccountServices::_ds->addAccount(cca);
	return accountId;

}

std::string AccountServices::repaymentOptionToString(HomeLoanAccount::RepaymentOption option)
{
	std::string str = "";
	switch (option)
	{
	case HomeLoanAccount::MONTHLY:
		str = "Monthly";
		break;
	case HomeLoanAccount::FORTNIGHTLY:
		str = "Fortnightly";
		break;
	case HomeLoanAccount::WEEKLY:
		str = "Weekly";
		break;
	}
	return str;
}


//// precondition: valid parameters passed in
//// postcondition: a home loan account is created and returned
int AccountServices::makeHomeLoanAccount (string accountName, int customerId, 
                                   double interestRate, double balance,
                                   string propertyAddress, 
                                   HomeLoanAccount::RepaymentOption option, 
								   double minimumRepayment){

	int accountId = getNextHomeLoanAccountId();
									   
								HomeLoanAccount *hla = new HomeLoanAccount
									(
									accountId,
									customerId,
									accountName,
								interestRate,
								balance,
								propertyAddress,
								option,
								minimumRepayment);

								AccountServices::_ds->addAccount(hla);
								return accountId;
}
//
// precondition: valid accountID with a zero balance is passed in
// postcondition: account matching accountID is closed 
void AccountServices::closeAccount(int accountID){

	_ds->removeAccount(accountID);
}
//
//// precondition: valid accountType and accountID are passed in
//// postcondition: old details are replaced by new
//void AccountServices::changeAccountDetails(accountType type, string details[ ], int accountID){
//
//	//Account *change = getAccount(accountID);
//
//}
//

////precondition: valid accountID passed in
////postcondition: Account matching accountID returned
Account *AccountServices::getAccount(int customerId){
	
	// TODO Jeff: Invalid CustomerID Exception handling
	
	Account *account = _ds->getAccount(customerId);
	return account;
}

//// precondition: valid transaction passed in
//// postcondition: changes made to accounts contained within
//// transaction
////void AccountServices::performTransaction(Transaction* account) throws Exception{}
//
//// precondition: valid customerID passed in
//// postcondition: list of accounts matching customerID returned
list<Account*> AccountServices::getCustomerAccounts(int customerId)
{
	return  _ds->getAccountsForUser(customerId);
}


// sets the rates for bank accounts
void AccountServices::setRates(vector<double> rates){
	
	enum{SAVINGS_RATE, CREDIT_CARD_RATE, HOME_LOAN_RATE};
	
	_ds->setSavingsInterestRate(rates[SAVINGS_RATE]);
	_ds->setCreditCardInterestRate(rates[CREDIT_CARD_RATE]);
	_ds->setHomeLoanInterestRate(rates[HOME_LOAN_RATE]);

}

int AccountServices::getNextSavingsAccountId()
{
	int id;
	do
	{
		id = _pg->getDigitPhrase(ACCOUNT_ID_LENGTH, SAVINGS_PREFIX);
	}while (_ds->userExists(id));

	return id;
}

int AccountServices::getNextCreditCardAccountId()
{
	int id;
	do
	{
		id = _pg->getDigitPhrase(ACCOUNT_ID_LENGTH, CREDIT_CARD_PREFIX);
	}while (_ds->userExists(id));

	return id;
}

int AccountServices::getNextHomeLoanAccountId()
{
	int id;
	do
	{
		id = _pg->getDigitPhrase(ACCOUNT_ID_LENGTH, HOME_LOAN_PREFIX);
	}while (_ds->userExists(id));

	return id;
}





