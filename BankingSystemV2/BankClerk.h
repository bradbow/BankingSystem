// BankClerk.h
// Models a bank clerk
#include "user.h"

#ifndef _BANKCLERK_H
#define _BANKCLERK_H 

class BankClerk : public User
{
public:
	// constructor
	// precondition: valid bank clerk details passed in
	// postcondition: bank clerk created
	BankClerk(int userName, string password, int extraMember);
	// destructor
	// precondition: none
	// postcondition: memory deallocated
	~BankClerk(void);
	string operator<< (const BankClerk &rhs);
	virtual std::string toString();

private:
	static const int NUM_FIELDS = 2;
	int _extraMember;
};
#endif

