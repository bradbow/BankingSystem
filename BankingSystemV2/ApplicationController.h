#pragma once

#ifndef _APPLICATIONCONTROLLER_H
#define _APPLICATIONCONTROLLER_H
#include "DataSource.h"

/*
	Summary: High level program flow controller (sinleton)
	Author: Brad Bow
*/
class ApplicationController
{
public:
	
	// ----------------------------------------------------------------------------------------- //
	// instance retrieval / destruction

	/*
		Summary: retrieve the static instance
		Pre: none
		Post ApplicationCotnroller* returned
	*/
	static ApplicationController* getInstance();

	/*
		Summary:
		Pre:
		Post:
	*/
	~ApplicationController();

	// ----------------------------------------------------------------------------------------- //
	// behaviours

	/*
		Summary: launches the login form
		Pre: none
		Post: LoginForm created and shown
	*/
	void launchLoginForm();
	
	/*
		Summary: launches a form contexutally depending
				 on whether the user is a customer or bank clerk
		Pre: none
		Post: BankClerk_form or Customer_Form is launched
	*/
	void launchAppropriateUserForm(User* u);
	
	/*
		Summary: sets the data source for the application
		Pre: none
		Post: _ds = ds
	*/
	static void setDataSource(DataSource* ds);
	
	/*
		Summary: loads the application data
		Pre: none
		Post: application data loaded
	*/
	static void loadDataFromDataSource();
	
	/*
		Summary: saves the data to a data source
		Pre: none
		Post: data persisted
	*/
	static void saveDataToDataSource();
	
	/*
		Summary: creates the application services and links
				 them to the data source
		Pre: none
		Post: serices created and linked
	*/
	static void createAndLinkServices();

	/*
		Summary: closes the application
		Pre: none
		Post: application terminated
	*/
	void closeApplication();
	
	/*
		Summary: starts the appliation
		Pre: none
		Post: application started
	*/
	void startApplication();

private:  
	
	/*
		Summary: private constructor (singleton)
		Pre: none
		Post: instance of ApplicationController created
	*/
	ApplicationController(){}
	
	// ----------------------------------------------------------------------------------------- //
	// data members

	static DataSource* _ds;
	static ApplicationController* _ac;

	// ----------------------------------------------------------------------------------------- //
	
};

#endif
// end of ApplicationConroller.h
