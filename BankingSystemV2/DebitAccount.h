#pragma once

#ifndef _DEBITACCOUNT_H
#define _DEBITACCOUNT_H

#include "Account.h"

class DebitAccount: public Account
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	DebitAccount
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	void withdraw(double amount);
	virtual void deposit(double amount) throw (TransactionException);
	virtual void applyInterest();
	virtual std::string toString() = 0;

	// -------------------------------------------------------------------------------------------- //

};

#endif

