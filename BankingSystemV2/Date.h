#pragma once
#include <string>
class Date
{
public:

	// ----------------------------------------------------------------------------------------- //
	// Constructors / Desctructors
	Date(){};
	Date(std::string strDate, char delim);

	// ----------------------------------------------------------------------------------------- //
	// Members
	static bool isLeapYear(int year);
	std::string calculateDayOfWeek();
	std::string getDateString()
	{
		std::string str = "dummy";
		return str;
	}
	static int getDaysBetweenDates(const Date * dtOne, const Date * dtTwo);

	// ----------------------------------------------------------------------------------------- //
	// getters

	int getDay(){return _day;}
	int getMonth(){return _month;}
	int getYear(){return _year;}
	std::string getDayName(){return _dayName;}
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

