#include "stdafx.h"
#include "LoginForm.h"
#include "Customer_Form.h"
#include "BankClerk_Form.h"

using namespace BankingSystemV2;
using namespace std;

// ----------------------------------------------------------------------------------------- //
// static initialisations

ApplicationController* ApplicationController::_ac = NULL;
DataSource* ApplicationController::_ds = NULL;

// ----------------------------------------------------------------------------------------- //
// instance retrieval / destruction

ApplicationController* ApplicationController::getInstance()
{
	if (_ac = NULL)
	{
		_ac = new ApplicationController();
	}

	return _ac;
}

ApplicationController::~ApplicationController()
{
	delete _ac;
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
	TransactionServices* ts = TransactionServices::instance();

	as->setDataSource(_ds);
	us->setDataSource(_ds);
	ts->setDataSource(_ds);
}

// --------------------------------------------------------------------------------------------- //
// Form launching

[STAThreadAttribute]
void ApplicationController::startApplication()
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	launchLoginForm();
	Application::Run();
}

void ApplicationController::closeApplication()
{
	Application::Exit();
}

void ApplicationController::launchLoginForm()
{
	LoginForm^ lif = gcnew LoginForm(this);
	lif->Show();
}

void ApplicationController::launchAppropriateUserForm(User* u)
{
	Customer* c = dynamic_cast<Customer*>(u);
	if (c) 
	{
		Customer_Form^ cu = gcnew Customer_Form(this);
		cu->Show();
	} 
	else
	{
		BankClerk* bc = dynamic_cast<BankClerk*>(u);
		if (bc) 
		{
			BankClerk_Form^ bcf = gcnew BankClerk_Form(this);
			bcf->Show();
		}
	}
}

// --------------------------------------------------------------------------------------------- //




