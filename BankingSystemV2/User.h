// User.h

#include <string>
using std::string;
#ifndef _USER_H
#define _USER_H 

/*
	Summary: Models a BankSystem user
	Author: Jeff Perkins
*/
class User
{
public:

	// friends to access private data members
	friend class BankClerk;
	friend class Customer;
	friend class UserServices;
	
	// -------------------------------------------------------------------------------------------- //
	// constructor / destructor

	/*
		Summary: constructor
		Pre: userId.length == USER_ID_LENGTH
		Post: user object created
	*/
	User(int userId, string password) : _userId(userId), _password(password) {}

	// -------------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: returns the userId for user
		Pre: none
		Post: returns _userId
	*/
	int getUserId(){return _userId;}

	/*
		Summary: returns a string representation of the object that can be used to construct
				 object
		Pre: none
		Post: string representation returned
	*/
	virtual std::string toString() = 0;

	// -------------------------------------------------------------------------------------------- //
	
private:

	// -------------------------------------------------------------------------------------------- //
	// data members
	
	int _userId;
	string _password;
	string _userName;

	// -------------------------------------------------------------------------------------------- //

};
#endif

// end of User.h