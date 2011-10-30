#pragma once
#include <string>
#include "Delimiters.h"

#ifndef _DATE_H
#define _DATE_H 

/*
	Summary: Simplistic date model
	Authors: Brad Bow & Jeff Perkins
	Class Invariant: 
*/
class Date
{
public:

	// ----------------------------------------------------------------------------------------- //
	// Constructors / Desctructors

	/*
		Summary: empty constructor
		Pre: none
		Post: data object created
	*/
	Date(){};

	/*
		Summary: construct from string
		Pre: stdDate is in format: dd[delim]mm[delim]yyyy
		Post: date object is created
	*/
	Date(std::string strDate, char delim);

	// ----------------------------------------------------------------------------------------- //
	// Members

	/*
		Summary: calculates the day of the week
		Pre: none
		Post: day of the week returned
	*/
	std::string calculateDayOfWeek();

	/*
		Summary: returns the datestring
		Pre: none
		Post: date string returned
	*/
	std::string getDateString()
	{
		std::string str = "";
		stringstream ss;
		ss << _day << DATE_DELIMITER;
		ss << _month << DATE_DELIMITER;
		ss << _year;
		getline(ss,str);
		return str;
	}

	// ----------------------------------------------------------------------------------------- //
	// getters

	/*
		Summary: returns day number
		Pre: none
		Post: day number returned
	*/
	int getDay(){return _day;}
	
	/*
		Summary: returns month number	
		Pre: none
		Post: month number returned
	*/
	int getMonth(){return _month;}
	
	/*
		Summary: return year number
		Pre: none
		Post: year number returned
	*/
	int getYear(){return _year;}
	
	/*
		Summary: returns the month name
		Pre: none
		Post: month name returned
	*/
	std::string getMonthName(){return _monthName;}

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// data members
	int _day;
	int _month;
	int _year;
	std::string _dayName;
	std::string _monthName;

	// ----------------------------------------------------------------------------------------- //
	// constants

	static const int DAY = 0;
	static const int MONTH = 1;
	static const int YEAR = 2;	

	// ----------------------------------------------------------------------------------------- //

};
#endif

