#pragma once

#ifndef _DEPOSIT_H
#define _DEPOSIT_H 
#include "Account.h"

/*
	Summary: models a depoist transaction that can succeed or fail
			 can be rolled back
	Author: Brad Bow
	Class Invariants: _amount >= 0
					_id.length = TRANSACTION_ID_LENGTH
					_accoundId.length = ACCOUNT_ID_LENGTH
*/
class Deposit : public Transaction
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destructors
	
	/*
		Summary: consturctor
		Pre: amount >= 0
			 id.length == TRANSACTION_ID_LENGTH
		Post: Transaction object created
	*/
	Deposit(int id, double amount, Date dt, int accountId);
	
	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	/*
		Summary: executes the transactions, i.e. changes balances of involed accounts
				 can throw TransactionException
		Pre: none
		Post: balances of involed account modified
	*/
	virtual void execute() throw (TransactionException);

	/*
		Summary: rollsback a transaction, i.e. resets balance to pre transaction level
				 called in the event of a TransactionException
		Pre: none
		Post: balance of involved account reset
	*/
	virtual void rollback();

	/*
		Summary: returns a string representation of the object, that can be used
				 to reconstruct the ojbect from a persistable data source
		Pre: none
		Post: string represetation returned (std::string)
	*/
	virtual std::string toString();

	// ----------------------------------------------------------------------------------------- // 
	// getters

	/*
		Summary: gets the pre transaction balance
		Pre: none
		Post: _preTransactionBalance returned
	*/
	double getPreTransactionBalance(){return _preTransactionBalance;}

	/*
		Summary: gets the account id for the deposit
		Pre: none
		Post: _accountId returned
	*/
	int getAccountId(){return _accountId;}

	// ----------------------------------------------------------------------------------------- // 
	
private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _accountId;
	double _preTransactionBalance;

	// ----------------------------------------------------------------------------------------- // 

};

#endif

