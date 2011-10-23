#pragma once
class Date
{
public:

	Date(){};
	Date(std::string strDate, char delim);

private:

	bool _isLeapYear;

	int _day;
	int _month;
	int _year;

	std::string _dayName;
	std::string _monthName;

	std::string calculateDayOfWeek();

	static const int DAY = 0;
	static const int MONTH = 1;
	static const int YEAR = 2;	

};

