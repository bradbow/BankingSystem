#pragma once

#ifndef _DATASOURCE_H
#define _DATASOURCE_H

#include "IdMap.h"
#include "User.h"
#include "Account.h"
#include "Transaction.h"
#include <list>

class DataSource
{

/*
	Abstract interface for a source of application data.  
	Declares what a datasource must be able to do
	if it is to be compatable with the banking system.
	Templated types represent the identification type used for 
	users, accounts and transactions.

	Author: Brad Bow n6532365
*/
public:

	// virtural destructor to account for different requirements in derived classes
	virtual ~DataSource(void){};

	// persistence fucntions
	virtual void persistData() = 0;
	virtual void loadData() = 0;

	// getters for application objects
	virtual User* getUser(int userId) = 0;
	virtual Account* getAccount(int accountId) = 0;
	virtual Transaction* getTransaction(int transactionId) = 0;

	// testing for existence of application objects
	virtual bool userExists(int userId) = 0;
	virtual bool accountExists(int accId) = 0;
	virtual bool transactionExists(int transId) = 0;

	// methods to add application objects
	virtual void addUser(User* user) = 0;
	virtual void addAccount(Account* account) = 0;
	virtual void addTransaction(Transaction* transaction) = 0;

	// methods to remove application objects from data source
	virtual void removeUser(int userId) = 0;
	virtual void removeAccount(int accountId) = 0;
	virtual void removeTransaction(int transactionId) = 0;

	// relational queries
	virtual list<Account*> getAccountsForUser(int userId) = 0;
	virtual list<Transaction*> getTransactionsForAccount(int accId) = 0;

	// methods for retrieving interest rates
	virtual double getSavingsInterestRate() = 0;
	virtual double getCreditCardInterestRate() = 0;
	virtual double getHomeLoanInterestRate() = 0;
	
	// methods for setting global interest rates
	virtual void setSavingsInterestRate(double value) = 0;
	virtual void setCreditCardInterestRate(double value) = 0;
	virtual void setHomeLoanInterestRate(double value) = 0;

};

#endif

