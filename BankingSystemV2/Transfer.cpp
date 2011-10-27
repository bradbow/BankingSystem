#include "stdafx.h"

// ----------------------------------------------------------------------------------------- // 
// constructors / destructors

Transfer::Transfer
(
	int id, double amount, int customerId, 
	Date dt, int toAccId, int fromAccId
) : Transaction(id, amount, customerId, dt)
{
	_transactionType = "Deposit";
	_toAccountId = toAccId;
	_fromAccountId = fromAccId;
	//_preFromAccountBalance = _fromAccount->getBalance();
	//_preToAccountBalance = _toAccount->getBalance();

}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Transfer::execute()
{
	//_fromAccount->withdraw(_amount);
	//_toAccount->deposit(_amount);
}

void Transfer::rollback()
{
	//_toAccount->setBalance(_preToAccountBalance);
	//_fromAccount->setBalance(_preFromAccountBalance);
}


