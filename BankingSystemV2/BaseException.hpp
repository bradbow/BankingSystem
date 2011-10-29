#pragma once

#ifndef _BASEEXCEPTION_H
#define _BASEEXCEPTION_H

#include <string>

class BaseException
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	BaseException(void){}
	BaseException(std::string msg){_msg = msg;}
	std::string getMessage(){return _msg;}

	// ----------------------------------------------------------------------------------------- // 

protected:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	std::string _msg;

	// ----------------------------------------------------------------------------------------- // 
};

#endif

