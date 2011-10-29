// BankClerk.h
// Models a bank clerk
#include "User.h"

#ifndef _BANKCLERK_H
#define _BANKCLERK_H 

class BankClerk : public User
{
public:

	// constructor
	// precondition: valid bank clerk details passed in
	// postcondition: bank clerk created
	BankClerk(int userName, string password);

	virtual std::string toString();


private:
	static const int NUM_FIELDS = 2;


};
#endif

