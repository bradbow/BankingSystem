// Account.h
// Models a customer account and contains accessors
// and mutators for account information

#include "TransactionExceptions.hpp"
#include <string>
#pragma warning( disable : 4290 )
using std::string;

#ifndef _ACCOUNT_H
#define _ACCOUNT_H 

class Account
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destruction
	
	Account
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	) : _accountId(accountId), _customerId(customerId), 
	    _accountName(accountName), _interestRate(interestRate),
		_balance(balance){}

	
	// ----------------------------------------------------------------------------------------- // 
	// getters

	int getAccountId(){return _accountId;}
	int getCustomerId(){return _customerId;}
	string getAccountName(){return _accountName;}
	double getInterestRate(){return _interestRate;}
	double getBalance(){return _balance;}

	// ----------------------------------------------------------------------------------------- // 
	// setters

	void setAccountName(string value){_accountName = value;}
	void setInterestRate(double value){_interestRate = value;}
	void setBalance(double value){_balance = value;}

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void deposit(double amount) throw (TransactionException) = 0;
	virtual void applyInterest() = 0;

	// ----------------------------------------------------------------------------------------- // 

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _accountId;
	int _customerId;
	string _accountName;
	double _interestRate;
	double _balance;

	// ----------------------------------------------------------------------------------------- // 
	
};
#endif