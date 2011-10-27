#pragma once

#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
using namespace std;

class StringUtils
{
public:

	/*
		Returns a vector of substrings trimmed of whitespace
	*/
	static vector<string> splitString(string str, char delimiter);
};

class TypeConverter
{
public:
	TypeConverter(string strData) : m_strData(strData){}
	TypeConverter(int nData) : m_nData(nData){}

	operator int();
	operator double();
	operator bool();
	operator std::string();

private:
	string m_strData;
	int m_nData;
	bool isVariantOfTrue();
	bool isVariantOfFalse();
};

class DotNetUtils
{
public:
	static System::String^ StdStringToSystemString(std::string);
	static std::string SystemStringToStdString(System::String^);
};

class StreamFormatter
{
	
};

#endif

