#pragma once

#ifndef _APPLICATIONCONTROLLER_H
#define _APPLICATIONCONTROLLER_H
#include "DataSource.h"

class ApplicationController
{
public:
	
	static ApplicationController* getInstance();

	// form launching
	void launchLoginForm();
	void launchCustomerForm();
	void launchBankClerkForm();
	
	// data source communication
	static void setDataSource(DataSource* ds);
	static void loadDataFromDataSource();
	static void saveDataToDataSource();

	// service instantiation and linkage to data source
	static void createAndLinkServices();

private:  

	ApplicationController(){}
	static DataSource* _ds;
	static ApplicationController* _ac;
	
};

#endif

