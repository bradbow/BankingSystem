// UserServices.cpp
// Provides services to add, remove, retrieve and modify user
// accounts. Uses the Singleton Pattern to ensure there is only
// ever one UserServices


#include "stdafx.h"

UserServices* UserServices::_userServicesInstance = NULL;
DataSource* UserServices::_ds = NULL;

// employs singleton pattern to ensure that there is only ever one
// AccountServices instance
// precondition: none
// postcondition: an AccountSerices is returned, if none is already
// available one is created then returned
UserServices *UserServices::instance(void){

	if(_userServicesInstance == NULL){
	
		_userServicesInstance = new UserServices;
		return _userServicesInstance;
	}		
	return _userServicesInstance;

}
// precondition: valid customer details passed in
// postcondition: customer created and added to applicationData
void UserServices::createCustomer(string name, string address, string phoneNumber){

	//Customer created(applicationData.nextCustomerName(), generatePassword(), name, address, phoneNumber);
	//applicationData.addUser(created);
}
// precondition: valid bank clerk details passed in
// postcondition: bank clerk created and added to applicationData
void UserServices::createBankClerk(){
	//BankClerk created(applicationData.nextBankClerkName(), generatePassword())
	//applicationData.addUser(created);
}
// precondition: none
// postcondition: validates userName and password pair
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
// precondition: valid userId passed in
// postcondition: exchanges old password for new one
void UserServices::changePassword(int userID, string password){

	User *validate = getUser(userID);
	validate->_password = password;
}
// precondition: valid userId passed in
// postconditon: password reset to new password which is then returned
string UserServices::resetPassword(int userID){

	User *validate = getUser(userID);
	validate->_password = generatePassword();
	return validate->_password;
}
// precondition: none
// returns true if user exists in application data, false otherwise
bool UserServices::userExists(int userID){

	return true;
}
// precondition: none
// postcondition: returns true if user matching userID is successfully
// deleted
bool UserServices::deleteUser(int userID){
	
	return true;
}
// precondition: valid user details passed in
// postcondition: old details are exchanged for new
void UserServices::updateCustomerDetails(int userID, string details[]){

	//TODO: exchange for application data user retrieve function;
	Customer update(userID, "password", "name", "address", "phoneNumber");
	//Customer update = (Customer*)(getUser(userID));
	update.setName(details[0]);
	update.setAddress(details[1]);
	update.setPhoneNumber(details[2]);
}
// precondition: valid userID passed in
// postcondition: user matching userID is returned
User *UserServices::getUser(int userID){
	return _ds->getUser(userID);
}

// precondition: none
// returns a random alphanumerical password string
string UserServices::generatePassword(void){

	enum asciiType{NUMERAL, LOWER_CASE, UPPER_CASE};
	enum asciiBounds{LOWER_BOUND, UPPER_BOUND};
	int asciiBounds[UPPER_CASE][UPPER_BOUND];
	asciiBounds[NUMERAL][LOWER_BOUND] = 48;
	asciiBounds[NUMERAL][UPPER_BOUND] = 57;
	asciiBounds[LOWER_CASE][LOWER_BOUND] = 65;
	asciiBounds[LOWER_CASE][UPPER_BOUND] = 90;
	asciiBounds[UPPER_CASE][LOWER_BOUND] = 97;
	asciiBounds[UPPER_CASE][UPPER_BOUND] = 122;
	
	srand ( time(NULL) );
	int asciiType;
	string str;

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		// generate random ascii type (numeral, lower case, upper case)
		asciiType = rand() % UPPER_CASE;
		// subtract lower from upper boundary to give range
		int range = asciiBounds[asciiType][UPPER_BOUND] 
		- asciiBounds[asciiType][LOWER_BOUND];
		// create random number within range starting at lower boundary
		// then cast to matching ascii character
		str += (char)rand() % range + asciiBounds[asciiType][LOWER_BOUND];
	}
	return str;
}


