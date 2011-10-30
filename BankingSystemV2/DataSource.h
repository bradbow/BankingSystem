#pragma once

#ifndef _DATASOURCE_H
#define _DATASOURCE_H

#include "IdMap.h"
#include "User.h"
#include "Account.h"
#include "Transaction.h"
#include <list>

/*
	Abstract interface for a source of application data.  
	Declares what a datasource must be able to do
	if it is to be compatable with the banking system.
	Templated types represent the identification type used for 
	users, accounts and transactions.

	Basic operations: retrieve, test for existence, add, remove

	Author: Brad Bow n6532365
*/
class DataSource
{

public:

	// -------------------------------------------------------------------------------------------- //
	//  virtual desturctor

	/*
		Summary: virtual destructor
		Pre: none
		Post: object destoryed
	*/
	virtual ~DataSource(void){};
	
	// -------------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: persists the application data
		Pre: none
		Post: application data persisted
	*/
	virtual void persistData() = 0;

	/*
		Summary: loads the data from teh persistence source into application objects
		Pre: none
		Post: application objects created and put into IdMap collections
	*/
	virtual void loadData() = 0;

	/*
		GETTERS FOR OBJECTS

		Summary: getters that return pointer to application objecst (users, accounts,
				 transactions)
		Pre: none
		Post: point returned to relevant object.  Null if object does not exist
			  in data source
	*/
	virtual User* getUser(int userId) = 0;
	virtual Account* getAccount(int accountId) = 0;
	virtual Transaction* getTransaction(int transactionId) = 0;

	/*
		EXISTENCE TESTING FOR OBJECTS

		Summary: existence testing for membership of objects in data source
		Pre: none
		Post: true returned if object is member of data source, false otherwise
	*/
	virtual bool userExists(int userId) = 0;
	virtual bool accountExists(int accId) = 0;
	virtual bool transactionExists(int transId) = 0;

	/*
		ADDITION OF OBJECTS TO DATA SOURCE

		Summary: addition methods for adding application objects to data source
		Pre: none
		Post: new object (user, account, transaction) is added to data source
			  and will be persisted unless removed
	*/
	virtual void addUser(User* user) = 0;
	virtual void addAccount(Account* account) = 0;
	virtual void addTransaction(Transaction* transaction) = 0;

	/*
		REMOVAL OF OBJECTS FROM DATA SOURCE
		
		Summary: removes application objects from data source
		Pre: none
		Post: if object exists it is removed from data source
	*/
	virtual void removeUser(int userId) = 0;
	virtual void removeAccount(int accountId) = 0;
	virtual void removeTransaction(int transactionId) = 0;

	/*
		RELATIONAL QUERIES ON DATA SOURCE
		
		Summary: returns collections of relational results from data source
				 i.e. customer : accounts and account : transactions
		Pre: none
		Post: list returned with desired one to many relation, if query 
			  subject has no matching records list.length == 0
	*/
	virtual list<Account*> getAccountsForUser(int userId) = 0;
	virtual list<Transaction*> getTransactionsForAccount(int accId) = 0;

	/*
		GETTERS FOR RATES
		
		Summary: returns rates for various accounts
		Pre: none
		Post: rates returned
	*/
	virtual double getSavingsInterestRate() = 0;
	virtual double getCreditCardInterestRate() = 0;
	virtual double getHomeLoanInterestRate() = 0;
	
	/*
		SETTERS FOR RATES
		
		Summary: sets rates for various accounts
		Pre: none
		Post: rates set
	*/
	virtual void setSavingsInterestRate(double value) = 0;
	virtual void setCreditCardInterestRate(double value) = 0;
	virtual void setHomeLoanInterestRate(double value) = 0;

	// -------------------------------------------------------------------------------------------- //
	
};

#endif
// end of DataSource.h
