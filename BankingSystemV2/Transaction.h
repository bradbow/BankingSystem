
#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include <string>
#include "stdafx.h"
#include <sstream>
#include "Date.h"
#include "TransactionServices.h"

class Transaction
{
public:
	
	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destruction

	Transaction (int id, double amount, Date dt)
	{
		_id = id; 
		_amount = amount; 
		_date = dt;
		_ts = TransactionServices::instance();
	}

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void execute() = 0;
	virtual void rollback() = 0;
	virtual std::string getSummary()
	{
		stringstream ss;
		ss << _id << "     ";
		ss << _date.getDateString() << "      ";
		ss << _transactionType << "      ";
		ss << _amount << "     ";

		std::string str;
		getline(ss, str);
		return str;
	}

	// ----------------------------------------------------------------------------------------- // 
	// getters

	int getId(){return _id;}
	double getAmount(){return _amount;}
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
