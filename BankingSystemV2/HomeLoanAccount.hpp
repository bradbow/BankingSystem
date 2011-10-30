#pragma once

#ifndef _HOMELOANACCOUNT_H
#define _HOMELOANACCOUNT_H

#include "creditaccount.h"
#include <sstream>
#include <string>

/*
	Summary: Models a home loand account, adds 
			 additional fields, property address, 
			 repayment option and minRepayment
	Author: Brad Bow
	Class Invariants: _repaymentOptions E RepaymentOption enum
					  
*/
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
	
	/*
		Summary: constructor
		Pre: customerId.length == CUSTOMER_ID_LENGTH
			 interestRate >= 0.00
			 minReapyment > = 0
		Post: HomeLoanAccount created
	*/
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

	/*
		Summary: returns the address for the home loan
		Pre: none
		Post: _address returned
	*/
	std::string getAddress(){return _address;}

	
	/*
		Summary: gets the repayment option for the home loan
		Pre: none
		Post: _repaymentOption is returned
	*/
	HomeLoanAccount::RepaymentOption getRepaymentOption(){return _option;}

	
	/*
		Summary: gets the minimum required payment for the home loan
		Pre: none
		Post: _minRepayment returned
	*/
	double getMinRepayment(){return _minRepayment;}

	// -------------------------------------------------------------------------------------------- //
	// setters

	
	/*
		Summary: sets the repayment option
		Pre: value E RepaymentOption enum
		Post: _options = value
	*/
	void setRepaymentOption(HomeLoanAccount::RepaymentOption value){_option = value;}
	
	
	/*
		Summary: sets the min repayment for the home loan
		Pre: value >= 0
		Post: _minRepayment = value
	*/
	void setMinRepayment(double value){_minRepayment = value;}
	
	// -------------------------------------------------------------------------------------------- //
	// members

	
	/*
		Summary: returns a string representation of the account object
				 that allows the object to be persisted in a text file
		Pre: none
		Post: string representation (std::string) is returned
	*/
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

	// -------------------------------------------------------------------------------------------- //

private:

	// -------------------------------------------------------------------------------------------- //
	// data members

	std::string _address;
	HomeLoanAccount::RepaymentOption _option;
	double _minRepayment;

	// -------------------------------------------------------------------------------------------- //
};

#endif
// end of HomeLoanAccount.hpp
