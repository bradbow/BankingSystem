#pragma once

#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H
#include <sstream>
#include "DebitAccount.h"

/*
	Summary: Models a savings account, most basic form of DebitAccount
	Author: Brad Bow
	Class Invariants: _balance >= 0
*/
class SavingsAccount : public DebitAccount
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	/*
		Summary: constructor
		Pre: customerId.length == CUSTOMER_ID_LENGTH
			 interestRate >= 0.00
		Post: SavingsAccount object created
	*/
	SavingsAccount
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	) : DebitAccount
	(
		accountId, customerId, accountName,
		interestRate, balance
	)  
	{
		setAccountTypeName("Savings");
	}
	
	// -------------------------------------------------------------------------------------------- //
	// members

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
		ss << getBalance();

		std::string str;
		getline(ss, str);

		return str;
	}

	// -------------------------------------------------------------------------------------------- //
};

#endif
// end of SavingsAccount.hpp
