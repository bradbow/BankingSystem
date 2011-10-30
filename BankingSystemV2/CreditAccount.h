#pragma once

#ifndef _CREDITACCOUNT_H
#define _CREDITACCOUNT_H
#include "account.h"

/*
	Summary: Models a credit account.  A credit account is an account
			 that can not be withdrawn from.  The balance of a credit 
			 account represents an amount owing and thus decreases with
			 deposits.
	Author: Brad Bow
	Class Invariants: _balance >= 0
*/
class CreditAccount : public Account
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	/*
		Summary: Constructor
		Pre:	
			 customerId.length == CUSTOMER_ID_LENGTH
			 interestRate >= 0.00
			 balance == 0
		Post: CreditAccount object is created.
	*/
	CreditAccount
	(	
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	/*
		Summary: performs a deposit on the account
		Pre: amount <= _balance (can't pay more that is owing)
		Post: _balance = _balance - amount
	*/
	virtual void deposit(double amount) throw (TransactionException);

	/*
		Pure Virtual
		Summary: returns a string representation of the account object
				 that allows the object to be persisted in a text file
		Pre: none
		Post: string representation (std::string) is returned
	*/
	virtual std::string toString() = 0;

	// -------------------------------------------------------------------------------------------- //

};

#endif
// end CreditAccount.h

