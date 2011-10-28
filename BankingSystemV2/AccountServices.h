// AccountServices.h
// Provides services to open, close, retrieve and modify customer 
// accounts.

#ifndef _ACCOUNT_SERVICES_H
#define _ACCOUNT_SERVICES_H

#include "Account.h"
#include "DebitAccount.h"
#include "DataSource.h"
#include "CreditCardAccount.hpp"
#include "HomeLoanAccount.hpp"
#include <vector>
#include <string>
#include <list>
#include <set>

using namespace std;

class AccountServices
{
public:

	enum accountType{ SAVINGS_ACC, CREDIT_ACC, HOME_LOAN_ACC};

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors / instance retreival

	~AccountServices(void){}

	// precondition: none
	// postcondition: an AccountSerices is returned, if none is alreay
	// available one is created then returned
	static AccountServices *instance(void);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	// precondition: valid parameters passed in
	// postcondition: a savings account is created and returned
	void makeSavingsAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance
	);

	// precondition: valid parameters passed in
	// postcondition: a credit account is created and returned
	void makeCreditCardAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance,
        double overdraftLimit
	);

	// precondition: valid parameters passed in
	// postcondition: a home loan account is created and returned
	void makeHomeLoanAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance,
        string propertyAddress, HomeLoanAccount::RepaymentOption option, 
        double minimumRepayment
	);

	// precondition: valid accountID with a zero balance is passed in
	// postcondition: account matching accountID is closed 
	void closeAccount(int accountID);

	// precondition: valid accountID passed in
	// postcondition: Account matching accountID returned
	static Account *getAccount(int accountID);

	list<Account*> getCustomerAccounts(set<int> customerAccountIDs);

	// return a string representation of the repayment option
	static std::string repaymentOptionToString(HomeLoanAccount::RepaymentOption option);

	void setDataSource(DataSource* ds){_ds = ds;}

	// -------------------------------------------------------------------------------------------- //

private:

	static AccountServices* _accountServicesInstance;
	static DataSource* _ds;
	
	// precondition: none
	// postcondition: creates instance of AccountServices
	AccountServices(){}	

	// -------------------------------------------------------------------------------------------- //
	// utility

	int getNextAccountId(){return 1;}

};
#endif

