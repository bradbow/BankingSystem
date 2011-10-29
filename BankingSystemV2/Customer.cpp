// Models a bank customer and contains accessors
// and mutators for customer information. Also
// contains functions for adding and removing accounts
// from a customers list of accounts
// Customer.cpp
#include "stdafx.h"
#include <sstream>
#include <iostream>
#include <iterator>


// constructor
// preconditions: valid customer details passed in
// postcondition: customer created
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

// destructor
// precondition: none
// postcondition: memory deallocated
Customer::~Customer(void){}


// precondition: none
// postcondition: returns name
string Customer::getName(void){

	return _name;
}
// precondition: valid name passed in
// postcondition: name set
void Customer::setName(string name){

	_name = name;
}
// precondition: none
// postcondition: address returned
string Customer::getAddress(void){

	return _address;
}
// precondition: valid address passed in
// postcondition: address returned
void Customer::setAddress(string address){

	_address = address;
}
// precondition: none
// postcondition: phone no returned
string Customer::getPhoneNumber(void){
	
	return _phoneNumber;
}
// precondition: valid phone no passed in
// postcondition: phone no set
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


