#pragma once

#ifndef _DEPOSIT_H
#define _DEPOSIT_H 
#include "Account.h"


class Deposit : public Transaction
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destructors

	Deposit(int id, double amount, Date dt, int accountId);
	
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

