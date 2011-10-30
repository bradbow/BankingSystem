#include "stdafx.h"
#include <sstream>
#include <iostream>
#include <iterator>

// ----------------------------------------------------------------------------------------- //
// constructor

Customer::Customer(
	int userName,	
	string password,
	string name,
	string address, 
	string phoneNumber) :
		User(userName, password),
			_name(name),
			_address(address),
			_phoneNumber(phoneNumber){}

// ----------------------------------------------------------------------------------------- //
// member methods

string Customer::getName(void){

	return _name;
}


void Customer::setName(string name){

	_name = name;
}

string Customer::getAddress(void){

	return _address;
}

void Customer::setAddress(string address){

	_address = address;
}

string Customer::getPhoneNumber(void){
	
	return _phoneNumber;
}

void Customer::setPhoneNumber(string phoneNumber){

	_phoneNumber = phoneNumber;
}

std::string Customer::toString()
{
		stringstream ss;
		ss << _userId << ",";
		ss << _password << ",";
		ss << _name << ",";
		ss << _address << ",";
		ss << _phoneNumber;
	
		std::string str;
		getline(ss, str);

		return str;
}

// ----------------------------------------------------------------------------------------- //



