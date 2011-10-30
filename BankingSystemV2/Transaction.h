
#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include <string>
#include "stdafx.h"
#include <sstream>
#include "Date.h"
#include "TransactionServices.h"

/*
	Summary: models a transaction performed on a bank account.  Transactions
			 can be excuted and rolledback.
	Author: Brad Bow
	Class Invariants: _amount >= 0
					 _id.length = TRANSACTION_ID_LENGTH
*/
class Transaction
{
public:
	
	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destruction

	/*
		Summary: consturctor
		Pre: amount >= 0
			 id.length == TRANSACTION_ID_LENGTH
		Post: Transaction object created
	*/
	Transaction (int id, double amount, Date dt)
	{
		_id = id; 
		_amount = amount; 
		_date = dt;
		_ts = TransactionServices::instance();
	}

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	/*
		Summary: executes the transactions, i.e. changes balances of involed accounts
				 can throw TransactionException
		Pre: none
		Post: balances of involed account modified
	*/
	virtual void execute() throw (TransactionException) = 0;

	/*
		Summary: rollsback a transaction, i.e. resets balance to pre transaction level
				 called in the event of a TransactionException
		Pre: none
		Post: balance of involved account reset
	*/
	virtual void rollback() = 0;

	/*
		Summary: returns a summary of a transaction object
		Pre: none
		Post: summary returned (std::string)
	*/
	virtual std::string getSummary()
	{
		stringstream amountss;
		string amt;
		amountss << "$" << _amount;
		getline(amountss, amt);

		stringstream ss;
		ss << left << setw(15) << _id;
		ss << setw(40) << _date.getDateString();
		ss << setw(40) << _transactionType;
		ss << setw(40) << "$" << right << fixed << setprecision(2) << amt;

		std::string str;
		getline(ss, str);
		return str;
	}

	// ----------------------------------------------------------------------------------------- // 
	// getters

	/*
		Summary: gets the transactino id
		Pre: none
		Post: transaction id returned
	*/
	int getId(){return _id;}
	
	/*
		Summary: gets the transaction amount
		Pre: none
		Post: _amount returned
	*/
	double getAmount(){return _amount;}
	
	/*
		Summary: gets the transaction date
		Pre: none
		Post: returns _date
	*/
	Date getDate(){return _date;}

	// ----------------------------------------------------------------------------------------- // 

protected:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _id;
	double _amount;
	Date _date;
	std::string _transactionType;
	TransactionServices* _ts;

	// ----------------------------------------------------------------------------------------- // 

};

#endif
// end of Transaction.h