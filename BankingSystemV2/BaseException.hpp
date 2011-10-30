#pragma once

#ifndef _BASEEXCEPTION_H
#define _BASEEXCEPTION_H

#include <string>

/*
	Summary: a base exception class that all other appliaction exceptions inherit from
			 allows for the consturction of exception with a custom message and a member
			 method for returning this message
	Author: Brad Bow
*/
class BaseException
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	/*
		Summary: Default constructor (no message)
		Pre: none
		Post: BaseException object is created
	*/
	BaseException(void){}

	/*
		Summary: constructor with custom msg
		Pre: none
		Post: BaseException created with _msg = msg
	*/
	BaseException(std::string msg){_msg = msg;}

	/*
		Summary: returns the exception message
		Pre: BaseException(std::string msg) overload used for consturction
		Post: _msg returned
	*/
	std::string getMessage(){return _msg;}

	// ----------------------------------------------------------------------------------------- // 

protected:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	std::string _msg;

	// ----------------------------------------------------------------------------------------- // 
};

#endif

// end of BaseException.hpp
