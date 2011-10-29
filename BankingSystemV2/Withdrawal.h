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

	Withdrawal(int id, double amount, Date dt, int accountId);

	// ----------------------------------------------------------------------------------------- // 
	// behaviours
	virtual void execute();
	virtual void rollback();
	virtual std::string toString();

	// ----------------------------------------------------------------------------------------- // 
	// getters

	double getPreTransactionBalance(){return _preTransactionBalance;}
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

