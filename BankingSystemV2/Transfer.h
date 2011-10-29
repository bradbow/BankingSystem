#pragma once

#ifndef _TRANSFER_H
#define _TRANSFER_H

#include "Transaction.h"
#include <string>

using namespace std;

class Transfer : public Transaction
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors
	
	Transfer
	(
		int id, double amount, Date dt, 
		int toAccId, int fromAccId
	);

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void execute() throw (TransactionException);
	virtual void rollback() throw (TransactionException);
	virtual std::string toString();

	// ----------------------------------------------------------------------------------------- // 

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

