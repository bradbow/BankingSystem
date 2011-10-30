#pragma once
#ifndef UTILS_H
#define UTILS_H
#include <string>
#include <vector>
using namespace std;


/*
	Summary: a set of string utilities
	Author: Brad Bow
*/
class StringUtils
{
public:

	static vector<string> splitString(string str, char delimiter);
};


/*
	Summary: a type converter class
	Author: Brad Bow
*/
class TypeConv
{
public:

	TypeConv(string strData) : m_strData(strData){}
	TypeConv(int nData) : m_nData(nData){}

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

/*
	Summary: utils for .net / c++ /cli management
	Author: Brad Bow
*/
class DotNetUtils
{
public:
	static System::String^ StdStringToSystemString(std::string);
	static std::string SystemStringToStdString(System::String^);
};

#endif

