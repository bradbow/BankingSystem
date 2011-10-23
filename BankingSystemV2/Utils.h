#pragma once

#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
using namespace std;

class StringUtils
{
public:
	static vector<string> splitString(string str, char delimiter);
};

class TypeConverter
{
public:
	TypeConverter(string strData) : m_strData(strData){}

	operator int();
	operator double();
	operator bool();

private:
	string m_strData;
	bool isVariantOfTrue();
	bool isVariantOfFalse();
};

#endif

