#pragma once

#ifndef _TRANSFER_H
#define _TRANSFER_H

#include "Transaction.h"
#include <string>
using namespace std;

/*
	Summary: models a transfer transaction, which is made up of two transactions
			 a deposit and a withdrawal.  the from account for a transfer may only
			 be a derivative of DebitAccount
	Author: Brad Bow
	Class Invariants: _amount >= 0
					 _id.length = TRANSACTION_ID_LENGTH
					 _toAccId.length = ACCOUNT_ID_LENGTH
					 _fromAccId.length = ACCOUTN_ID_LENGTH
*/
class Transfer : public Transaction
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors
	
	/*
		Summary: consturctor
		Pre: amount >= 0
			 id.length == TRANSACTION_ID_LENGTH
			 _toAccId.length = ACCOUNT_ID_LENGTH
			 _fromAccId.length = ACCOUTN_ID_LENGTH
		Post: Transaction object created
	*/
	Transfer
	(
		int id, double amount, Date dt, 
		int toAccId, int fromAccId
	);

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
		Summary: gets the to account id
		pre: none
		post: _toAccId returned
	*/
	int getToAccountId(){return _toAccId;}

	/*
		Summary: gets the from account id
		pre: none
		post: _fromAccId returned
	*/
	int getFromAccountId(){return _fromAccId;}

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _toAccId;
	int _fromAccId;
	Deposit* _deposit;
	Withdrawal* _withdrawal;

	// ----------------------------------------------------------------------------------------- // 
	
};

#endif

// end of Transfer.h