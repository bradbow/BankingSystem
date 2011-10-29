// Models a bank customer and contains accessors
// and mutators for customer information. Also
// contains functions for adding and removing accounts
// from a customers list of accounts

#include "User.h"
#include <string>
using std::string;
using namespace std;

#ifndef _CUSTOMER_H
#define _CUSTOMER_H 

class Customer : public User
{
public:
	
	// constructor
	// preconditions: valid customer details passed in
	// postcondition: customer created
	Customer(
		int userName,
		string password,
		string name,
		string address,
		string phoneNumber);

	// destructor
	// precondition: none
	// postcondition: memory deallocated
	~Customer(void);

	// precondition: none
	// postcondition: returns name
	string getName(void);

	// precondition: valid name passed in
	// postcondition: name set
	void setName(string name);

	// precondition: none
	// postcondition: address returned
	string getAddress(void);

	// precondition: valid address passed in
	// postcondition: address returned
	void setAddress(string address);

	// precondition: none
	// postcondition: phone no returned
	string getPhoneNumber(void);

	// precondition: valid phone no passed in
	// postcondition: phone no set
	void setPhoneNumber(string number);

	virtual std::string toString();

private:
	string _name;
	string _address;
	string _phoneNumber;
};
#endif

