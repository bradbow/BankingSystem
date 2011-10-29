#pragma once

#ifndef _HOMELOANACCOUNT_H
#define _HOMELOANACCOUNT_H

#include "creditaccount.h"
#include <sstream>
#include <string>

class HomeLoanAccount : public CreditAccount
{
public:

	enum RepaymentOption
	{
		MONTHLY,
		FORTNIGHTLY,
		WEEKLY
	};

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors
	HomeLoanAccount
	(
		int accountId, int customerId, string accountName,
		double interestRate, double balance,
		std::string address, RepaymentOption option, 
		double minRepayment
	) : CreditAccount
	(
		accountId, customerId, accountName, 
		interestRate, balance
	), _address(address), _option(option), _minRepayment(minRepayment)
	{
		setAccountTypeName("Home Loan");
	}
	
	// -------------------------------------------------------------------------------------------- //
	// getters

	std::string getAddress(){return _address;}
	HomeLoanAccount::RepaymentOption getRepaymentOption(){return _option;}
	double getMinRepayment(){return _minRepayment;}

	// -------------------------------------------------------------------------------------------- //
	// setters

	void setRepaymentOption(HomeLoanAccount::RepaymentOption value){_option = value;}
	void setMinRepayment(double value){_minRepayment = value;}
	
	// -------------------------------------------------------------------------------------------- //
	// members

	std::string toString()
	{
		stringstream ss;
		ss << getAccountId() << ", ";
		ss << getCustomerId() << ", ";
		ss << getAccountName() << ", ";
		ss << getInterestRate() << ", ";
		ss << getBalance() << ", ";
		ss << _address << ", ";
		ss << _option << ", ";
		ss << _minRepayment;

		std::string str;
		getline(ss, str);

		return str;
	}

private:

	// -------------------------------------------------------------------------------------------- //
	// data members

	std::string _address;
	HomeLoanAccount::RepaymentOption _option;
	double _minRepayment;

};

#endif

