#include "User.h"
#include "Customer.h"
#include "DataSource.h"
#include "BankClerk.h"
#include <time.h>

#ifndef _USER_SERVICES_H
#define _USER_SERVICES_H

/*
	Summary: Provides services to add, remove, retrieve and modify user
			 accounts. Uses the Singleton Pattern to ensure there is only
			 ever one UserServices
	Author: Jeff Perkins
 */
class UserServices
{
public:

	enum userType { CUSTOMER, BANK_CLERK };

	// ----------------------------------------------------------------------------------------- //
	// instance retrieval / destructor

	/*
		Summary: destructor
		Pre: none
		Post: dynamic memory relesaed
	*/
	~UserServices(void)
		
	/*
		Summary: returns static instance
		Pre: none
		Post: UserServices* instance returned
	*/
	static UserServices *instance(void);

	// ----------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: creates a customer
		Pre: none
		Post: customer created and added to data source
	*/
	void createCustomer(string name, string address, string phoneNumber);

	/*
		Summary: creates a bank clerks
		Pre: none
		Post: bank clerk created and added to data source
	*/
	void createBankClerk();
	
	/*
		Summary: validates a users credentials
		Pre: none
		Post: returns true is userName and password match a user false
			  otherwise
	*/
	bool validateUser(int username, string password);

	/*
		Summary: changes teh password for a user
		Pre: userId identifies a User stored in data source
		Post: password changed
	*/
	void changePassword(int userId, string password);

	/*
		Summary: resets the password for a user
		Pre: userID identifies a user stored in data source
		Post: users password is reset to a random password
	*/
	string resetPassword(int userID);

	/*
		Summary: tests to see if a user exists
		Pre: none
		Post: returns true if userID identifies a user stored in 
			  data source, false otherwise
	*/
	bool userExists(int userID);

	/*
		Summary: deletes a user form the data source
		Pre: userID identifies a user stored in the data source
		Post: user identified by userId is deleted
	*/
	bool deleteUser(int userID);

	/*
		Summary: updates a customers details
		Pre: details.length == 3 (name, address, phone)
		Post: user details are updated
	*/
	void updateCustomerDetails(int userID, string details[]);

	/*
		Summary: returns a user identified by userID
		Pre: none
		Post: user pointer returned that points to user identified
			  by userID, if no such user exists NULL pointer is
			  returned
	*/
	User *getUser(int userID);
	
	/*
		Summary: sets the data source for the service
		Pre: none
		Post: _ds = ds
	*/
	void setDataSource(DataSource* ds){_ds = ds;}
	
	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// data members
	
	static UserServices* _userServicesInstance;
	static DataSource* _ds;
	
	// ----------------------------------------------------------------------------------------- //
	// util methods

	/*
		Summary: generates a password for a user
		Pre: none
		Post: random passord is generated
	*/
	string generatePassword(void);

	// ----------------------------------------------------------------------------------------- //
	// private constructor (singleton)
	
	/*
		Summary: private constructor (singleton)
		Pre: none
		Post: UserSerives object instanctiated
	*/
	UserServices(void){}
	
	// ----------------------------------------------------------------------------------------- //
	
};
#endif

// end of UserServices.h