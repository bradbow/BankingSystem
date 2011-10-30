#include "StdAfx.h"
#include "Date.h"
#include <vector>
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
	
	// set the day, month, year numbers and month name
	_day = TypeConv(dateSplit[DAY]);
	_month = TypeConv(dateSplit[MONTH]);
	_year = TypeConv(dateSplit[YEAR]);
	int index = TypeConv(dateSplit[MONTH]);
	_monthName = MONTH_NAMES[index - 1];

}

// ----------------------------------------------------------------------------------------- //
// Members





