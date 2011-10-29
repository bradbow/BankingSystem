#include "stdafx.h"

// -------------------------------------------------------------------------------------------- //
// constructors / destructors

DebitAccount::DebitAccount
(
	int accountId, int customerId, string accountName,
	double interestRate, double balance
) : 
Account
(
	accountId, customerId, accountName, 
	interestRate, balance
) {}
 
// -------------------------------------------------------------------------------------------- //
// behaviours

void DebitAccount::applyInterest()
{
	// TODO apply interest
}

void DebitAccount::deposit(double amount)
{
	
	if (amount < 0) throw NegativeAmountException();
	setBalance(getBalance() + amount);

}

void DebitAccount::withdraw(double amount)
{

	if (amount < 0) throw NegativeAmountException();
	if (getBalance() - amount < 0) throw InsufficientFundsException();
	setBalance(getBalance() - amount);

}

// -------------------------------------------------------------------------------------------- //
