#include "Utils.h"
#include "stdafx.h"
#include <vector>
#include <sstream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;

// --------------------------------------------------------------------------------------------- //
// StringUtils

vector<string> StringUtils::splitString(string str, char delimeter)
{
	vector<string> vecSubStrs;	
	string strSub;
	strSub = str;
	string strTemp;
	int nIndex = 0;
	
	while ((nIndex = strSub.find(delimeter)) >= 0)
	{
		strTemp = strSub.substr(0, nIndex);
		trimString(strTemp);
		vecSubStrs.push_back(strTemp);
		strSub = strSub.substr(nIndex + 1);
	}

	if (!strSub.empty())
	{
		strTemp = strSub.substr(0, nIndex);
		trimString(strTemp);
		vecSubStrs.push_back(strTemp);
	}

	return vecSubStrs;
}

// Rodrigo Cesar de Freitas Dias @ http://www.codeproject.com/script/Membership/View.aspx?mid=2038079
void StringUtils::trimString(string& str)
{
  string::size_type pos1 = str.find_first_not_of(' ');
  string::size_type pos2 = str.find_last_not_of(' ');
  str = str.substr(pos1 == string::npos ? 0 : pos1, 
    pos2 == string::npos ? str.length() - 1 : pos2 - pos1 + 1);
}


// --------------------------------------------------------------------------------------------- //
// TypeConv

TypeConv::operator int()
{
	return atoi(m_strData.c_str());
}

TypeConv::operator double()
{
	return atof(m_strData.c_str());
}

TypeConv::operator bool()
{
	return isVariantOfTrue();
}

bool TypeConv::isVariantOfTrue()
{
	return 
		(
			m_strData.compare("True")
			||
			m_strData.compare("true")
			||
			m_strData.compare("TRUE")
			||
			m_strData.compare("YES")
			||
			m_strData.compare("Yes")
			||
			m_strData.compare("yes")
		);
}

//TypeConv::operator std::string()
//{
//	return itoa(m_nData);
//}
// --------------------------------------------------------------------------------------------- //
// DotNetUtils

System::String^ DotNetUtils::StdStringToSystemString(std::string stdstr)
{
	System::String^ sysstr = gcnew String(stdstr.c_str());
	return sysstr;
}

std::string  DotNetUtils::SystemStringToStdString(System::String^ sysstr)
{
	msclr::interop::marshal_context context;
	std::string stdstr = context.marshal_as<std::string>(sysstr);
	return stdstr;
}