#include "StdAfx.h"
#include "PhraseGenerator.h"

PhraseGenerator* PhraseGenerator::_pg = NULL;

// ----------------------------------------------------------------------------------------- //
// instance retrieval

PhraseGenerator* PhraseGenerator::instance()
{
	if (_pg == NULL)
	{
		_pg = new PhraseGenerator();
	}
	return _pg;
}

// ----------------------------------------------------------------------------------------- //
// member methods

int PhraseGenerator::getDigitPhrase(int numDigits, int startDigit)
{
	stringstream ss; 
	int id;

	ss << startDigit;
	int digits = 1;
	while (digits < numDigits)
	{
		ss << getRandomDigit();
		digits++;
	}

	ss >> id;
	return id;
}

int PhraseGenerator::getDigitPhrase(int numDigits)
{
	stringstream ss; 
	int id;

	int digits = 0;
	while (digits < numDigits)
	{
		ss << getRandomDigit();
		digits++;
	}

	ss >> id;
	return id;
}

std::string PhraseGenerator::getAlphNumericPhrase(int numChars)
{
	stringstream ss; 
	std::string str;

	int chars = 0;
	while (chars < numChars)
	{
		ss << getRandomChar();
		chars++;
	}

	getline(ss, str);
	return str;
}

// ----------------------------------------------------------------------------------------- //
// constructor / destructor
PhraseGenerator::PhraseGenerator(void)
{
}

PhraseGenerator::~PhraseGenerator()
{
	delete _pg;
}

// ----------------------------------------------------------------------------------------- //
// utilities

int PhraseGenerator::getRandomDigit()
{
	return rand() % MAX_DIGIT;
}

char PhraseGenerator::getRandomChar()
{
	int upperOrLowerInt = rand() % MAX_DIGIT + 1;
	char ch;
	if (upperOrLowerInt % 2 == 0)
	{
		ch = (char)(rand() % UPPER_CASE_LB + UPPER_CASE_UB);
	}
	else 
	{
		ch = (char)(rand() % LOWER_CASE_LB + LOWER_CASE_UB);
	}

	return ch;
}



