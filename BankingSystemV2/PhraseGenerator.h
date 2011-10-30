#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Summary: a generator that can generate all digit and alphnumeric phrases (singleton)
	Author: Brad Bow & Jeff Perkins
*/
class PhraseGenerator
{
public:

	// ----------------------------------------------------------------------------------------- //
	// instance retrieval / destruction

	/*
		Summary: retureive instance
		Pre: none
		Post: PhraseGenerator instance (pointer) is returned
	*/
	static PhraseGenerator* instance();

	/*
		Summary: desturctor
		Pre: none
		Post: dynamic memory released
	*/
	~PhraseGenerator();

	// ----------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: returns an all digit (+ve) phrase of length numdigits, with a specified
				 start digit
		Pre: numDigits >= 0, startDigit >= 0
		Post: random all digit phrase of length numDigits with starting digit startDigit
			  is returned
	*/
	static int getDigitPhrase(int numDigits, int startDigit);

	/*
		Summary: returns an all diigt phrase of length numdigits
		Pre: numdigits >= 0
		Post: random all digit phrase of length numDigits returned
	*/
	static int getDigitPhrase(int numDigits);

	/*
		Summary: returns an alphnumreic phrase of length numchars
		Pre: numChars >=0
		Post: random alhpNumeric phrase of length numChars returned
	*/
	static std::string getAlphNumericPhrase(int numChars);

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// private constructor

	/*
		Summary: private constructor (singleton)
		Pre: none
		Post: PhraseGenerator object is instantiated (staitic)
	*/
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

	/*
		Summary: returns a sinle random digit (0 - 9)
		Pre: none
		Post: random digit returned
	*/
	static int getRandomDigit();

	/*
		Summary: returns a single random char [a - z] || [A-Z]
		Pre: none
		Post: ramdon char returned
	*/
	static char getRandomChar();

	// ----------------------------------------------------------------------------------------- //
};

// end of PhraseGenerator.h