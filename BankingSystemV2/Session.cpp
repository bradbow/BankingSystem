#include "stdafx.h"
#include "Session.h"

Session* Session::_session = NULL;
User* Session::_user = NULL;

Session* Session::getInstance()
{
		
	if (_session == NULL)
	{
		_session = new Session();
	}
		
	return _session;
}

void Session::setUser(User* user)
{
	_user = user;
}

User* Session::getUser()
{
	return _user;
}