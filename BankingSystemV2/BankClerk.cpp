// BankClerk.cpp
// Models a bank clerk

#include "stdafx.h"

// constructor
// precondition: valid bank clerk details passed in
// postcondition: bank clerk created
BankClerk::BankClerk(
	int userName, 
	string password) : 
User(userName, password){}

std::string BankClerk::toString()
{
	stringstream ss;
	ss << _userId << ", ";
	ss << _password;

	std::string str;
	getline(ss, str);

	return str;
}



