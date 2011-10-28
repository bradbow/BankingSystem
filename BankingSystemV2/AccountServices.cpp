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

// -------------------------------------------------------------------------------------------- //
// behaviours

// precondition: valid parameters passed in
// postcondition: a savings account is created and returned
void AccountServices::makeSavingsAccount 
(
	string accountName, int customerId,
	double interestRate, double balance
)
{
	
	int accountId = getNextAccountId();
	SavingsAccount sa (accountId, customerId, accountName, interestRate);
	AccountServices::_ds->addAccount(&sa);

}

// precondition: valid parameters passed in 
// postcondition: a credit account is created and returned
void AccountServices::makeCreditCardAccount 
(
    string accountName, int customerId,
    double interestRate, double balance,
	double overdraftLimit
)
{

	int accountId = getNextAccountId();
	CreditCardAccount cca
		(	
			accountId,
			customerId,
			accountName, 
			interestRate, 
			balance, 
			overdraftLimit
		);

	AccountServices::_ds->addAccount(&cca);

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
//HomeLoanAccount *AccountServices::createHomeLoanAccount (int accountID, string accountName, 
//                                   double interestRate, double balance,
//                                   string propertyAddress, 
//                                   HomeLoanAccount::repaymentOption option, 
//								   double minimumRepayment){
//
//	return new HomeLoanAccount(	accountID,
//								accountName,
//								interestRate,
//								balance,
//								propertyAddress,
//								option,
//								minimumRepayment);
//}
//
//// precondition: valid accountID with a zero balance is passed in
//// postcondition: account matching accountID is closed 
//void AccountServices::closeAccount(int accountID){
//
//}
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
Account *AccountServices::getAccount(int accountID){
	
	Account *account = AccountServices::_ds->getAccount(accountID);
	return account;
}

//// precondition: valid transaction passed in
//// postcondition: changes made to accounts contained within
//// transaction
////void AccountServices::performTransaction(Transaction* account) throws Exception{}
//
//// precondition: valid customerID passed in
//// postcondition: list of accounts matching customerID returned
list<Account*> AccountServices::getCustomerAccounts(set<int> customerAccountIDs){
	
	list<Account*> accounts;
	set<int>::iterator it;
	for(it = customerAccountIDs.begin();it != customerAccountIDs.end(); it++){	
		accounts.push_back(getAccount(*it));
	}
	return accounts;
}

