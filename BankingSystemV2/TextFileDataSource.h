#pragma once

#ifndef _TEXTFILEDATASOURCE_H
#define _TEXTFILEDATASOURCE_H

#include "DataSource.h"
#include <string>
using namespace std;

/*
	A specific implementation of a data source for the 
	banking system application using text files.  Implements data source
	with integer id conventions for application objects.

	Employes singleton pattern to ensure data integrity across application

	Author: Brad Bow
*/

class TextFileDataSource : public DataSource
{
public:

	static enum Files
	{
		CUSTOMERS,
		BANK_CLERKS,
		SAVINGS_ACCOUNTS,
		CREDIT_CARD_ACCOUNTS,
		HOME_LOAN_ACCOUNTS,
		WITHDRAWALS,
		DEPOSITS,
		TRANSFERS,
		RATES,
		NUMBER_OF_FILES
	};

	// -------------------------------------------------------------------------------------------- //
	// destruction / instance retrieval

	static TextFileDataSource* getInstance();
	virtual ~TextFileDataSource(void);

	// -------------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: persists the application data
		Pre: none
		Post: application data persisted
	*/
	virtual void persistData();
	
	/*
		Summary: loads the data from teh persistence source into application objects
		Pre: none
		Post: application objects created and put into IdMap collections
	*/
	virtual void loadData();

	/*
		GETTERS FOR OBJECTS

		Summary: getters that return pointer to application objecst (users, accounts,
				 transactions)
		Pre: none
		Post: point returned to relevant object.  Null if object does not exist
			  in data source
	*/
	virtual User* getUser(int userId){return _users.get(userId);}
	virtual Account* getAccount(int accountId){return _accounts.get(accountId);}
	virtual Transaction* getTransaction(int transactionId){return _transactions.get(transactionId);}

	/*
		EXISTENCE TESTING FOR OBJECTS

		Summary: existence testing for membership of objects in data source
		Pre: none
		Post: true returned if object is member of data source, false otherwise
	*/
	// testing for existence
	virtual bool userExists(int userId){return _users.has(userId);}
	virtual bool accountExists(int accId){return _accounts.has(accId);}
	virtual bool transactionExists(int transId){return _transactions.has(transId);}

	/*
		ADDITION OF OBJECTS TO DATA SOURCE

		Summary: addition methods for adding application objects to data source
		Pre: none
		Post: new object (user, account, transaction) is added to data source
			  and will be persisted unless removed
	*/
	virtual void addUser(User* user){_users.add(user->getUserId(), user);}
	virtual void addAccount(Account* account){_accounts.add(account->getAccountId(), account);}
	virtual void addTransaction(Transaction* transaction){_transactions.add(transaction->getId(), transaction);}

	/*
		REMOVAL OF OBJECTS FROM DATA SOURCE
		
		Summary: removes application objects from data source
		Pre: none
		Post: if object exists it is removed from data source
	*/
	virtual void removeUser(int userId){_users.remove(userId);}
	virtual void removeAccount(int accountId){_accounts.remove(accountId);}
	virtual void removeTransaction(int transactionId){_transactions.remove(transactionId);}

	/*
		RELATIONAL QUERIES ON DATA SOURCE
		
		Summary: returns collections of relational results from data source
				 i.e. customer : accounts and account : transactions
		Pre: none
		Post: list returned with desired one to many relation, if query 
			  subject has no matching records list.length == 0
	*/
	virtual list<Account*> getAccountsForUser(int userId);
	virtual list<Transaction*> getTransactionsForAccount(int accId);
	
	/*
		GETTERS FOR RATES
		
		Summary: returns rates for various accounts
		Pre: none
		Post: rates returned
	*/
	virtual double getSavingsInterestRate(){return _savingsRate;}
	virtual double getCreditCardInterestRate(){return _creditCardRate;}
	virtual double getHomeLoanInterestRate(){return _homeLoanRate;}

	/*
		SETTERS FOR RATES
		
		Summary: sets rates for various accounts
		Pre: none
		Post: rates set
	*/
	virtual void setSavingsInterestRate(double value){_savingsRate = value;}
	virtual void setCreditCardInterestRate(double value){_creditCardRate = value;}
	virtual void setHomeLoanInterestRate(double value){_homeLoanRate = value;}

	// -------------------------------------------------------------------------------------------- //

protected:

	// instance
	static TextFileDataSource* _ds;

	// object collections
	static IdMap<int, User*> _users;
	static IdMap<int, Account*> _accounts;
	static IdMap<int, Transaction*> _transactions;

	// interest rates
	double _savingsRate;
	double _creditCardRate;
	double _homeLoanRate;

	// helper methods for loading data
	void ConstructAndAddCustomer(string line);
	void ConstructAndAddBankClerk(string line);
	void ConstructAndAddSavingsAccount(string line);
	void ConstructAndAddCreditCardAccount(string line);
	void ConstructAndAddHomeLoanAccount(string line);
	void ConstructAndAddWithdrawalTransaction(string line);
	void ConstructAndAddDepositTransaction(string line);
	void ConstructAndAddTransferTransaction(string line);
	void SetRates(string line);

	// helper methods for persisting data
	void persistUsers();
	void persistAccounts();
	void persistTransactions();
	void persistRates();

	// function pointer arrrays
	void (TextFileDataSource::*m_pfnsLoad[TextFileDataSource::NUMBER_OF_FILES])(string);

private:

	TextFileDataSource();
};

#endif

// end of TextFileDataSource.h
