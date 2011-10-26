#include "stdafx.h"

// ----------------------------------------------------------------------------------------- // 
// constructors / destructors

Withdrawal::Withdrawal
(
	int id, double amount, int customerId, 
	Date dt, int accountId
) : Transaction(id, amount, customerId, dt)
{
	
	//_preTransactionBalance = _account->getBalance();

}

// ----------------------------------------------------------------------------------------- // 
// behaviours

void Withdrawal::execute()
{
	//_account->withdraw(_amount);
}

void Withdrawal::rollback()
{
	//_account->setBalance(_preTransactionBalance);
}