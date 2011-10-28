#pragma once

#ifndef _CREDITACCOUNT_H
#define _CREDITACCOUNT_H

#include "account.h"

class CreditAccount : public Account
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	CreditAccount
	(	
		int accountId, string accountName,
		double interestRate, double balance = 0
	);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	virtual void deposit(double amount) throw (TransactionException);
	virtual void applyInterest();
	virtual std::string toString() = 0;

};

#endif

