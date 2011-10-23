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
		NUMBER_OF_FILES
	};

	// constructors / destructors
	static TextFileDataSource* getInstance();
	void setFileNames(string fileNames[]);
	virtual ~TextFileDataSource(void){};

	// persistence
	virtual void persistData();
	virtual void loadData();

	// getters for application objects
	virtual User* getUser(int userId){return _users.get(userId);}
	virtual Account* getAccount(int accountId){return _accounts.get(accountId);}
	virtual Transaction* getTransaction(int transactionId){return _transactions.get(transactionId);}

	// methods to add application objects
	// TODO Brad: implement
	virtual void addUser(User* user){_users.add(user->getUserId(), user);}
	virtual void addAccount(Account* account){_accounts.add(account->getAccountId(), account);}
	virtual void addTransaction(Transaction* transaction){_transactions.add(transaction->getId(), transaction);}

	// methods to remove application objects from data source
	// TODO Brad: implement
	virtual void removeUser(int userId){_users.remove(userId);}
	virtual void removeAccount(int accountId){_accounts.remove(accountId);}
	virtual void removeTransaction(int transactionId){_transactions.remove(transactionId);}
	
protected:

	static TextFileDataSource* _ds;

	// file names
	static std::string* _fileNames;

	// object collections
	static IdMap<int, User*> _users;
	static IdMap<int, Account*> _accounts;
	static IdMap<int, Transaction*> _transactions;

	// helper methods
	void ConstructAndAddCustomer(string line);
	void ConstructAndAddBankClerk(string line);
	void ConstructAndAddSavingsAccount(string line);
	void ConstructAndAddCreditCardAccount(string line);
	void ConstructAndAddHomeLoanAccount(string line);
	void ConstructAndAddWithdrawalTransaction(string line);
	void ConstructAndAddDepositTransaction(string line);
	void ConstructAndAddTransferTransaction(string line);

	// function pointer arrray
	void (TextFileDataSource::*m_pfns[TextFileDataSource::NUMBER_OF_FILES])(string);

private:

	TextFileDataSource();
};

#endif


