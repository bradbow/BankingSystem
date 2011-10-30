#pragma once

/*
	Summary: A simple class to hold the user currently logged into the system,
			 employs the singleton pattern.
	Author: Brad Bow
*/
class Session
{
public:

	// ----------------------------------------------------------------------------------------- //
	// destructor / instance retrieval

	/*
		Summary: retrieves the static instance
		Pre: none
		Post: Session* (static) returned
	*/
	static Session* getInstance();
	
	/*
		Summary: desturctor
		Pre: none
		Post: free dynamic memoory
	*/
	~Session();

	// ----------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: sets the user for the current session
		Pre: none
		Post: _user = user
	*/
	static void setUser(User* user);
	
	/*
		Summary: gets the current sessions user
		Pre: none
		Post: returns _user
	*/
	static User* getUser();

private:

	// ----------------------------------------------------------------------------------------- //
	// data members

	static User* _user;
	static Session* _session;
	Session(){}

	// ----------------------------------------------------------------------------------------- //

};

// end Session.h