#pragma once

#ifndef _CREDITACCOUNT_HPP
#define _CREDITACCOUNT_HPP

#include "CreditAccount.h"
#include <sstream>

class CreditCardAccount : public CreditAccount
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

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

	double getOverdraftLimit(){return _overdraftLimit;}

	// -------------------------------------------------------------------------------------------- //
	// setters

	void setOverdraftLimit(double value){_overdraftLimit = value;}

	// -------------------------------------------------------------------------------------------- //
	// members

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

