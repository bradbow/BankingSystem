#pragma once

// forward declaration to avoid circular ref.
class Transaction;
class Deposit;
class Withdrawal;
class DataSource;
#include <list>
#include "PhraseGenerator.h"

/*
	Summary: This class employs a modified facade pattern
		     to provide creation and manipulation of lower level
			 objects
	Author: Brad Bow & Jeff Perkins
*/
class TransactionServices
{
public:

	// ----------------------------------------------------------------------------------------- //
	// instance retrieval / destruction
	
	/*
		Summary: returns a static instance of this class
		Pre: none
		Post: instance returned
	*/
	static TransactionServices* instance();

	/*
		Summary: destructor
		Pre: none
		Post: dynamic memory freed
	*/
	~TransactionServices();

	// ----------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: retrieve a balance for an account pre transaction
		Pre: TextFileDataSource::getInstance()->getAccount(accId) != NULL (account exists)
		Post: pre transation balane is returned
	*/
	static double getPreTransactionBalance(int accId);
	
	/*
		Summary: gets a transaction by id
		Pre: none
		Post: returns a point to Transaction object identified by id, return NULL
			  pointer if no such object exists in data source
	*/
	static Transaction* getTransaction(int id);

	/*
		Summary: sets the data source this service is to communicate with
		Pre: none
		Post: data source set
	*/
	static void setDataSource(DataSource* ds){_ds = ds;}

	/*
		Summary: gets the next unique transaction id
		Pre: 
		Post: int returned of digit length TRANSACTION_ID_LENGTH
	*/
	static int getNextTransactionId();

	/*
		Summary: returns all the transaction associated with a particular 
				 account, identified by accId
		Pre: none
		Post: list returned containing Transation* to Transactions for acc.
			  if account does not exist list.length == 0
	*/
	static list<Transaction*> getTransactionsForAccount(int accId);

	/*
		Summary: performs a deposit, can throw transaction
		Pre: accId identifies an account, amount >= 0
		Post: deposit performed successfully or exception thrown
	*/
	static void deposit(int accId, double amount) throw (TransactionException);

	/*
		Summary: performs a withdrawal, can throw exception
		Pre: addId identifies an account, amount >= 0
		Post: withdrawal performed successfully or exception thrown
	*/
	static void withdraw(int accId, double amount) throw (TransactionException);
	
	/*
		Summary: reverts a transaction, makes use of Transaction.rollback()
		Pre: none
		Post: transaction effects reveresed
	*/
	static void revert(Transaction* t);

	/*
		Summary: returns the current system date
		Pre: none
		Post: current date returned
	*/
	static Date getCurrentDate(char delim);

	/*
		Summary: saves a transaction to the data source
		Pre: none
		Post: transaction saved to data source
	*/
	static void saveTransaction(Transaction* t);

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// Data members

	TransactionServices(void);
	static TransactionServices* _ts;
	static DataSource* _ds;
	static PhraseGenerator* _pg;

	// ----------------------------------------------------------------------------------------- //

};

// enf of TransactionServices.h