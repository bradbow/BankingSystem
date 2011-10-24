#include "stdafx.h"
#include "LoginForm.h"

using namespace BankingSystemV2;
using namespace std;

ApplicationController* ApplicationController::_ac = NULL;
DataSource* ApplicationController::_ds = NULL;

ApplicationController* ApplicationController::getInstance()
{
	if (_ac = NULL)
	{
		_ac = new ApplicationController();
	}

	return _ac;
}

// --------------------------------------------------------------------------------------------- //
// Data and services setting

void ApplicationController::setDataSource(DataSource* ds)
{
	_ds = ds;
}

void ApplicationController::loadDataFromDataSource()
{
	_ds->loadData();
}

void ApplicationController::saveDataToDataSource()
{
	_ds->persistData();
}

void ApplicationController::createAndLinkServices()
{
	AccountServices* as = AccountServices::instance();
	UserServices* us = UserServices::instance();

	as->setDataSource(_ds);
	us->setDataSource(_ds);

	// TODO add transaction services here
}

// --------------------------------------------------------------------------------------------- //
// Form launching

[STAThreadAttribute]
void ApplicationController::launchLoginForm()
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew LoginForm(this));
}

void ApplicationController::launchCustomerForm()
{

}

void ApplicationController::launchBankClerkForm()
{

}

// --------------------------------------------------------------------------------------------- //




