#pragma once

#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H

#include <sstream>
#include "DebitAccount.h"

/*
	For the specification given SavingsAccount does not actually extend DebitAccount
*/
class SavingsAccount : public DebitAccount
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors
	SavingsAccount
	(
		int accountId, string accountName,
		double interestRate, double balance = 0
	) : DebitAccount
	(
		accountId, accountName,
		interestRate, balance = 0
	)  
	{
		setAccountTypeName("Savings");
	}
	
	// -------------------------------------------------------------------------------------------- //
	// members

	std::string toString()
	{
		stringstream ss;
		ss << getAccountId() << ", ";
		ss << getAccountName() << ", ";
		ss << getInterestRate() << ", ";
		ss << getBalance();

		std::string str;
		getline(ss, str);

		return str;
	}
};

#endif

