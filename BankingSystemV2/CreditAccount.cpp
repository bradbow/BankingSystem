#include "stdafx.h"

// -------------------------------------------------------------------------------------------- //
// constructors / destructors

/*
	Summary: Constructor
	Pre:	
			customerId.length == CUSTOMER_ID_LENGTH
			interestRate >= 0.00
			balance == 0
	Post: CreditAccount object is created.
*/
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

/*
	Summary: performs a deposit on the account
	Pre: amount <= _balance (can't pay more that is owing)
	Post: _balance = _balance - amount
*/
void CreditAccount::deposit(double amount)
{
	if (amount < 0) throw NegativeAmountException("Deposit amount must be positive");
	if (getBalance() - amount < 0) throw PaymentMoreThanOwingException("Cannot pay more than is owing");
	setBalance(getBalance() - amount);
}

// -------------------------------------------------------------------------------------------- //
// end of CreditAccount.cpp



