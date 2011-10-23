#include "StdAfx.h"
#include "Date.h"
#include <vector>
#include <string>
#include "Utils.h"
using namespace std;

// ----------------------------------------------------------------------------------------- //
// constant reference arrays

const string MONTH_NAMES [] = 
	{
		"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};

const string DAY_NAMES [] = 
	{ "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat", "Sun" };

const int DAYS_IN_MONTH_NON_LEAP_YEAR[] =
	{31, 28, 31, 30, 31, 30, 31, 31, 31, 31, 30, 31};

const int DAYS_IN_MONTH_LEAP_YEAR[] = 
	{31, 28, 31, 30, 31, 30, 31, 31, 31, 31, 30, 31};

const int DAYS_PER_YEAR = 365;
const int DAYS_PER_LEAP_YEAR = 366;	

// ----------------------------------------------------------------------------------------- //

// ----------------------------------------------------------------------------------------- //
// Constructors / Descructors

Date::Date(string strDate, char delim)
{
	vector<string> dateSplit = StringUtils::splitString(strDate, delim);
	
	// set the day, month, year numbers
	_day = TypeConverter(dateSplit[DAY]);
	_month = TypeConverter(dateSplit[MONTH]);
	_year = TypeConverter(dateSplit[YEAR]);

	// set the day and month names
	int index = TypeConverter(dateSplit[MONTH]);
	_monthName = MONTH_NAMES[index - 1];
	// TODO calculate day name

}

// ----------------------------------------------------------------------------------------- //
// Members

bool Date::isLeapYear(int year)
{

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			return year % 400 == 0;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

}

int Date::getDaysBetweenDates(const Date* dtOne, const Date* dtTwo)
{
	return 0;
}


