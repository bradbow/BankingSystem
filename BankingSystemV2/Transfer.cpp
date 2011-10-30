#include "stdafx.h"

// ----------------------------------------------------------------------------------------- // 
// constructors / destructors

Transfer::Transfer
(
	int id, double amount, Date dt, int toAccId, int fromAccId
) : Transaction(id, amount, dt)
{
	_transactionType = "Transfer";
	_toAccId = toAccId;
	_fromAccId = fromAccId;
}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Transfer::execute()
{
	// create component transactions
	_deposit = new Deposit(_ts->getNextTransactionId(), _amount, _date, _fromAccId);
	_withdrawal = new Withdrawal(_ts->getNextTransactionId(), _amount, _date, _toAccId);

	// perform
	_deposit->execute();
	_withdrawal->execute();

	// persist componenet transactions
	_ts->saveTransaction(_deposit);
	_ts->saveTransaction(_withdrawal);
	_ts->saveTransaction(this);
}

void Transfer::rollback()
{
	_deposit->rollback();
	_withdrawal->rollback();
}

std::string Transfer::toString()
{
	std::string str;
	stringstream ss;
	ss << _id << ",";
	ss << _amount << ",";
	ss << _withdrawal->getAccountId() << ",";
	ss << _deposit->getAccountId();
	getline(ss, str);
	return str;
}

// ----------------------------------------------------------------------------------------- // 
