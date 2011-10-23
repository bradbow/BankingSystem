#include "stdafx.h"
// ----------------------------------------------------------------------------------------- // 
// Constructors / Destructors

Deposit::Deposit
(
	int id, double amount, int customerId, 
	Date dt, int accountId
) : Transaction(id, amount, customerId, dt)
{
	//_account = AccountServices::instance()->getAccount(accountId);
	// _preTransactionBalance = _account->getBalance();
}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Deposit::execute()
{
	//_account->deposit(_amount);
}

void Deposit::rollback()
{
	//_account->setBalance(_preTransactionBalance);
}



