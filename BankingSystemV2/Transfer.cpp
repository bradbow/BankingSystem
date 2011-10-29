#include "stdafx.h"

// ----------------------------------------------------------------------------------------- // 
// constructors / destructors

Transfer::Transfer
(
	int id, double amount, Date dt, int toAccId, int fromAccId
) : Transaction(id, amount, dt)
{
	_transactionType = "Transfer";
	_deposit = new Deposit(_ts->getNextTransactionId(), amount, dt, toAccId);
	_withdrawal = new Withdrawal(_ts->getNextTransactionId(), amount, dt, fromAccId);
}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Transfer::execute()
{
	_deposit->execute();
	_withdrawal->execute();
}

void Transfer::rollback()
{
	_deposit->rollback();
	_withdrawal->rollback();
}


