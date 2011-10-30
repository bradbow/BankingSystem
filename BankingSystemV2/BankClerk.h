
#include "User.h"
#include <sstream>
#ifndef _BANKCLERK_H
#define _BANKCLERK_H 

/*
	Summary: modes a bank clerk user
	Author: Jeff Perkins
*/
class BankClerk : public User
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructor

	BankClerk(int userId, string password) : User(userId, password){};

	// -------------------------------------------------------------------------------------------- //
	// member methods

	virtual std::string toString()
	{
		stringstream ss;
		ss << _userId << ", ";
		ss << _password;

		std::string str;
		getline(ss, str);

		return str;
	}

	// -------------------------------------------------------------------------------------------- //

};
#endif

// end of User.h