#pragma once

/*
	A simple class to hold the user currently logged into the system,
	employs the singleton pattern.
*/
class Session
{
public:

	static Session* getInstance();
	static void setUser(User* user);
	static User* getUser();

private:

	static User* _user;
	static Session* _session;
	Session(){}

};

