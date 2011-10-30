#pragma once
#include "BaseException.hpp"

#ifndef _TRANSACTIONEXCEPTIONS_H
#define _TRANSACTIONEXCEPTIONS_H

/*
	Summary: Class of exception that deals will transactions
	Author: Brad Bow
	
	Note: method contracts are same as BaseException
*/
class TransactionException: public BaseException
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	TransactionException(void){}
	TransactionException(std::string msg) : BaseException(msg) {}

	// ----------------------------------------------------------------------------------------- // 

};

/*
	Summary: indicates a trancsation has been attempted with an illegal negative abmount
	Author: Brad Bow
*/
class NegativeAmountException : public TransactionException
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	NegativeAmountException(void){}
	NegativeAmountException(std::string msg) : TransactionException(msg) {}

};

/*
	Summary: indicates that a transaction has been attempted where insuffiecien funds are available
	Author: Brad Bow
*/
class InsufficientFundsException : public TransactionException
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	InsufficientFundsException(void){}
	InsufficientFundsException(std::string msg) : TransactionException(msg) {}

};

/*
	Summary: indicates a trancsation has been attempted where a payment has been made that is more than 
			 is owing
	Author: Brad Bow
*/
class PaymentMoreThanOwingException : public TransactionException
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	PaymentMoreThanOwingException(void){}
	PaymentMoreThanOwingException(std::string msg) : TransactionException(msg) {}

};

#endif


