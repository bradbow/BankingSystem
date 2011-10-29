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
	
	if (amount < 0) throw NegativeAmountException("Cannot deposit a negative amount");
	setBalance(getBalance() + amount);

}

void DebitAccount::withdraw(double amount)
{

	if (amount < 0) throw NegativeAmountException("Cannot withdraw a negative amount");
	if (getBalance() - amount < 0) throw InsufficientFundsException("Insuffiecient funds");
	setBalance(getBalance() - amount);

}

// -------------------------------------------------------------------------------------------- //
