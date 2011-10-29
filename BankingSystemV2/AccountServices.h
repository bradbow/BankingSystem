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
#include "PhraseGenerator.h"
#include <vector>
#include <string>
#include <list>
#include <set>

using namespace std;

const double DEFAULT_BALANCE = 0.00;

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
	int makeSavingsAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance = 0.00
	);

	// precondition: valid parameters passed in
	// postcondition: a credit account is created and returned
	int makeCreditCardAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance,
        double overdraftLimit
	);

	// precondition: valid parameters passed in
	// postcondition: a home loan account is created and returned
	int makeHomeLoanAccount 
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
	static Account *getAccount(int customerId);
	
	// precondition: valid customerId
	// postcondition: returns a list of accounts
	list<Account*> getCustomerAccounts(int customerId);

	// methods to get next account ids;
	int getNextSavingsAccountId();
	int getNextCreditCardAccountId();
	int getNextHomeLoanAccountId();

	// return a string representation of the repayment option
	static std::string repaymentOptionToString(HomeLoanAccount::RepaymentOption option);

	void setDataSource(DataSource* ds){_ds = ds;}

	double getSavingsInterestRate(){ return _ds->getSavingsInterestRate();}
	double getCreditCardInterestRate(){ return _ds->getCreditCardInterestRate();}
	double getHomeLoanInterestRate(){ return _ds->getHomeLoanInterestRate();}

	void setRates(vector<double> rates);
	
	double getDefaultBalance(){return DEFAULT_BALANCE;}
	// -------------------------------------------------------------------------------------------- //

private:

	// -------------------------------------------------------------------------------------------- //
	// constants
	static const int ACCOUNT_ID_LENGTH = 9;
	static const int SAVINGS_PREFIX = 1;
	static const int CREDIT_CARD_PREFIX = 2;
	static const int HOME_LOAN_PREFIX = 3;

	static AccountServices* _accountServicesInstance;
	static DataSource* _ds;
	static PhraseGenerator* _pg;
	
	AccountServices();

	// -------------------------------------------------------------------------------------------- //
	// utility

	int getNextAccountId(){return 1;}

};
#endif

