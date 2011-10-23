#pragma once

#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H

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
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	) : DebitAccount
	(
		accountId, customerId, accountName,
		interestRate, balance = 0
	){}
	
	// -------------------------------------------------------------------------------------------- //
	
};

#endif

