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
		int id, double amount, int customerId, Date dt, 
		int toAccId, int fromAccId
	);

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void execute();
	virtual void rollback();
	
	// ----------------------------------------------------------------------------------------- // 
	// getters

	int getToAccountId(){return _toAccountId;}
	int getFromAccountId(){return _fromAccountId;}

	// ----------------------------------------------------------------------------------------- // 

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _fromAccountId;
	int _toAccountId;
	double _preFromAccountBalance;
	double _preToAccountBalance;

	// ----------------------------------------------------------------------------------------- // 
	
};

#endif

