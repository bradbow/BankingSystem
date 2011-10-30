

#include "User.h"
#include <string>
using std::string;
using namespace std;

#ifndef _CUSTOMER_H
#define _CUSTOMER_H 

 /*
	Summary: Models a bank customer and contains accessors
			 and mutators for customer information. Also
			 contains functions for adding and removing accounts
			 from a customers list of accounts
	Author: Jeff Perkins
 */
class Customer : public User
{
public:
	
	// ----------------------------------------------------------------------------------------- //
	// constructors

	/*
		Summary: constructor
		Pre: userId.length == USER_ID_LENGTH
		Post: customer object created
	*/
	Customer(
		int userId,
		string password,
		string name,
		string address,
		string phoneNumber);

	// ----------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: gets customer name
		Pre: none
		Post: returns _name
	*/
	string getName(void);

	/*
		Summary: sets name
		Pre: none
		Post: _name = name
	*/
	void setName(string name);

	/*
		Summary: gets address
		Pre: none
		Post: returns _address
	*/
	string getAddress(void);

	/*
		Summary: sets address
		Pre: none
		Post: _address = address
	*/
	void setAddress(string address);

	/*
		Summary: gets phone number
		Pre: none
		Post: returns _phoneNumber
	*/
	string getPhoneNumber(void);

	/*
		Summary: sets address
		Pre: none
		Post: _phoneNumber = number
	*/
	void setPhoneNumber(string number);

	/*
		Summary: returns a string represntation of the object that can
				 be used to construct the object
		Pre: none
		Post: string representation returned
	*/
	virtual std::string toString();

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// data members

	string _name;
	string _address;
	string _phoneNumber;
	
	// ----------------------------------------------------------------------------------------- //

};
#endif

// end of customer.h