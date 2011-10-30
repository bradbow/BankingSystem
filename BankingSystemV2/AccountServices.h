
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
#include "GlobalSettings.h"

using namespace std;

/*
	Summary: This class employs a modified facade pattern
		     to provide creation and manipulation of lower level
			 objects
	Author: Brad Bow & Jeff Perkins
*/
class AccountServices
{
public:

	enum accountType{ SAVINGS_ACC, CREDIT_ACC, HOME_LOAN_ACC};

	// -------------------------------------------------------------------------------------------- //
	// destructors / instance retreival

	/*
		Summary: returns the static insance of the AccountServices object (singleton)
		Pre: none
		Post: static AccountServices* returned.
	*/
	static AccountServices *instance(void);
	~AccountServices(void){delete _accountServicesInstance;}

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
	int makeSavingsAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance = 0.00
	);

	/*
		Summary: creates and persists a CreditCardAccount object in the data source.
				 returns the newly created accounts id.
		Pre: customerId.length() == CUSTOMER_ID_LENGTH
			 interestRate > 0
			 balance >= 0
			 overdraftLimit > 0
		Post: _ds store a new CreditCardAccount object, whose id is the return value
	*/
	int makeCreditCardAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance,
        double overdraftLimit
	);

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
	int makeHomeLoanAccount 
	(
		string accountName, int customerId,
        double interestRate, double balance,
        string propertyAddress, HomeLoanAccount::RepaymentOption option, 
        double minimumRepayment
	);

	/*
		Summary: closes an account
		Pre: accountID points to an account object with zero balance
		Post: account object whose Id was accountID is closed
	*/
	void closeAccount(int accountID);

	/*
		Summary: returns Account* by id
		Pre: none
		Post: account points to account identified by accId or null
			  if no such account exists
	*/
	static Account *getAccount(int customerId);
	
	/*
		Summary: returns a list of account objects for a specified customer
		Pre: none
		Post: list<Account*> returned that contains accounts for customer
			  identified by customerId.  list.length() == 0 if customer
			  does not exist, or exists but has no accounts
	*/
	list<Account*> getCustomerAccounts(int customerId);

	/*
		Summary: returns the next available id for a SavingsAccount
				 given uniqueness constraints
		Pre: _pg instantiated
		Post: a unique account id is returned
	*/
	int getNextSavingsAccountId();

	/*
		Summary: returns the next available id for a CreditCardAccount
				 given uniqueness constraints
		Pre: _pg instantiated
		Post: a unique account id is returned
	*/
	int getNextCreditCardAccountId();

	/*
		Summary: returns the next available id for a HomeLoanAccount
				 given uniqueness constraints
		Pre: _pg instantiated
		Post: a unique account id is returned
	*/
	int getNextHomeLoanAccountId();

	/*
		Summary: converts an Enum RepaymentOption to a string
		Pre: option E RepaymentOption enum
		Post: string represetnation is returned
	*/
	static std::string repaymentOptionToString(HomeLoanAccount::RepaymentOption option);

	/*
		Summary: returns the global interest rate for savings accounts
		Pre: none	
		Post: interest rate returned
	*/
	double getSavingsInterestRate(){ return _ds->getSavingsInterestRate();}

	/*
		Summary: returns the global interest rate for credit card accounts
		Pre: none	
		Post: interest rate returned
	*/
	double getCreditCardInterestRate(){ return _ds->getCreditCardInterestRate();}

	/*
		Summary: returns the global interest rate for home loan accounts
		Pre: none	
		Post: interest rate returned
	*/
	double getHomeLoanInterestRate(){ return _ds->getHomeLoanInterestRate();}

	/*
		Summary: sets the global rates for the different types of accounts
		Pre: rates.length() == 3
		Post: rates set in data source
	*/
	void setRates(vector<double> rates);
	
	/*
		Summary: returns the global default balance
		Pre: none	
		Post: global default balance returned
	*/
	double getDefaultBalance(){return DEFAULT_BALANCE;}

	/*
		Summary: returns the global interest rate for savings accounts
		Pre: none	
		Post: interest rate returned
	*/
	void setDataSource(DataSource* ds){_ds = ds;}
	
	// -------------------------------------------------------------------------------------------- //

private:

	// -------------------------------------------------------------------------------------------- //
	// constants

	static const int ACCOUNT_ID_LENGTH = 9;
	static const int SAVINGS_PREFIX = 1;
	static const int CREDIT_CARD_PREFIX = 2;
	static const int HOME_LOAN_PREFIX = 3;

	// -------------------------------------------------------------------------------------------- //
	// data members

	static AccountServices* _accountServicesInstance;
	static DataSource* _ds;
	static PhraseGenerator* _pg;
	
	// -------------------------------------------------------------------------------------------- //
	// constructor

	AccountServices();

	// -------------------------------------------------------------------------------------------- //

};
#endif

// -------------------------------------------------------------------------------------------- //
// end of AccountServices.h