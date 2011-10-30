#pragma once

#ifndef _CREDITACCOUNT_HPP
#define _CREDITACCOUNT_HPP
#include "CreditAccount.h"
#include <sstream>

// TODO Brad: exception for balance < overdraft

/*
	Summary: Models a credit card account.  
			 A credit card has an overdraft limit.
	Pre: none
	Post: credit card object created
	Class Invariants: _balance >= 0
					  _balance <= _overdraftLimit
*/
class CreditCardAccount : public CreditAccount
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	/*
		Summary: constructor
		Pre: customerId.length == CUSTOMER_ID_LENGTH
			 interesetRate >= 0.00
		Post: CreditCardAccount created
	*/
	CreditCardAccount
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance, double overdraftLimit
	) : 
	CreditAccount
	(
		accountId, customerId, accountName, 
		interestRate, balance
	), _overdraftLimit(overdraftLimit)
	{
		setAccountTypeName("Credit Card");
	}

	// -------------------------------------------------------------------------------------------- //
	// getters

	/*
		Summary: getter for overdraft limit
		Pre: none
		Post: _overdraftLimit returned
	*/
	double getOverdraftLimit(){return _overdraftLimit;}

	// -------------------------------------------------------------------------------------------- //
	// setters

	/*
		Summary: sets the overdraft limit for the account
		Pre: value >= 0
		Post: _overdraftLimti == value
	*/
	void setOverdraftLimit(double value){_overdraftLimit = value;}

	// -------------------------------------------------------------------------------------------- //
	// members

	/*
		Summary: to be implemented at a future time, made
				 difficult by absence of a built in date class
		Pre: none
		Post: _balance is incremented according to interest scheme
	*/
	virtual void applyInterest(){}

	/*
		Summary: returns a string representation of the account object
				 that allows the object to be persisted in a text file
		Pre: none
		Post: string representation (std::string) is returned
	*/
	std::string toString()
	{
		stringstream ss;
		ss << getAccountId() << ", ";
		ss << getCustomerId() << ", ";
		ss << getAccountName() << ", ";
		ss << getInterestRate() << ", ";
		ss << getBalance() << ", ";
		ss << _overdraftLimit;

		std::string str;
		getline(ss, str);

		return str;
	}

private:

	// -------------------------------------------------------------------------------------------- //
	// data members

	double _overdraftLimit;

	// -------------------------------------------------------------------------------------------- //

};

#endif
// end CreditCardAccount.hpp
