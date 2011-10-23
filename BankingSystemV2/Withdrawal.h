#pragma once

#ifndef _WITHDRAWAL_H
#define _WITHDRAWAL_H

#include "Transaction.h"
#include <string>
using namespace std;

class Withdrawal : public Transaction
{
public:
	 
	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	Withdrawal(int id, double amount, int customerId, Date dt, int accountId);

	// ----------------------------------------------------------------------------------------- // 
	// behaviours
	virtual void execute();
	virtual void rollback();

	// ----------------------------------------------------------------------------------------- // 
	// getters

	DebitAccount* getAccount(){return _account;}

	// ----------------------------------------------------------------------------------------- // 

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	DebitAccount* _account;
	double _preTransactionBalance;

	// ----------------------------------------------------------------------------------------- // 
	
};

#endif

