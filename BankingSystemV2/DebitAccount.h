#pragma once

#ifndef _DEBITACCOUNT_H
#define _DEBITACCOUNT_H
#include "Account.h"

/*
	Summary: Models a debitable account, i.e. an account
			 that can be withdrawn from
	Pre: customerId.length == CUSTOMER_ID_LENGTH
		 interestRate >= 0.00
	Class Invariants: _balance >= 0
*/
class DebitAccount: public Account
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	/*
		Summary: Constructor
		Pre: customerId.length == CUSTOMER_ID_LENGTH
		Post: DebitAccount Ojbect created
	*/
	DebitAccount
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance = 0
	);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	/*
		Summary: performs a withdrawal on a DebitAccount
		Pre: amount > 0
			 _balance - amount > 0
		Post: _balance = _balacne - amount
	*/
	void withdraw(double amount);
	
	/*
		Summary: deposits money into a debit account
		Pre: amount > 0
		Post: _balance = _balance + amount
	*/
	virtual void deposit(double amount) throw (TransactionException);
	
	/*
		Summary: returns a string representation of the account object
				 that allows the object to be persisted in a text file
		Pre: none
		Post: string representation (std::string) is returned
	*/
	virtual std::string toString() = 0;

	// -------------------------------------------------------------------------------------------- //

};

#endif

