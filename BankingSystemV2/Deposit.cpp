#include "stdafx.h"
// ----------------------------------------------------------------------------------------- // 
// Constructors / Destructors

Deposit::Deposit
(
	int id, double amount, Date dt, int accountId
) : Transaction(id, amount, dt)
{
	_transactionType = "Deposit";
}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Deposit::execute()
{
	_preTransactionBalance = _ts->getPreTransactionBalance(_accountId);
	_ts->deposit(_accountId, _amount);
}

void Deposit::rollback()
{
	_ts->revert(this);
}

std::string Deposit::toString()
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



