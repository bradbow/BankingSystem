#pragma once
#include "BaseException.hpp"

/*
	Exceptions for IO handling
*/
class IOException : public BaseException
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	IOException(void){}
	IOException(std::string msg) : BaseException(msg) {}

	// ----------------------------------------------------------------------------------------- // 
};

class CorruptDataFileException : public IOException
{
public:
	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	CorruptDataFileException(void){}
	CorruptDataFileException(std::string msg) : IOException(msg) {}

	// ----------------------------------------------------------------------------------------- // 
};

class TooFewInputFilesException : public IOException
{
public:
	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	TooFewInputFilesException(void){}
	TooFewInputFilesException(std::string msg) : IOException(msg) {}

	// ----------------------------------------------------------------------------------------- // 
};

