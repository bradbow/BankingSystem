#include "stdafx.h"
#include "PhraseGenerator.h"

// ----------------------------------------------------------------------------------------- //
// static initialisation

UserServices* UserServices::_userServicesInstance = NULL;
DataSource* UserServices::_ds = NULL;

// ----------------------------------------------------------------------------------------- //
// instance retrieval / destruction

UserServices *UserServices::instance(void){

	if(_userServicesInstance == NULL){
	
		_userServicesInstance = new UserServices;
		return _userServicesInstance;
	}		
	return _userServicesInstance;
}

UserServices::~UserServices()
{
	delete _userServicesInstance;
}

// ----------------------------------------------------------------------------------------- //
// member methods

void UserServices::createCustomer(string name, string address, string phoneNumber){

	//Customer created(applicationData.nextCustomerName(), generatePassword(), name, address, phoneNumber);
	//applicationData.addUser(created);
}


void UserServices::createBankClerk(){
	//BankClerk created(applicationData.nextBankClerkName(), generatePassword())
	//applicationData.addUser(created);
}


bool UserServices::validateUser(int userID, string password){

	User *validate = getUser(userID);
	if (validate != NULL)
	{
		return validate->_password == password;
	}
	else
	{
		return false;
	}
}

void UserServices::changePassword(int userID, string password){

	User *update = getUser(userID);
	update->_password = password;
}

string UserServices::resetPassword(int userID){

	User *update = getUser(userID);
	update->_password = generatePassword();
	return update->_password;
}

bool UserServices::userExists(int userID){

	return true;
}

bool UserServices::deleteUser(int userID){
	
	return true;
}

void UserServices::updateCustomerDetails(int userID, string details[]){

	enum {NAME, ADDRESS, PHONE};
	
	Customer *update = dynamic_cast<Customer*>(_ds->getUser(userID));
	update->setName(details[NAME]);
	update->setAddress(details[ADDRESS]);
	update->setPhoneNumber(details[PHONE]);

}

User *UserServices::getUser(int userID){
	return _ds->getUser(userID);
}

string UserServices::generatePassword(void){

	return PhraseGenerator::instance()->getAlphNumericPhrase(PASSWORD_LENGTH);
}

// ----------------------------------------------------------------------------------------- //

