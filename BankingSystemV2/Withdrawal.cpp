#include "stdafx.h"

// ----------------------------------------------------------------------------------------- // 
// constructors / destructors

Withdrawal::Withdrawal
(
	int id, double amount, Date dt, int accountId
) : Transaction(id, amount, dt)
{
	_transactionType = "Withdrawal";
	_accountId = accountId;
}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Withdrawal::execute()
{
	_preTransactionBalance = _ts->getPreTransactionBalance(_accountId);
	_ts->withdraw(_accountId, _amount);
	_ts->saveTransaction(this);
}

void Withdrawal::rollback()
{
	_ts->revert(this);
}

std::string Withdrawal::toString()
{
	std::string str;
	stringstream ss;
	ss << _id << ",";
	ss << _amount << ",";
	ss << _date.getDateString() << ",";
	ss << _accountId;
	getline(ss, str);
	return str;
}

// ----------------------------------------------------------------------------------------- // 