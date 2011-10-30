#include "stdafx.h"
#include "Session.h"

// ----------------------------------------------------------------------------------------- //
// static initialisations

Session* Session::_session = NULL;
User* Session::_user = NULL;

// ----------------------------------------------------------------------------------------- //
// destructor / instance retrieval

Session* Session::getInstance()
{
		
	if (_session == NULL)
	{
		_session = new Session();
	}
		
	return _session;
}

Session::~Session()
{
	delete _session;
}

// ----------------------------------------------------------------------------------------- //
// member methods

void Session::setUser(User* user)
{
	_user = user;
}

User* Session::getUser()
{
	return _user;
}

// ----------------------------------------------------------------------------------------- //