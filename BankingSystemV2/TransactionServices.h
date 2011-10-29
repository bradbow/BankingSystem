#pragma once

// forward declaration to avoid circular ref.
class Transaction;
class Deposit;
class Withdrawal;
class DataSource;

#include <list>
#include "PhraseGenerator.h"

class TransactionServices
{
public:

	// ----------------------------------------------------------------------------------------- //
	// instance retrieval
	
	static TransactionServices* instance();

	// ----------------------------------------------------------------------------------------- //
	// member methods

	// method for getting pre transaction balances
	static double getPreTransactionBalance(int accId);
	static Transaction* getTransaction(int id);

	// set the data source for this service
	static void setDataSource(DataSource* ds){_ds = ds;}

	static int getNextTransactionId();

	static list<Transaction*> getTransactionsForAccount(int accId);

	static void deposit(int accId, double amount) throw (TransactionException);
	static void withdraw(int accId, double amount) throw (TransactionException);
	
	// method for reverting transactions
	static void revert(Transaction* t);

	static Date getCurrentDate(char delim);

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
	// constants
	static const int ID_LENGTH = 8;
};

