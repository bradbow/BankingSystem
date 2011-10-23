#pragma once

#ifndef _CREDITACCOUNT_HPP
#define _CREDITACCOUNT_HPP

#include "CreditAccount.h"

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
	), _overdraftLimit(overdraftLimit) {}

	// -------------------------------------------------------------------------------------------- //
	// getters

	double getOverdraftLimit(){return _overdraftLimit;}

	// -------------------------------------------------------------------------------------------- //
	// setters

	void setOverdraftLimit(double value){_overdraftLimit = value;}

	// -------------------------------------------------------------------------------------------- //

private:

	// -------------------------------------------------------------------------------------------- //
	// data members

	double _overdraftLimit;

	// -------------------------------------------------------------------------------------------- //

};

#endif

