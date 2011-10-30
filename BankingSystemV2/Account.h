// Account.h
// Models a customer account and contains accessors
// and mutators for account information

#include "TransactionExceptions.hpp"
#include <string>
#include <set>
#include <sstream>
#include <iomanip>

#pragma warning( disable : 4290 )
using std::string;
using namespace std;

#ifndef _ACCOUNT_H
#define _ACCOUNT_H 


/*
	Summary: This class models a bank account object
	Author: Brad Bow (n6532365 @ QUT)
	Class invariants: _balance >= 0
*/
class Account
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destruction
	
	/*
		Summary: Constructor
		Pre: 
			accountId.length() == ACCOUNT_ID_LENGTH
			customerId.length() == CUSTOMER_ID_LENGTH
			balance > 0
			interestRate > 0
		Post: account object is created
	*/
	Account
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	) : _accountId(accountId), _customerId(customerId),
	    _accountName(accountName), _interestRate(interestRate),
		_balance(balance){}

	
	// ----------------------------------------------------------------------------------------- // 
	// getters

	/*
		Summary: returns the account id for an account object
		Pre: None
		Post: _accountId (int) returned
	*/
	int getAccountId(){return _accountId;}

	/*
		Summary: returns the account name for an account object
		Pre: none
		Post: _accountName (std::string) is returned
	*/
	string getAccountName(){return _accountName;}

	/*
		Summary: returns the interest rate applied to an account object
		Pre: none
		Post: _interestRate (double) returned
	*/
	double getInterestRate(){return _interestRate;}

	/*
		Summary: gets the current balance for an account object
		Pre: none
		Post: _balance (double) is returned
	*/
	double getBalance(){return _balance;}

	/*
		Summary: returns a string representation of the account type
				 defined in derived classed
		Pre: none
		Post: _accountTypeName(std::string) returned
	*/
	string getAccountTypeName(){return _accountTypeName;}

	/*
		Summary: returns the customerId of the customer who owns this account
		Pre: none
		Post: _customerId(int) returned
	*/
	int getCustomerId(){return _customerId;}

	// ----------------------------------------------------------------------------------------- // 
	// setters

	/*
		Summary: sets the account name for the account
		Pre: none
		Post: _accountName = value
	*/
	void setAccountName(string value){_accountName = value;}

	/*
		Summary: sets the interest rate for the account
		Pre: none
		Post: _interestRate = value
	*/
	void setInterestRate(double value){_interestRate = value;}

	/*
		Summary: sets the balance for the accoun
		Pre: none
		Post: _balance = value
	*/
	void setBalance(double value){_balance = value;}

	/*
		Summary: sets the account type string for the account
		Pre: none
		Post: _accountTypeName = value
	*/
	void setAccountTypeName(string value){_accountTypeName = value;}

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	/*
		Pure Virtual
		Summary: deposits a given amount into the account
		Pre: amount > 0
		Post: balance = balance + amount
	*/
	virtual void deposit(double amount) throw (TransactionException) = 0;

	/*
		Pure Virtual
		Summary: returns a string representation of the account object
				 that allows the object to be persisted in a text file
		Pre: none
		Post: string representation (std::string) is returned
	*/
	virtual std::string toString() = 0;
	
	/*
		Summary: returns a string summary of the account (human readable)
		Pre: setAccountTypeName(std::string accountType) has been called
		Post: human readable summary returnd (std::string)
	*/
	std::string getSummary()
	{
		std::string str;
		std::stringstream ss;
		ss << setfill(' ') << setw(15) << left << _accountId;
		ss << setw(25) << _accountTypeName;
		ss << setw(40) << _accountName;
		ss << setw(10) << right << fixed << setprecision(2) << "$ " << _balance;
		getline(ss, str);
		return str;
	}

	// ----------------------------------------------------------------------------------------- // 

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _accountId;
	int _customerId;
	string _accountName;
	double _interestRate;
	double _balance;
	string _accountTypeName;

	// ----------------------------------------------------------------------------------------- // 
	
};
#endif