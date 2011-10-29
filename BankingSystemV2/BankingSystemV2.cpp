// BankingSystemV2.cpp : main project file.

#include "stdafx.h"
#include "TextFileDataSource.h"
#include "ApplicationController.h"

int main(array<System::String ^> ^args)
{
	// set random seed for phrase generation
	srand(1);
	
	// set data source, this could be any derivative of the DataSource interface
	TextFileDataSource* data = TextFileDataSource::getInstance();

	// create controller and link to data source
	ApplicationController* controller = ApplicationController::getInstance();
	controller->setDataSource(data);
	
	// load the data
	controller->loadDataFromDataSource();

	// create services and link them to data source
	controller->createAndLinkServices();

	// start
	controller->startApplication();

	return 0;
}
