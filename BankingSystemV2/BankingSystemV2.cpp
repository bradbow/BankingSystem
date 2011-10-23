// BankingSystemV2.cpp : main project file.

#include "stdafx.h"
#include "LoginForm.h"
#include "TextFileDataSource.h"

using namespace BankingSystemV2;

string fileNames [8] = 
	{
		"Customers.txt", "BankClerks.txt", "SavingsAccounts.txt", "CreditAccounts.txt", 
		"HomeLoanAccounts.txt", "WithdrawalTransactions.txt", "DepositTransactions.txt", 
		"TransferTransactions.txt"
	};

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	
	// set the data source
	TextFileDataSource* ds = TextFileDataSource::getInstance();
	ds->setFileNames(fileNames);
	ds->loadData();

	// create services
	UserServices* us = UserServices::instance();
	AccountServices* as = AccountServices::instance();

	// link data source to services
	us->setDataSource(ds);
	as->setDataSource(ds);
	
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew LoginForm());
	return 0;
}
