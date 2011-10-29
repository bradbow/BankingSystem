#pragma once

// forward declaration to avoid circular ref.
class Transaction;
class DataSource;

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

	static void deposit(int accId, double amount) throw (TransactionException);
	static void withdraw(int accId, double amount) throw (TransactionException);
	// method for reverting transactions
	static void revert(Transaction* t);

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// Data members

	TransactionServices(void);
	static TransactionServices* _ts;
	static DataSource* _ds;
	//IdGenerator _idGenerator;

	// ----------------------------------------------------------------------------------------- //
};

