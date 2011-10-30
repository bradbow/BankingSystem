#include "stdafx.h"

// -------------------------------------------------------------------------------------------- //
// constructors / destructors

/*
	Summary: constructor
	Pre: customerId.length == CUSTOMER_ID_LENGTH
			interesetRate >= 0.00
	Post: CreditCardAccount created
*/
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

/*
	Summary: deposits money into a debit account
	Pre: amount > 0
	Post: _balance = _balance + amount
*/
void DebitAccount::deposit(double amount)
{
	
	if (amount < 0) throw NegativeAmountException("Cannot deposit a negative amount");
	setBalance(getBalance() + amount);

}

/*
	Summary: performs a withdrawal on a DebitAccount
	Pre: amount > 0
			_balance - amount > 0
	Post: _balance = _balacne - amount
*/
void DebitAccount::withdraw(double amount)
{

	if (amount < 0) throw NegativeAmountException("Cannot withdraw a negative amount");
	if (getBalance() - amount < 0) throw InsufficientFundsException("Insuffiecient funds");
	setBalance(getBalance() - amount);

}

// -------------------------------------------------------------------------------------------- //
// end of DebitAccount.cpp