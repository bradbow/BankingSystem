#include "stdafx.h"

// -------------------------------------------------------------------------------------------- //
// constructors / destructors

CreditAccount::CreditAccount
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

void CreditAccount::deposit(double amount)
{
	if (amount < 0) throw NegativeAmountException("Deposit amount must be positive");
	if (getBalance() - amount < 0) throw PaymentMoreThanOwingException();
	setBalance(getBalance() - amount);
}

void CreditAccount::applyInterest()
{

}


