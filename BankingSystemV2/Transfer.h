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

	virtual void execute();
	virtual void rollback();
	
	// ----------------------------------------------------------------------------------------- // 
	// getters

	Deposit* getDeposit(){return _deposit;}
	Withdrawal* getWithdrawal(){return _withdrawal;}

	// ----------------------------------------------------------------------------------------- // 

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	Deposit* _deposit;
	Withdrawal* _withdrawal;

	// ----------------------------------------------------------------------------------------- // 
	
};

#endif

