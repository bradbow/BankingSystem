#include "stdafx.h"

// ----------------------------------------------------------------------------------------- // 
// constructors / destructors

Withdrawal::Withdrawal
(
	int id, double amount, Date dt, int accountId
) : Transaction(id, amount, dt)
{
	_transactionType = "Withdrawal";
}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Withdrawal::execute()
{
	_preTransactionBalance = _ts->getPreTransactionBalance(_accountId);
	_ts->deposit(_accountId, _amount);
}

void Withdrawal::rollback()
{
	_ts->revert(this);
}