/*
	Summary: This class employs a modified facade pattern
		     to provide creation and manipulation of lower level
			 objects
	Author: Brad Bow & Jeff Perkins
*/

#include "stdafx.h"
#include <sstream>
#include <list>
#include <set>
#include <vector>
using std::stringstream;

// -------------------------------------------------------------------------------------------- //
// static initialisations

DataSource* AccountServices::_ds = NULL;
AccountServices* AccountServices::_accountServicesInstance = NULL;
PhraseGenerator* AccountServices::_pg = NULL;

// -------------------------------------------------------------------------------------------- //
// constructors / destructors / instance retreival

/*
	Summary: returns the static insance of the AccountServices object (singleton)
	Pre: none
	Post: static AccountServices* returned.
*/
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

/*
	Summary: creates and persists a SavingsAccount object in the data source.
			 returns the newly created accounts id.
	Pre: customerId.length() == CUSTOMER_ID_LENGTH
		 interestRate > 0
		 balance >= 0
	Post: _ds store a new SavingsAccount object, whose id is the return value
*/
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

/*
	Summary: creates and persists a CreditCardAccount object in the data source.
			 returns the newly created accounts id.
	Pre: customerId.length() == CUSTOMER_ID_LENGTH
		 interestRate > 0
		 balance >= 0
		 overdraftLimit > 0
	Post: _ds store a new CreditCardAccount object, whose id is the return value
*/
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

/*
	Summary: creates and persists a HomeLoanAccount object in the data source.
			 returns the newly created accounts id.
	Pre: customerId.length() == CUSTOMER_ID_LENGTH
		 interestRate > 0
		 balance >= 0
		 overdraftLimit > 0
		 minimumRepayment > 0
		 option E RepaymentOption enum
	Post: _ds store a new HomeLoanAccount object, whose id is the return value
*/
int AccountServices::makeHomeLoanAccount (string accountName, int customerId, 
                                   double interestRate, double balance,
                                   string propertyAddress, 
                                   HomeLoanAccount::RepaymentOption option, 
								   double minimumRepayment){

	int accountId = getNextHomeLoanAccountId();
									   
	HomeLoanAccount *hla = new HomeLoanAccount
								(
									accountId, customerId, accountName,
									interestRate, balance, propertyAddress,
									option, minimumRepayment
								);

	AccountServices::_ds->addAccount(hla);
	return accountId;
}

/*
	Summary: converts an Enum RepaymentOption to a string
	Pre: option E RepaymentOption enum
	Post: string represetnation is returned
*/
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

/*
	Summary: closes an account
	Pre: accountID points to an account object with zero balance
	Post: account object whose Id was accountID is closed
*/
void AccountServices::closeAccount(int accountID){

	_ds->removeAccount(accountID);
}

/*
	Summary: returns Account* by id
	Pre: none
	Post: account points to account identified by accId or null
		  if no such account exists
*/
Account *AccountServices::getAccount(int accId){

	Account *account = _ds->getAccount(accId);
	return account;

}

/*
	Summary: returns a list of account objects for a specified customer
	Pre: none
	Post: list<Account*> returned that contains accounts for customer
		  identified by customerId.  list.length() == 0 if customer
		  does not exist, or exists but has no accounts
*/
list<Account*> AccountServices::getCustomerAccounts(int customerId)
{
	return  _ds->getAccountsForUser(customerId);
}


/*
	Summary: sets the global rates for the different types of accounts
	Pre: rates.length() == 3
	Post: rates set in data source
*/
void AccountServices::setRates(vector<double> rates){
	
	enum{SAVINGS_RATE, CREDIT_CARD_RATE, HOME_LOAN_RATE};
	
	_ds->setSavingsInterestRate(rates[SAVINGS_RATE]);
	_ds->setCreditCardInterestRate(rates[CREDIT_CARD_RATE]);
	_ds->setHomeLoanInterestRate(rates[HOME_LOAN_RATE]);

}

/*
	Summary: returns the next available id for a SavingsAccount
			 given uniqueness constraints
	Pre: _pg instantiated
	Post: a unique account id is returned
*/
int AccountServices::getNextSavingsAccountId()
{
	int id;
	do
	{
		id = _pg->getDigitPhrase(ACCOUNT_ID_LENGTH, SAVINGS_PREFIX);
	}while (_ds->userExists(id));

	return id;
}

/*
	Summary: returns the next available id for a CreditCardAccount
			 given uniqueness constraints
	Pre: _pg instantiated
	Post: a unique account id is returned
*/
int AccountServices::getNextCreditCardAccountId()
{
	int id;
	do
	{
		id = _pg->getDigitPhrase(ACCOUNT_ID_LENGTH, CREDIT_CARD_PREFIX);
	}while (_ds->userExists(id));

	return id;
}

/*
	Summary: returns the next available id for a HomeLoanAccount
			 given uniqueness constraints
	Pre: _pg instantiated
	Post: a unique account id is returned
*/
int AccountServices::getNextHomeLoanAccountId()
{
	int id;
	do
	{
		id = _pg->getDigitPhrase(ACCOUNT_ID_LENGTH, HOME_LOAN_PREFIX);
	}while (_ds->userExists(id));

	return id;
}

// --------------------------------------------------------------------------------------------- //
// end of AccountServices.cpp





