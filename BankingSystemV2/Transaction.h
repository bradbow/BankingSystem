
#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include <string>
#include "stdafx.h"
#include "Date.h"

class Transaction
{
public:
	
	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destruction

	Transaction (int id, double amount, int customerId, Date dt)
	{
		_id = id; 
		_amount = amount; 
		_customerId = customerId; 
		_date = dt;
	}

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void execute() = 0;
	virtual void rollback() = 0;

	// ----------------------------------------------------------------------------------------- // 
	// getters

	int getId(){return _id;}
	double getAmount(){return _amount;}
	int getCustomerId(){return _customerId;}
	Date getDate(){return _date;}

	// ----------------------------------------------------------------------------------------- // 

protected:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _id;
	double _amount;
	int _customerId;
	Date _date;

	// ----------------------------------------------------------------------------------------- // 

};

#endif
