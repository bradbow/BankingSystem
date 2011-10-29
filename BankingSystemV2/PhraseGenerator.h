#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
class PhraseGenerator
{
public:

	// ----------------------------------------------------------------------------------------- //
	// instance retrieval / destruction
	PhraseGenerator* instance();
	~PhraseGenerator();

	// ----------------------------------------------------------------------------------------- //
	// member methods

	static int getDigitPhrase(int numDigits, int startDigit);
	static int getDigitPhrase(int numDigits);
	static std::string getAlphNumericPhrase(int numChars);

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// private constructor

	PhraseGenerator(void);

	// ----------------------------------------------------------------------------------------- //
	// data members

	static PhraseGenerator* _pg;

	// ----------------------------------------------------------------------------------------- //
	// constants

	static const int MAX_DIGIT = 9;
	static const int UPPER_CASE_LB = 65;
	static const int UPPER_CASE_UB = 90;
	static const int LOWER_CASE_LB = 97;
	static const int LOWER_CASE_UB = 122;

	// ----------------------------------------------------------------------------------------- //
	// utility methods

	static int getRandomDigit();
	static char getRandomChar();

	// ----------------------------------------------------------------------------------------- //
};

