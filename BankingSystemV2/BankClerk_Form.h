#pragma once

#include "CPasswordChange.h"
#include "ApplicationController.h"
#include "Utils.h"
#include <string>
#include "Customer.h"
#include "AccountServices.h"
#include "UserServices.h"
#include <list>
#include "Account.h"

namespace BankingSystemV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BankClerk_Form
	/// </summary>
	public ref class BankClerk_Form : public System::Windows::Forms::Form
	{
	public:
		BankClerk_Form(ApplicationController* ac) : _ac(ac)
		{
			InitializeComponent();
			_as = AccountServices::instance();
			_us = UserServices::instance();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BankClerk_Form()
		{
			if (components)
			{
				delete components;
			}
		}


		//COMPONENT DEFINITIONS
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Panel^  panel_AdjustInteresttRate;
	private: System::Windows::Forms::Panel^  panel_CustomerAcc;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label_Password;
	private: System::Windows::Forms::TextBox^  textBox_Password;
	private: System::Windows::Forms::Button^  button_ResetPassword;
	private: System::Windows::Forms::Button^  button_CustomerSearch;
	private: System::Windows::Forms::Label^  label_CustomerId;
	private: System::Windows::Forms::TextBox^  textBox_CustomerId;
	private: System::Windows::Forms::TabControl^  tabControl_BCCustomer;
	private: System::Windows::Forms::TabPage^  tabPage_Details;
	private: System::Windows::Forms::Button^  button_UpdateDetail;
	private: System::Windows::Forms::Button^  button_AccountCancel;
	private: System::Windows::Forms::Label^  label_Accounts;
	private: System::Windows::Forms::ListBox^  listBox_AccountSelection;
	private: System::Windows::Forms::Label^  label_Address;
	private: System::Windows::Forms::TextBox^  textBox_Address;
	private: System::Windows::Forms::Label^  label_Phone;
	private: System::Windows::Forms::TextBox^  textBox_Phone;
	private: System::Windows::Forms::Label^  label_Name;
	private: System::Windows::Forms::TextBox^  textBox_Name;
	private: System::Windows::Forms::TabPage^  tabPage_CreateSavings;
	private: System::Windows::Forms::Label^  label_CSAccountName;
	private: System::Windows::Forms::TextBox^  textBox_CSAccountName;
	private: System::Windows::Forms::TabPage^  tabPage_CreateCredit;
	private: System::Windows::Forms::TabPage^  tabPage_CreateHomeLoan;
	private: System::Windows::Forms::Button^  button_CreateAccount;
	private: System::Windows::Forms::Button^  button_CCCreateAccount;
	private: System::Windows::Forms::Label^  label_CCOverdraft;
	private: System::Windows::Forms::TextBox^  textBox_CCOverdraft;
	private: System::Windows::Forms::Label^  label_CCAccountName;
	private: System::Windows::Forms::TextBox^  textBox_CCAccountName;
	private: System::Windows::Forms::Button^  button_CHLCreateAccount;
	private: System::Windows::Forms::Label^  label_MinRepayment;
	private: System::Windows::Forms::TextBox^  textBox_MinRepayment;
	private: System::Windows::Forms::Label^  label_CHLAmount;
	private: System::Windows::Forms::TextBox^  textBox_CHLAmount;
	private: System::Windows::Forms::Label^  label_RepaymentOption;
	private: System::Windows::Forms::ListBox^  listBox_RepaymentOption;
	private: System::Windows::Forms::Label^  label_PropertyAddress;
	private: System::Windows::Forms::TextBox^  textBox_PropertyAddress;
	private: System::Windows::Forms::Label^  label_CHLAccountName;
	private: System::Windows::Forms::TextBox^  textBox_CHLAccountName;
	private: System::Windows::Forms::Button^  button_SetRates;
	private: System::Windows::Forms::TextBox^  textBox_HomeLoanRate;
	private: System::Windows::Forms::Label^  label_HomeLoanRate;
	private: System::Windows::Forms::Label^  label_CreditRate;
	private: System::Windows::Forms::TextBox^  textBox_CreditRate;
	private: System::Windows::Forms::Label^  label_IRHeading;
	private: System::Windows::Forms::Label^  label_SavingsRate;
	private: System::Windows::Forms::TextBox^  textBox_SavingsRate;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_logOut;
	private: BankingSystemV2::CPasswordChange^  passwordChange1;
	private: System::Windows::Forms::TabControl^  tabControl_MainMenu;

	private: System::Windows::Forms::TabPage^  tabPage_Customer;
	private: System::Windows::Forms::TabPage^  tabPage_SetInterest;
	private: System::Windows::Forms::TabPage^  tabPage_Admin;
	protected: 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Customer* _customer;
		AccountServices *_as;
		UserServices *_us;
		ApplicationController* _ac;
	private: System::Windows::Forms::Label^  label_SavingsBalance;
	private: System::Windows::Forms::TextBox^  textBox_SavingsBalance;

	private: System::Windows::Forms::Label^  label_SavingsInterestRate;
	private: System::Windows::Forms::TextBox^  textBox_SavingInterestRate;
	private: System::Windows::Forms::TextBox^  textBox_CreditBalance;
	private: System::Windows::Forms::Label^  label_CreditInterestRate;
	private: System::Windows::Forms::TextBox^  textBox_CreditInterestRate;
	private: System::Windows::Forms::Label^  label_CreditBalance;
	private: System::Windows::Forms::Label^  label_HomeLoanBalance;
	private: System::Windows::Forms::TextBox^  textBox_HomeLoanBalance;
	private: System::Windows::Forms::Label^  label_HomeLoanInterest;
	private: System::Windows::Forms::TextBox^  textBox_HomeLoanInterest;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->ToolStripMenuItem_logOut = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->panel_AdjustInteresttRate = (gcnew System::Windows::Forms::Panel());
				 this->button_SetRates = (gcnew System::Windows::Forms::Button());
				 this->textBox_HomeLoanRate = (gcnew System::Windows::Forms::TextBox());
				 this->label_HomeLoanRate = (gcnew System::Windows::Forms::Label());
				 this->label_CreditRate = (gcnew System::Windows::Forms::Label());
				 this->textBox_CreditRate = (gcnew System::Windows::Forms::TextBox());
				 this->label_IRHeading = (gcnew System::Windows::Forms::Label());
				 this->label_SavingsRate = (gcnew System::Windows::Forms::Label());
				 this->textBox_SavingsRate = (gcnew System::Windows::Forms::TextBox());
				 this->panel_CustomerAcc = (gcnew System::Windows::Forms::Panel());
				 this->tabControl_MainMenu = (gcnew System::Windows::Forms::TabControl());
				 this->tabPage_Customer = (gcnew System::Windows::Forms::TabPage());
				 this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
				 this->label_Password = (gcnew System::Windows::Forms::Label());
				 this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
				 this->button_ResetPassword = (gcnew System::Windows::Forms::Button());
				 this->button_CustomerSearch = (gcnew System::Windows::Forms::Button());
				 this->label_CustomerId = (gcnew System::Windows::Forms::Label());
				 this->textBox_CustomerId = (gcnew System::Windows::Forms::TextBox());
				 this->tabControl_BCCustomer = (gcnew System::Windows::Forms::TabControl());
				 this->tabPage_Details = (gcnew System::Windows::Forms::TabPage());
				 this->button_UpdateDetail = (gcnew System::Windows::Forms::Button());
				 this->button_AccountCancel = (gcnew System::Windows::Forms::Button());
				 this->label_Accounts = (gcnew System::Windows::Forms::Label());
				 this->listBox_AccountSelection = (gcnew System::Windows::Forms::ListBox());
				 this->label_Address = (gcnew System::Windows::Forms::Label());
				 this->textBox_Address = (gcnew System::Windows::Forms::TextBox());
				 this->label_Phone = (gcnew System::Windows::Forms::Label());
				 this->textBox_Phone = (gcnew System::Windows::Forms::TextBox());
				 this->label_Name = (gcnew System::Windows::Forms::Label());
				 this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
				 this->tabPage_CreateSavings = (gcnew System::Windows::Forms::TabPage());
				 this->label_SavingsBalance = (gcnew System::Windows::Forms::Label());
				 this->textBox_SavingsBalance = (gcnew System::Windows::Forms::TextBox());
				 this->label_SavingsInterestRate = (gcnew System::Windows::Forms::Label());
				 this->textBox_SavingInterestRate = (gcnew System::Windows::Forms::TextBox());
				 this->button_CreateAccount = (gcnew System::Windows::Forms::Button());
				 this->label_CSAccountName = (gcnew System::Windows::Forms::Label());
				 this->textBox_CSAccountName = (gcnew System::Windows::Forms::TextBox());
				 this->tabPage_CreateCredit = (gcnew System::Windows::Forms::TabPage());
				 this->label_CreditBalance = (gcnew System::Windows::Forms::Label());
				 this->textBox_CreditBalance = (gcnew System::Windows::Forms::TextBox());
				 this->label_CreditInterestRate = (gcnew System::Windows::Forms::Label());
				 this->textBox_CreditInterestRate = (gcnew System::Windows::Forms::TextBox());
				 this->button_CCCreateAccount = (gcnew System::Windows::Forms::Button());
				 this->label_CCOverdraft = (gcnew System::Windows::Forms::Label());
				 this->textBox_CCOverdraft = (gcnew System::Windows::Forms::TextBox());
				 this->label_CCAccountName = (gcnew System::Windows::Forms::Label());
				 this->textBox_CCAccountName = (gcnew System::Windows::Forms::TextBox());
				 this->tabPage_CreateHomeLoan = (gcnew System::Windows::Forms::TabPage());
				 this->label_HomeLoanInterest = (gcnew System::Windows::Forms::Label());
				 this->textBox_HomeLoanInterest = (gcnew System::Windows::Forms::TextBox());
				 this->label_HomeLoanBalance = (gcnew System::Windows::Forms::Label());
				 this->textBox_HomeLoanBalance = (gcnew System::Windows::Forms::TextBox());
				 this->button_CHLCreateAccount = (gcnew System::Windows::Forms::Button());
				 this->label_MinRepayment = (gcnew System::Windows::Forms::Label());
				 this->textBox_MinRepayment = (gcnew System::Windows::Forms::TextBox());
				 this->label_CHLAmount = (gcnew System::Windows::Forms::Label());
				 this->textBox_CHLAmount = (gcnew System::Windows::Forms::TextBox());
				 this->label_RepaymentOption = (gcnew System::Windows::Forms::Label());
				 this->listBox_RepaymentOption = (gcnew System::Windows::Forms::ListBox());
				 this->label_PropertyAddress = (gcnew System::Windows::Forms::Label());
				 this->textBox_PropertyAddress = (gcnew System::Windows::Forms::TextBox());
				 this->label_CHLAccountName = (gcnew System::Windows::Forms::Label());
				 this->textBox_CHLAccountName = (gcnew System::Windows::Forms::TextBox());
				 this->tabPage_SetInterest = (gcnew System::Windows::Forms::TabPage());
				 this->tabPage_Admin = (gcnew System::Windows::Forms::TabPage());
				 this->passwordChange1 = (gcnew BankingSystemV2::CPasswordChange());
				 this->menuStrip1->SuspendLayout();
				 this->panel_AdjustInteresttRate->SuspendLayout();
				 this->panel_CustomerAcc->SuspendLayout();
				 this->tabControl_MainMenu->SuspendLayout();
				 this->tabPage_Customer->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
				 this->splitContainer1->Panel1->SuspendLayout();
				 this->splitContainer1->Panel2->SuspendLayout();
				 this->splitContainer1->SuspendLayout();
				 this->tabControl_BCCustomer->SuspendLayout();
				 this->tabPage_Details->SuspendLayout();
				 this->tabPage_CreateSavings->SuspendLayout();
				 this->tabPage_CreateCredit->SuspendLayout();
				 this->tabPage_CreateHomeLoan->SuspendLayout();
				 this->tabPage_SetInterest->SuspendLayout();
				 this->tabPage_Admin->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ToolStripMenuItem_logOut});
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(634, 24);
				 this->menuStrip1->TabIndex = 0;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // ToolStripMenuItem_logOut
				 // 
				 this->ToolStripMenuItem_logOut->Name = L"ToolStripMenuItem_logOut";
				 this->ToolStripMenuItem_logOut->Size = System::Drawing::Size(62, 20);
				 this->ToolStripMenuItem_logOut->Text = L"Log Out";
				 this->ToolStripMenuItem_logOut->Click += gcnew System::EventHandler(this, &BankClerk_Form::ToolStripMenuItem_logOut_Click);
				 // 
				 // panel_AdjustInteresttRate
				 // 
				 this->panel_AdjustInteresttRate->Controls->Add(this->button_SetRates);
				 this->panel_AdjustInteresttRate->Controls->Add(this->textBox_HomeLoanRate);
				 this->panel_AdjustInteresttRate->Controls->Add(this->label_HomeLoanRate);
				 this->panel_AdjustInteresttRate->Controls->Add(this->label_CreditRate);
				 this->panel_AdjustInteresttRate->Controls->Add(this->textBox_CreditRate);
				 this->panel_AdjustInteresttRate->Controls->Add(this->label_IRHeading);
				 this->panel_AdjustInteresttRate->Controls->Add(this->label_SavingsRate);
				 this->panel_AdjustInteresttRate->Controls->Add(this->textBox_SavingsRate);
				 this->panel_AdjustInteresttRate->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->panel_AdjustInteresttRate->Location = System::Drawing::Point(3, 3);
				 this->panel_AdjustInteresttRate->Name = L"panel_AdjustInteresttRate";
				 this->panel_AdjustInteresttRate->Size = System::Drawing::Size(620, 347);
				 this->panel_AdjustInteresttRate->TabIndex = 2;
				 // 
				 // button_SetRates
				 // 
				 this->button_SetRates->Location = System::Drawing::Point(132, 142);
				 this->button_SetRates->Name = L"button_SetRates";
				 this->button_SetRates->Size = System::Drawing::Size(75, 23);
				 this->button_SetRates->TabIndex = 7;
				 this->button_SetRates->Text = L"Set Rates";
				 this->button_SetRates->UseVisualStyleBackColor = true;
				 this->button_SetRates->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_SetRates_Click);
				 // 
				 // textBox_HomeLoanRate
				 // 
				 this->textBox_HomeLoanRate->Location = System::Drawing::Point(107, 113);
				 this->textBox_HomeLoanRate->Name = L"textBox_HomeLoanRate";
				 this->textBox_HomeLoanRate->Size = System::Drawing::Size(100, 20);
				 this->textBox_HomeLoanRate->TabIndex = 6;
				 // 
				 // label_HomeLoanRate
				 // 
				 this->label_HomeLoanRate->AutoSize = true;
				 this->label_HomeLoanRate->Location = System::Drawing::Point(12, 116);
				 this->label_HomeLoanRate->Name = L"label_HomeLoanRate";
				 this->label_HomeLoanRate->Size = System::Drawing::Size(91, 13);
				 this->label_HomeLoanRate->TabIndex = 5;
				 this->label_HomeLoanRate->Text = L"Home Loan Rate:";
				 // 
				 // label_CreditRate
				 // 
				 this->label_CreditRate->AutoSize = true;
				 this->label_CreditRate->Location = System::Drawing::Point(38, 93);
				 this->label_CreditRate->Name = L"label_CreditRate";
				 this->label_CreditRate->Size = System::Drawing::Size(63, 13);
				 this->label_CreditRate->TabIndex = 4;
				 this->label_CreditRate->Text = L"Credit Rate:";
				 // 
				 // textBox_CreditRate
				 // 
				 this->textBox_CreditRate->Location = System::Drawing::Point(107, 89);
				 this->textBox_CreditRate->Name = L"textBox_CreditRate";
				 this->textBox_CreditRate->Size = System::Drawing::Size(100, 20);
				 this->textBox_CreditRate->TabIndex = 3;
				 // 
				 // label_IRHeading
				 // 
				 this->label_IRHeading->AutoSize = true;
				 this->label_IRHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->label_IRHeading->Location = System::Drawing::Point(27, 28);
				 this->label_IRHeading->Name = L"label_IRHeading";
				 this->label_IRHeading->Size = System::Drawing::Size(166, 20);
				 this->label_IRHeading->TabIndex = 2;
				 this->label_IRHeading->Text = L"Interest Rate Settings";
				 // 
				 // label_SavingsRate
				 // 
				 this->label_SavingsRate->AutoSize = true;
				 this->label_SavingsRate->Location = System::Drawing::Point(27, 68);
				 this->label_SavingsRate->Name = L"label_SavingsRate";
				 this->label_SavingsRate->Size = System::Drawing::Size(74, 13);
				 this->label_SavingsRate->TabIndex = 1;
				 this->label_SavingsRate->Text = L"Savings Rate:";
				 // 
				 // textBox_SavingsRate
				 // 
				 this->textBox_SavingsRate->Location = System::Drawing::Point(107, 64);
				 this->textBox_SavingsRate->Name = L"textBox_SavingsRate";
				 this->textBox_SavingsRate->Size = System::Drawing::Size(100, 20);
				 this->textBox_SavingsRate->TabIndex = 0;
				 // 
				 // panel_CustomerAcc
				 // 
				 this->panel_CustomerAcc->Controls->Add(this->tabControl_MainMenu);
				 this->panel_CustomerAcc->Location = System::Drawing::Point(0, 24);
				 this->panel_CustomerAcc->Name = L"panel_CustomerAcc";
				 this->panel_CustomerAcc->Size = System::Drawing::Size(634, 379);
				 this->panel_CustomerAcc->TabIndex = 3;
				 // 
				 // tabControl_MainMenu
				 // 
				 this->tabControl_MainMenu->Controls->Add(this->tabPage_Customer);
				 this->tabControl_MainMenu->Controls->Add(this->tabPage_SetInterest);
				 this->tabControl_MainMenu->Controls->Add(this->tabPage_Admin);
				 this->tabControl_MainMenu->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tabControl_MainMenu->Location = System::Drawing::Point(0, 0);
				 this->tabControl_MainMenu->Name = L"tabControl_MainMenu";
				 this->tabControl_MainMenu->SelectedIndex = 0;
				 this->tabControl_MainMenu->Size = System::Drawing::Size(634, 379);
				 this->tabControl_MainMenu->TabIndex = 1;
				 this->tabControl_MainMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &BankClerk_Form::tabControl_MainMenu_SelectIndexChanged);
				 // 
				 // tabPage_Customer
				 // 
				 this->tabPage_Customer->Controls->Add(this->splitContainer1);
				 this->tabPage_Customer->Location = System::Drawing::Point(4, 22);
				 this->tabPage_Customer->Name = L"tabPage_Customer";
				 this->tabPage_Customer->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage_Customer->Size = System::Drawing::Size(626, 353);
				 this->tabPage_Customer->TabIndex = 0;
				 this->tabPage_Customer->Text = L"Customer";
				 this->tabPage_Customer->UseVisualStyleBackColor = true;
				 // 
				 // splitContainer1
				 // 
				 this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->splitContainer1->Location = System::Drawing::Point(3, 3);
				 this->splitContainer1->Name = L"splitContainer1";
				 // 
				 // splitContainer1.Panel1
				 // 
				 this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::Control;
				 this->splitContainer1->Panel1->Controls->Add(this->label_Password);
				 this->splitContainer1->Panel1->Controls->Add(this->textBox_Password);
				 this->splitContainer1->Panel1->Controls->Add(this->button_ResetPassword);
				 this->splitContainer1->Panel1->Controls->Add(this->button_CustomerSearch);
				 this->splitContainer1->Panel1->Controls->Add(this->label_CustomerId);
				 this->splitContainer1->Panel1->Controls->Add(this->textBox_CustomerId);
				 // 
				 // splitContainer1.Panel2
				 // 
				 this->splitContainer1->Panel2->Controls->Add(this->tabControl_BCCustomer);
				 this->splitContainer1->Size = System::Drawing::Size(620, 347);
				 this->splitContainer1->SplitterDistance = 206;
				 this->splitContainer1->TabIndex = 0;
				 // 
				 // label_Password
				 // 
				 this->label_Password->AutoSize = true;
				 this->label_Password->Location = System::Drawing::Point(14, 248);
				 this->label_Password->Name = L"label_Password";
				 this->label_Password->Size = System::Drawing::Size(81, 13);
				 this->label_Password->TabIndex = 5;
				 this->label_Password->Text = L"New Password:";
				 // 
				 // textBox_Password
				 // 
				 this->textBox_Password->Location = System::Drawing::Point(15, 267);
				 this->textBox_Password->Name = L"textBox_Password";
				 this->textBox_Password->Size = System::Drawing::Size(169, 20);
				 this->textBox_Password->TabIndex = 4;
				 // 
				 // button_ResetPassword
				 // 
				 this->button_ResetPassword->Location = System::Drawing::Point(85, 295);
				 this->button_ResetPassword->Name = L"button_ResetPassword";
				 this->button_ResetPassword->Size = System::Drawing::Size(100, 23);
				 this->button_ResetPassword->TabIndex = 3;
				 this->button_ResetPassword->Text = L"Reset Password";
				 this->button_ResetPassword->UseVisualStyleBackColor = true;
				 this->button_ResetPassword->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_ResetPassword_Click);
				 // 
				 // button_CustomerSearch
				 // 
				 this->button_CustomerSearch->Location = System::Drawing::Point(121, 47);
				 this->button_CustomerSearch->Name = L"button_CustomerSearch";
				 this->button_CustomerSearch->Size = System::Drawing::Size(75, 23);
				 this->button_CustomerSearch->TabIndex = 2;
				 this->button_CustomerSearch->Text = L"Search";
				 this->button_CustomerSearch->UseVisualStyleBackColor = true;
				 this->button_CustomerSearch->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_CustomerSearch_Click);
				 // 
				 // label_CustomerId
				 // 
				 this->label_CustomerId->AutoSize = true;
				 this->label_CustomerId->Location = System::Drawing::Point(18, 29);
				 this->label_CustomerId->Name = L"label_CustomerId";
				 this->label_CustomerId->Size = System::Drawing::Size(65, 13);
				 this->label_CustomerId->TabIndex = 1;
				 this->label_CustomerId->Text = L"Customer id:";
				 // 
				 // textBox_CustomerId
				 // 
				 this->textBox_CustomerId->Location = System::Drawing::Point(15, 47);
				 this->textBox_CustomerId->Name = L"textBox_CustomerId";
				 this->textBox_CustomerId->Size = System::Drawing::Size(100, 20);
				 this->textBox_CustomerId->TabIndex = 0;
				 // 
				 // tabControl_BCCustomer
				 // 
				 this->tabControl_BCCustomer->Controls->Add(this->tabPage_Details);
				 this->tabControl_BCCustomer->Controls->Add(this->tabPage_CreateSavings);
				 this->tabControl_BCCustomer->Controls->Add(this->tabPage_CreateCredit);
				 this->tabControl_BCCustomer->Controls->Add(this->tabPage_CreateHomeLoan);
				 this->tabControl_BCCustomer->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tabControl_BCCustomer->Location = System::Drawing::Point(0, 0);
				 this->tabControl_BCCustomer->Name = L"tabControl_BCCustomer";
				 this->tabControl_BCCustomer->SelectedIndex = 0;
				 this->tabControl_BCCustomer->Size = System::Drawing::Size(410, 347);
				 this->tabControl_BCCustomer->TabIndex = 0;
				 this->tabControl_BCCustomer->SelectedIndexChanged += gcnew System::EventHandler(this, &BankClerk_Form::tabControl_BCCustomer_SelectedIndexChanged);
				 // 
				 // tabPage_Details
				 // 
				 this->tabPage_Details->BackColor = System::Drawing::SystemColors::Control;
				 this->tabPage_Details->Controls->Add(this->button_UpdateDetail);
				 this->tabPage_Details->Controls->Add(this->button_AccountCancel);
				 this->tabPage_Details->Controls->Add(this->label_Accounts);
				 this->tabPage_Details->Controls->Add(this->listBox_AccountSelection);
				 this->tabPage_Details->Controls->Add(this->label_Address);
				 this->tabPage_Details->Controls->Add(this->textBox_Address);
				 this->tabPage_Details->Controls->Add(this->label_Phone);
				 this->tabPage_Details->Controls->Add(this->textBox_Phone);
				 this->tabPage_Details->Controls->Add(this->label_Name);
				 this->tabPage_Details->Controls->Add(this->textBox_Name);
				 this->tabPage_Details->Location = System::Drawing::Point(4, 22);
				 this->tabPage_Details->Name = L"tabPage_Details";
				 this->tabPage_Details->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage_Details->Size = System::Drawing::Size(402, 321);
				 this->tabPage_Details->TabIndex = 0;
				 this->tabPage_Details->Text = L"Details";
				 // 
				 // button_UpdateDetail
				 // 
				 this->button_UpdateDetail->Location = System::Drawing::Point(64, 110);
				 this->button_UpdateDetail->Name = L"button_UpdateDetail";
				 this->button_UpdateDetail->Size = System::Drawing::Size(109, 23);
				 this->button_UpdateDetail->TabIndex = 12;
				 this->button_UpdateDetail->Text = L"Update Details";
				 this->button_UpdateDetail->UseVisualStyleBackColor = true;
				 this->button_UpdateDetail->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_UpdateDetail_Click);
				 // 
				 // button_AccountCancel
				 // 
				 this->button_AccountCancel->Location = System::Drawing::Point(62, 273);
				 this->button_AccountCancel->Name = L"button_AccountCancel";
				 this->button_AccountCancel->Size = System::Drawing::Size(109, 23);
				 this->button_AccountCancel->TabIndex = 11;
				 this->button_AccountCancel->Text = L"Cancel Account";
				 this->button_AccountCancel->UseVisualStyleBackColor = true;
				 this->button_AccountCancel->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_AccountCancel_Click);
				 // 
				 // label_Accounts
				 // 
				 this->label_Accounts->AutoSize = true;
				 this->label_Accounts->Location = System::Drawing::Point(2, 157);
				 this->label_Accounts->Name = L"label_Accounts";
				 this->label_Accounts->Size = System::Drawing::Size(55, 13);
				 this->label_Accounts->TabIndex = 10;
				 this->label_Accounts->Text = L"Accounts:";
				 // 
				 // listBox_AccountSelection
				 // 
				 this->listBox_AccountSelection->FormattingEnabled = true;
				 this->listBox_AccountSelection->Location = System::Drawing::Point(62, 155);
				 this->listBox_AccountSelection->Name = L"listBox_AccountSelection";
				 this->listBox_AccountSelection->Size = System::Drawing::Size(314, 108);
				 this->listBox_AccountSelection->TabIndex = 9;
				 // 
				 // label_Address
				 // 
				 this->label_Address->AutoSize = true;
				 this->label_Address->Location = System::Drawing::Point(11, 80);
				 this->label_Address->Name = L"label_Address";
				 this->label_Address->Size = System::Drawing::Size(48, 13);
				 this->label_Address->TabIndex = 8;
				 this->label_Address->Text = L"Address:";
				 // 
				 // textBox_Address
				 // 
				 this->textBox_Address->Location = System::Drawing::Point(62, 80);
				 this->textBox_Address->Name = L"textBox_Address";
				 this->textBox_Address->Size = System::Drawing::Size(314, 20);
				 this->textBox_Address->TabIndex = 7;
				 // 
				 // label_Phone
				 // 
				 this->label_Phone->AutoSize = true;
				 this->label_Phone->Location = System::Drawing::Point(17, 53);
				 this->label_Phone->Name = L"label_Phone";
				 this->label_Phone->Size = System::Drawing::Size(41, 13);
				 this->label_Phone->TabIndex = 6;
				 this->label_Phone->Text = L"Phone:";
				 // 
				 // textBox_Phone
				 // 
				 this->textBox_Phone->Location = System::Drawing::Point(62, 51);
				 this->textBox_Phone->Name = L"textBox_Phone";
				 this->textBox_Phone->Size = System::Drawing::Size(151, 20);
				 this->textBox_Phone->TabIndex = 5;
				 // 
				 // label_Name
				 // 
				 this->label_Name->AutoSize = true;
				 this->label_Name->Location = System::Drawing::Point(17, 22);
				 this->label_Name->Name = L"label_Name";
				 this->label_Name->Size = System::Drawing::Size(38, 13);
				 this->label_Name->TabIndex = 4;
				 this->label_Name->Text = L"Name:";
				 // 
				 // textBox_Name
				 // 
				 this->textBox_Name->Location = System::Drawing::Point(62, 22);
				 this->textBox_Name->Name = L"textBox_Name";
				 this->textBox_Name->Size = System::Drawing::Size(314, 20);
				 this->textBox_Name->TabIndex = 3;
				 // 
				 // tabPage_CreateSavings
				 // 
				 this->tabPage_CreateSavings->BackColor = System::Drawing::SystemColors::Control;
				 this->tabPage_CreateSavings->Controls->Add(this->label_SavingsBalance);
				 this->tabPage_CreateSavings->Controls->Add(this->textBox_SavingsBalance);
				 this->tabPage_CreateSavings->Controls->Add(this->label_SavingsInterestRate);
				 this->tabPage_CreateSavings->Controls->Add(this->textBox_SavingInterestRate);
				 this->tabPage_CreateSavings->Controls->Add(this->button_CreateAccount);
				 this->tabPage_CreateSavings->Controls->Add(this->label_CSAccountName);
				 this->tabPage_CreateSavings->Controls->Add(this->textBox_CSAccountName);
				 this->tabPage_CreateSavings->Location = System::Drawing::Point(4, 22);
				 this->tabPage_CreateSavings->Name = L"tabPage_CreateSavings";
				 this->tabPage_CreateSavings->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage_CreateSavings->Size = System::Drawing::Size(402, 321);
				 this->tabPage_CreateSavings->TabIndex = 1;
				 this->tabPage_CreateSavings->Text = L"Create Savings";
				 // 
				 // label_SavingsBalance
				 // 
				 this->label_SavingsBalance->AutoSize = true;
				 this->label_SavingsBalance->Location = System::Drawing::Point(41, 73);
				 this->label_SavingsBalance->Name = L"label_SavingsBalance";
				 this->label_SavingsBalance->Size = System::Drawing::Size(49, 13);
				 this->label_SavingsBalance->TabIndex = 6;
				 this->label_SavingsBalance->Text = L"Balance:";
				 // 
				 // textBox_SavingsBalance
				 // 
				 this->textBox_SavingsBalance->Location = System::Drawing::Point(93, 72);
				 this->textBox_SavingsBalance->Name = L"textBox_SavingsBalance";
				 this->textBox_SavingsBalance->Size = System::Drawing::Size(100, 20);
				 this->textBox_SavingsBalance->TabIndex = 5;
				 // 
				 // label_SavingsInterestRate
				 // 
				 this->label_SavingsInterestRate->AutoSize = true;
				 this->label_SavingsInterestRate->Location = System::Drawing::Point(21, 48);
				 this->label_SavingsInterestRate->Name = L"label_SavingsInterestRate";
				 this->label_SavingsInterestRate->Size = System::Drawing::Size(71, 13);
				 this->label_SavingsInterestRate->TabIndex = 4;
				 this->label_SavingsInterestRate->Text = L"Interest Rate:";
				 // 
				 // textBox_SavingInterestRate
				 // 
				 this->textBox_SavingInterestRate->Location = System::Drawing::Point(94, 46);
				 this->textBox_SavingInterestRate->Name = L"textBox_SavingInterestRate";
				 this->textBox_SavingInterestRate->Size = System::Drawing::Size(100, 20);
				 this->textBox_SavingInterestRate->TabIndex = 3;
				 // 
				 // button_CreateAccount
				 // 
				 this->button_CreateAccount->Location = System::Drawing::Point(205, 110);
				 this->button_CreateAccount->Name = L"button_CreateAccount";
				 this->button_CreateAccount->Size = System::Drawing::Size(99, 23);
				 this->button_CreateAccount->TabIndex = 2;
				 this->button_CreateAccount->Text = L"Create Account";
				 this->button_CreateAccount->UseVisualStyleBackColor = true;
				 this->button_CreateAccount->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_CreateAccount_Click);
				 // 
				 // label_CSAccountName
				 // 
				 this->label_CSAccountName->AutoSize = true;
				 this->label_CSAccountName->Location = System::Drawing::Point(9, 22);
				 this->label_CSAccountName->Name = L"label_CSAccountName";
				 this->label_CSAccountName->Size = System::Drawing::Size(81, 13);
				 this->label_CSAccountName->TabIndex = 1;
				 this->label_CSAccountName->Text = L"Account Name:";
				 // 
				 // textBox_CSAccountName
				 // 
				 this->textBox_CSAccountName->Location = System::Drawing::Point(93, 22);
				 this->textBox_CSAccountName->Name = L"textBox_CSAccountName";
				 this->textBox_CSAccountName->Size = System::Drawing::Size(211, 20);
				 this->textBox_CSAccountName->TabIndex = 0;
				 // 
				 // tabPage_CreateCredit
				 // 
				 this->tabPage_CreateCredit->BackColor = System::Drawing::SystemColors::Control;
				 this->tabPage_CreateCredit->Controls->Add(this->label_CreditBalance);
				 this->tabPage_CreateCredit->Controls->Add(this->textBox_CreditBalance);
				 this->tabPage_CreateCredit->Controls->Add(this->label_CreditInterestRate);
				 this->tabPage_CreateCredit->Controls->Add(this->textBox_CreditInterestRate);
				 this->tabPage_CreateCredit->Controls->Add(this->button_CCCreateAccount);
				 this->tabPage_CreateCredit->Controls->Add(this->label_CCOverdraft);
				 this->tabPage_CreateCredit->Controls->Add(this->textBox_CCOverdraft);
				 this->tabPage_CreateCredit->Controls->Add(this->label_CCAccountName);
				 this->tabPage_CreateCredit->Controls->Add(this->textBox_CCAccountName);
				 this->tabPage_CreateCredit->Location = System::Drawing::Point(4, 22);
				 this->tabPage_CreateCredit->Name = L"tabPage_CreateCredit";
				 this->tabPage_CreateCredit->Size = System::Drawing::Size(402, 321);
				 this->tabPage_CreateCredit->TabIndex = 2;
				 this->tabPage_CreateCredit->Text = L"Create Credit";
				 // 
				 // label_CreditBalance
				 // 
				 this->label_CreditBalance->AutoSize = true;
				 this->label_CreditBalance->Location = System::Drawing::Point(44, 100);
				 this->label_CreditBalance->Name = L"label_CreditBalance";
				 this->label_CreditBalance->Size = System::Drawing::Size(49, 13);
				 this->label_CreditBalance->TabIndex = 8;
				 this->label_CreditBalance->Text = L"Balance:";
				 // 
				 // textBox_CreditBalance
				 // 
				 this->textBox_CreditBalance->Location = System::Drawing::Point(96, 99);
				 this->textBox_CreditBalance->Name = L"textBox_CreditBalance";
				 this->textBox_CreditBalance->Size = System::Drawing::Size(100, 20);
				 this->textBox_CreditBalance->TabIndex = 7;
				 // 
				 // label_CreditInterestRate
				 // 
				 this->label_CreditInterestRate->AutoSize = true;
				 this->label_CreditInterestRate->Location = System::Drawing::Point(49, 49);
				 this->label_CreditInterestRate->Name = L"label_CreditInterestRate";
				 this->label_CreditInterestRate->Size = System::Drawing::Size(45, 13);
				 this->label_CreditInterestRate->TabIndex = 6;
				 this->label_CreditInterestRate->Text = L"Interest:";
				 // 
				 // textBox_CreditInterestRate
				 // 
				 this->textBox_CreditInterestRate->Location = System::Drawing::Point(96, 48);
				 this->textBox_CreditInterestRate->Name = L"textBox_CreditInterestRate";
				 this->textBox_CreditInterestRate->Size = System::Drawing::Size(100, 20);
				 this->textBox_CreditInterestRate->TabIndex = 5;
				 // 
				 // button_CCCreateAccount
				 // 
				 this->button_CCCreateAccount->Location = System::Drawing::Point(193, 137);
				 this->button_CCCreateAccount->Name = L"button_CCCreateAccount";
				 this->button_CCCreateAccount->Size = System::Drawing::Size(115, 23);
				 this->button_CCCreateAccount->TabIndex = 4;
				 this->button_CCCreateAccount->Text = L"Create Account";
				 this->button_CCCreateAccount->UseVisualStyleBackColor = true;
				 this->button_CCCreateAccount->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_CCCreateAccount_Click);
				 // 
				 // label_CCOverdraft
				 // 
				 this->label_CCOverdraft->AutoSize = true;
				 this->label_CCOverdraft->Location = System::Drawing::Point(15, 75);
				 this->label_CCOverdraft->Name = L"label_CCOverdraft";
				 this->label_CCOverdraft->Size = System::Drawing::Size(78, 13);
				 this->label_CCOverdraft->TabIndex = 3;
				 this->label_CCOverdraft->Text = L"Overdraft Limit:";
				 // 
				 // textBox_CCOverdraft
				 // 
				 this->textBox_CCOverdraft->Location = System::Drawing::Point(96, 73);
				 this->textBox_CCOverdraft->Name = L"textBox_CCOverdraft";
				 this->textBox_CCOverdraft->Size = System::Drawing::Size(100, 20);
				 this->textBox_CCOverdraft->TabIndex = 2;
				 // 
				 // label_CCAccountName
				 // 
				 this->label_CCAccountName->AutoSize = true;
				 this->label_CCAccountName->Location = System::Drawing::Point(12, 23);
				 this->label_CCAccountName->Name = L"label_CCAccountName";
				 this->label_CCAccountName->Size = System::Drawing::Size(81, 13);
				 this->label_CCAccountName->TabIndex = 1;
				 this->label_CCAccountName->Text = L"Account Name:";
				 // 
				 // textBox_CCAccountName
				 // 
				 this->textBox_CCAccountName->Location = System::Drawing::Point(96, 22);
				 this->textBox_CCAccountName->Name = L"textBox_CCAccountName";
				 this->textBox_CCAccountName->Size = System::Drawing::Size(212, 20);
				 this->textBox_CCAccountName->TabIndex = 0;
				 // 
				 // tabPage_CreateHomeLoan
				 // 
				 this->tabPage_CreateHomeLoan->BackColor = System::Drawing::SystemColors::Control;
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_HomeLoanInterest);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->textBox_HomeLoanInterest);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_HomeLoanBalance);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->textBox_HomeLoanBalance);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->button_CHLCreateAccount);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_MinRepayment);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->textBox_MinRepayment);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_CHLAmount);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->textBox_CHLAmount);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_RepaymentOption);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->listBox_RepaymentOption);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_PropertyAddress);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->textBox_PropertyAddress);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->label_CHLAccountName);
				 this->tabPage_CreateHomeLoan->Controls->Add(this->textBox_CHLAccountName);
				 this->tabPage_CreateHomeLoan->Location = System::Drawing::Point(4, 22);
				 this->tabPage_CreateHomeLoan->Name = L"tabPage_CreateHomeLoan";
				 this->tabPage_CreateHomeLoan->Size = System::Drawing::Size(402, 321);
				 this->tabPage_CreateHomeLoan->TabIndex = 3;
				 this->tabPage_CreateHomeLoan->Text = L"Create Home Loan";
				 // 
				 // label_HomeLoanInterest
				 // 
				 this->label_HomeLoanInterest->AutoSize = true;
				 this->label_HomeLoanInterest->Location = System::Drawing::Point(40, 73);
				 this->label_HomeLoanInterest->Name = L"label_HomeLoanInterest";
				 this->label_HomeLoanInterest->Size = System::Drawing::Size(45, 13);
				 this->label_HomeLoanInterest->TabIndex = 14;
				 this->label_HomeLoanInterest->Text = L"Interest:";
				 // 
				 // textBox_HomeLoanInterest
				 // 
				 this->textBox_HomeLoanInterest->Location = System::Drawing::Point(87, 71);
				 this->textBox_HomeLoanInterest->Name = L"textBox_HomeLoanInterest";
				 this->textBox_HomeLoanInterest->Size = System::Drawing::Size(100, 20);
				 this->textBox_HomeLoanInterest->TabIndex = 13;
				 // 
				 // label_HomeLoanBalance
				 // 
				 this->label_HomeLoanBalance->AutoSize = true;
				 this->label_HomeLoanBalance->Location = System::Drawing::Point(35, 151);
				 this->label_HomeLoanBalance->Name = L"label_HomeLoanBalance";
				 this->label_HomeLoanBalance->Size = System::Drawing::Size(49, 13);
				 this->label_HomeLoanBalance->TabIndex = 12;
				 this->label_HomeLoanBalance->Text = L"Balance:";
				 // 
				 // textBox_HomeLoanBalance
				 // 
				 this->textBox_HomeLoanBalance->Location = System::Drawing::Point(87, 150);
				 this->textBox_HomeLoanBalance->Name = L"textBox_HomeLoanBalance";
				 this->textBox_HomeLoanBalance->Size = System::Drawing::Size(100, 20);
				 this->textBox_HomeLoanBalance->TabIndex = 11;
				 // 
				 // button_CHLCreateAccount
				 // 
				 this->button_CHLCreateAccount->Location = System::Drawing::Point(199, 174);
				 this->button_CHLCreateAccount->Name = L"button_CHLCreateAccount";
				 this->button_CHLCreateAccount->Size = System::Drawing::Size(109, 23);
				 this->button_CHLCreateAccount->TabIndex = 10;
				 this->button_CHLCreateAccount->Text = L"Create Account";
				 this->button_CHLCreateAccount->UseVisualStyleBackColor = true;
				 this->button_CHLCreateAccount->Click += gcnew System::EventHandler(this, &BankClerk_Form::button_CHLCreateAccount_Click);
				 // 
				 // label_MinRepayment
				 // 
				 this->label_MinRepayment->AutoSize = true;
				 this->label_MinRepayment->Location = System::Drawing::Point(3, 127);
				 this->label_MinRepayment->Name = L"label_MinRepayment";
				 this->label_MinRepayment->Size = System::Drawing::Size(84, 13);
				 this->label_MinRepayment->TabIndex = 9;
				 this->label_MinRepayment->Text = L"Min Repayment:";
				 // 
				 // textBox_MinRepayment
				 // 
				 this->textBox_MinRepayment->Location = System::Drawing::Point(87, 124);
				 this->textBox_MinRepayment->Name = L"textBox_MinRepayment";
				 this->textBox_MinRepayment->Size = System::Drawing::Size(100, 20);
				 this->textBox_MinRepayment->TabIndex = 8;
				 // 
				 // label_CHLAmount
				 // 
				 this->label_CHLAmount->AutoSize = true;
				 this->label_CHLAmount->Location = System::Drawing::Point(11, 100);
				 this->label_CHLAmount->Name = L"label_CHLAmount";
				 this->label_CHLAmount->Size = System::Drawing::Size(73, 13);
				 this->label_CHLAmount->TabIndex = 7;
				 this->label_CHLAmount->Text = L"Loan Amount:";
				 // 
				 // textBox_CHLAmount
				 // 
				 this->textBox_CHLAmount->Location = System::Drawing::Point(87, 98);
				 this->textBox_CHLAmount->Name = L"textBox_CHLAmount";
				 this->textBox_CHLAmount->Size = System::Drawing::Size(100, 20);
				 this->textBox_CHLAmount->TabIndex = 6;
				 // 
				 // label_RepaymentOption
				 // 
				 this->label_RepaymentOption->AutoSize = true;
				 this->label_RepaymentOption->Location = System::Drawing::Point(209, 88);
				 this->label_RepaymentOption->Name = L"label_RepaymentOption";
				 this->label_RepaymentOption->Size = System::Drawing::Size(98, 13);
				 this->label_RepaymentOption->TabIndex = 5;
				 this->label_RepaymentOption->Text = L"Repayment Option:";
				 // 
				 // listBox_RepaymentOption
				 // 
				 this->listBox_RepaymentOption->FormattingEnabled = true;
				 this->listBox_RepaymentOption->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Weekly", L"Fortnightly", L"Monthly"});
				 this->listBox_RepaymentOption->Location = System::Drawing::Point(211, 110);
				 this->listBox_RepaymentOption->Name = L"listBox_RepaymentOption";
				 this->listBox_RepaymentOption->Size = System::Drawing::Size(95, 43);
				 this->listBox_RepaymentOption->TabIndex = 4;
				 // 
				 // label_PropertyAddress
				 // 
				 this->label_PropertyAddress->AutoSize = true;
				 this->label_PropertyAddress->Location = System::Drawing::Point(-4, 48);
				 this->label_PropertyAddress->Name = L"label_PropertyAddress";
				 this->label_PropertyAddress->Size = System::Drawing::Size(90, 13);
				 this->label_PropertyAddress->TabIndex = 3;
				 this->label_PropertyAddress->Text = L"Property Address:";
				 // 
				 // textBox_PropertyAddress
				 // 
				 this->textBox_PropertyAddress->Location = System::Drawing::Point(86, 46);
				 this->textBox_PropertyAddress->Name = L"textBox_PropertyAddress";
				 this->textBox_PropertyAddress->Size = System::Drawing::Size(222, 20);
				 this->textBox_PropertyAddress->TabIndex = 2;
				 // 
				 // label_CHLAccountName
				 // 
				 this->label_CHLAccountName->AutoSize = true;
				 this->label_CHLAccountName->Location = System::Drawing::Point(4, 21);
				 this->label_CHLAccountName->Name = L"label_CHLAccountName";
				 this->label_CHLAccountName->Size = System::Drawing::Size(81, 13);
				 this->label_CHLAccountName->TabIndex = 1;
				 this->label_CHLAccountName->Text = L"Account Name:";
				 // 
				 // textBox_CHLAccountName
				 // 
				 this->textBox_CHLAccountName->Location = System::Drawing::Point(86, 20);
				 this->textBox_CHLAccountName->Name = L"textBox_CHLAccountName";
				 this->textBox_CHLAccountName->Size = System::Drawing::Size(222, 20);
				 this->textBox_CHLAccountName->TabIndex = 0;
				 // 
				 // tabPage_SetInterest
				 // 
				 this->tabPage_SetInterest->BackColor = System::Drawing::SystemColors::Control;
				 this->tabPage_SetInterest->Controls->Add(this->panel_AdjustInteresttRate);
				 this->tabPage_SetInterest->Location = System::Drawing::Point(4, 22);
				 this->tabPage_SetInterest->Name = L"tabPage_SetInterest";
				 this->tabPage_SetInterest->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage_SetInterest->Size = System::Drawing::Size(626, 353);
				 this->tabPage_SetInterest->TabIndex = 1;
				 this->tabPage_SetInterest->Text = L"Set Interest Rates";
				 // 
				 // tabPage_Admin
				 // 
				 this->tabPage_Admin->BackColor = System::Drawing::SystemColors::Control;
				 this->tabPage_Admin->Controls->Add(this->passwordChange1);
				 this->tabPage_Admin->Location = System::Drawing::Point(4, 22);
				 this->tabPage_Admin->Name = L"tabPage_Admin";
				 this->tabPage_Admin->Padding = System::Windows::Forms::Padding(3);
				 this->tabPage_Admin->Size = System::Drawing::Size(626, 353);
				 this->tabPage_Admin->TabIndex = 2;
				 this->tabPage_Admin->Text = L"Admin";
				 // 
				 // passwordChange1
				 // 
				 this->passwordChange1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->passwordChange1->Location = System::Drawing::Point(3, 3);
				 this->passwordChange1->Name = L"passwordChange1";
				 this->passwordChange1->Size = System::Drawing::Size(620, 347);
				 this->passwordChange1->TabIndex = 4;
				 this->passwordChange1->Load += gcnew System::EventHandler(this, &BankClerk_Form::passwordChange1_Load);
				 // 
				 // BankClerk_Form
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(634, 403);
				 this->Controls->Add(this->menuStrip1);
				 this->Controls->Add(this->panel_CustomerAcc);
				 this->MainMenuStrip = this->menuStrip1;
				 this->Name = L"BankClerk_Form";
				 this->Text = L"BankClerk_Form";
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 this->panel_AdjustInteresttRate->ResumeLayout(false);
				 this->panel_AdjustInteresttRate->PerformLayout();
				 this->panel_CustomerAcc->ResumeLayout(false);
				 this->tabControl_MainMenu->ResumeLayout(false);
				 this->tabPage_Customer->ResumeLayout(false);
				 this->splitContainer1->Panel1->ResumeLayout(false);
				 this->splitContainer1->Panel1->PerformLayout();
				 this->splitContainer1->Panel2->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
				 this->splitContainer1->ResumeLayout(false);
				 this->tabControl_BCCustomer->ResumeLayout(false);
				 this->tabPage_Details->ResumeLayout(false);
				 this->tabPage_Details->PerformLayout();
				 this->tabPage_CreateSavings->ResumeLayout(false);
				 this->tabPage_CreateSavings->PerformLayout();
				 this->tabPage_CreateCredit->ResumeLayout(false);
				 this->tabPage_CreateCredit->PerformLayout();
				 this->tabPage_CreateHomeLoan->ResumeLayout(false);
				 this->tabPage_CreateHomeLoan->PerformLayout();
				 this->tabPage_SetInterest->ResumeLayout(false);
				 this->tabPage_Admin->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

			 //--------------------------------------------------------------------------------------------//
			 //helper functions


			 // hides all of the panels
	private: System::Void hideAllPanels(){

				 this->panel_AdjustInteresttRate->Visible = false;
				 this->panel_CustomerAcc->Visible = false;			 
			 }

			 // loads a customers details to the details panel
	private: System::Void loadCustomerDetails(){

				 if(_customer == NULL){return;}

				 clearCustomerDetails();
				 this->textBox_Phone->Clear();
				 this->textBox_Address->Clear();
				 this->textBox_Name->Text = DotNetUtils::StdStringToSystemString(_customer->getName());
				 this->textBox_Phone->Text = DotNetUtils::StdStringToSystemString(_customer->getPhoneNumber());
				 this->textBox_Address->Text = DotNetUtils::StdStringToSystemString(_customer->getAddress());
			 }

			 // clears away customer details
	private: System::Void clearCustomerDetails(){

				 this->textBox_Name->Clear();
				 this->textBox_Phone->Clear();
				 this->textBox_Address->Clear();
			 }

			 // loads a customers acccount list to the accounts list box
	private: System::Void loadCustomerAccounts(){

				 if(_customer == NULL){return;}


				 listBox_AccountSelection->Items->Clear();

				 list<Account*> customerAccounts = _as->getCustomerAccounts(_customer->getUserId());

				 list<Account*>::iterator it;
				 for (it = customerAccounts.begin(); it != customerAccounts.end(); it++){

					 listBox_AccountSelection->Items->Add((*it)->getAccountId() + "\t" + (*it)->getBalance());
				 }
			 }

	private: System::Void clearCreateSavingsPanel(){



				 this->textBox_CSAccountName->Clear();
				 this->textBox_SavingInterestRate->Clear();
				 this->textBox_SavingsBalance->Clear();
			 }

	private: System::Void loadCreateSavingsPanel(){

				 if(_customer == NULL){return;}

				 clearCreateSavingsPanel();
				 this->textBox_CSAccountName->Text = DotNetUtils::StdStringToSystemString(_customer->getName());
				 this->textBox_SavingInterestRate->Text =
					 _as->getSavingsInterestRate().ToString();
				 this->textBox_SavingsBalance->Text = _as->getDefaultBalance().ToString();
				 this->textBox_SavingsBalance->Enabled = false;
			 }


	private: System::Void clearCreateCreditPanel(){

				 this->textBox_CCAccountName->Clear();
				 this->textBox_CreditInterestRate->Clear();
				 this->textBox_CCOverdraft->Clear();
				 this->textBox_CreditBalance->Clear();

			 }


	private: System::Void loadCreateCreditPanel(){

				 if(_customer == NULL){return;}
				 
				 clearCreateCreditPanel();
				 this->textBox_CCAccountName->Text = DotNetUtils::StdStringToSystemString(_customer->getName());
				 this->textBox_CreditInterestRate->Text = _as->getCreditCardInterestRate().ToString();
				 this->textBox_CCOverdraft->Text = ("0");
				 this->textBox_CreditBalance->Text = (_as->getDefaultBalance().ToString());
				 this->textBox_CreditBalance->Enabled = false;
			 }


	private: System::Void clearCreateHomeLoanPanel(){

				 this->textBox_CHLAccountName->Clear();
				 this->textBox_PropertyAddress->Clear();
				 this->textBox_HomeLoanInterest->Clear();
				 this->textBox_CHLAmount->Clear();
				 this->textBox_MinRepayment->Clear();
				 this->listBox_RepaymentOption->SelectedIndex = 0;
				 this->textBox_HomeLoanBalance->Clear();

			 }

	private: System::Void loadCreateHomeLoanPanel(){

				 				 if(_customer == NULL){return;}

				 clearCreateHomeLoanPanel();
				 this->textBox_CHLAccountName->Text = DotNetUtils::StdStringToSystemString(_customer->getName());
				 this->textBox_HomeLoanInterest->Text = _as->getHomeLoanInterestRate().ToString();
				 this->textBox_HomeLoanBalance->Text = (_as->getDefaultBalance().ToString());
				 this->textBox_HomeLoanBalance->Enabled = false;
			 }

			 private: System::Void clearRatesPanel(){

				 this->textBox_SavingsRate->Clear();
				 this->textBox_CreditRate->Clear();
				 this->textBox_HomeLoanRate->Clear();
			 }

			 private: System::Void loadRatesPanel(){

						  				 if(_customer == NULL){return;}
				
				 clearRatesPanel();
				 this->textBox_SavingsRate->Text = _as->getSavingsInterestRate().ToString();
				 this->textBox_CreditRate->Text = _as->getCreditCardInterestRate().ToString();
				 this->textBox_HomeLoanRate->Text = _as->getHomeLoanInterestRate().ToString();

			 }


			 // logout event
	private: System::Void ToolStripMenuItem_logOut_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Hide();
				 _ac->launchLoginForm();
			 }


			 //private: System::Void createSavingsAccToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //			 //this->panel1->Visible = true;
			 //			 //this->panel1->BringToFront();
			 //		 }
			 //private: System::Void createCreditAccToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //			 //this->Create_Credit_Acc_Panel->Visible = true;
			 //			 //this->Create_Credit_Acc_Panel->BringToFront();
			 //		 }

			 //private: System::Void createAccountToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //			 //this->tabControl1->BringToFront()


			 //		 }
			 //private: System::Void cReditToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //			 //this->tabControl1->BringToFront();
			 //			 //tabControl1->SelectedIndex = 0;

			 //		 }


	private: System::Void customerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->panel_CustomerAcc->Visible = true;
				 this->panel_CustomerAcc->BringToFront();
			 }



	private: System::Void button_CustomerSearch_Click(System::Object^  sender, System::EventArgs^  e) {


				 // check for empty values
				 if (this->textBox_CustomerId->Text == "" || this->textBox_CustomerId->Text == "")
				 {
					 this->textBox_CustomerId->Text = DotNetUtils::StdStringToSystemString("Enter ID");
					 return;
				 }

				 int requestedCustomerId = int::Parse(textBox_CustomerId->Text);
				 _customer = dynamic_cast<Customer*>(_us->getUser(requestedCustomerId));

				 if(!_customer){
					 this->textBox_CustomerId->Text = DotNetUtils::StdStringToSystemString("Invalid ID");
				 }
				 else{
					 loadCustomerDetails();
					 loadCustomerAccounts();
				 }


			 }

			 // deletes the selected account
	private: System::Void button_AccountCancel_Click(System::Object^  sender, System::EventArgs^  e) {

				 int index = this->listBox_AccountSelection->SelectedIndex;

				 if(index < 0){

					 MessageBox::Show(this, "Please select an account to delete!");
					 return;
				 }
				 std::string line = DotNetUtils::SystemStringToStdString(this->listBox_AccountSelection->Items[index]->ToString());


				 vector<std::string> split = StringUtils::splitString(line, ' ');
				 int accId = TypeConv(split[0]);
				 _as->closeAccount(accId);
				 MessageBox::Show(this, "Account " + accId + " successfully deleted!");

			 }

			 // updates a customers personal details
	private: System::Void button_UpdateDetail_Click(System::Object^  sender, System::EventArgs^  e) {

				 string details [3];

				 if(
					 this->textBox_Name->Text == "" || 
					 this->textBox_Phone->Text == "" ||
					 this->textBox_Address->Text == ""){}
				 else
				 {
					 details[0] = DotNetUtils::SystemStringToStdString(this->textBox_Name->Text);
					 details[1] = DotNetUtils::SystemStringToStdString(this->textBox_Phone->Text);
					 details[2] = DotNetUtils::SystemStringToStdString(this->textBox_Address->Text);
					 _us->updateCustomerDetails(_customer->getUserId(), details);
					 MessageBox::Show(this, "Details successfully updated!");
				 }
				 loadCustomerDetails();
			 }

			 // resets the selected customers password
	private: System::Void button_ResetPassword_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(_customer == NULL){
					return;
				 }
				 
				 this->textBox_Password->Text = DotNetUtils::StdStringToSystemString(
					 _us->resetPassword(_customer->getUserId()));

			 }

			 // creates a savings account in selected customers name
	private: System::Void button_CreateAccount_Click(System::Object^  sender, System::EventArgs^  e) {	 

				 int accountId = _as->makeSavingsAccount(
					 DotNetUtils::SystemStringToStdString(this->textBox_CSAccountName->Text), 
					 _customer->getUserId(), 
					 double::Parse(this->textBox_SavingInterestRate->Text), 
					 double::Parse(this->textBox_SavingsBalance->Text));
				 MessageBox::Show(this, "Savings Account " + accountId + " successfully created!");
				 clearCreateSavingsPanel();

			 }

			 // creates a credit account in selected customers name
	private: System::Void button_CCCreateAccount_Click(System::Object^  sender, System::EventArgs^  e) {		 

				 int accountId = _as->makeCreditCardAccount(
					 DotNetUtils::SystemStringToStdString(this->textBox_CCAccountName->Text),
					 _customer->getUserId(),
					 double::Parse(this->textBox_CreditInterestRate->Text), 
					 double::Parse(this->textBox_CreditBalance->Text),
					 double::Parse(this->textBox_CCOverdraft->Text));
				 MessageBox::Show(this, "Credit Card Account " + accountId + " successfully created!");
				 clearCreateCreditPanel();

			 }

			 // creates a home loan account in selected customers name
	private: System::Void button_CHLCreateAccount_Click(System::Object^  sender, System::EventArgs^  e) {


				 int accountId = _as->makeHomeLoanAccount(
					 DotNetUtils::SystemStringToStdString(this->textBox_CHLAccountName->Text), 
					 _customer->getUserId(), 
					 double::Parse(this->textBox_HomeLoanInterest->Text), 
					 double::Parse(this->textBox_HomeLoanBalance->Text), 
					 DotNetUtils::SystemStringToStdString(this->textBox_PropertyAddress->Text), 
					 (HomeLoanAccount::RepaymentOption)this->listBox_RepaymentOption->SelectedIndex, 
					 double::Parse(this->textBox_MinRepayment->Text));

				 MessageBox::Show(this, "Home Loan Account " + accountId + " successfully created!");
				 clearCreateHomeLoanPanel();
			 }

			 // sets interest rates provided by the bank
	private: System::Void button_SetRates_Click(System::Object^  sender, System::EventArgs^  e) {

				 enum{SAVINGS_RATE, CREDIT_CARD_RATE, HOME_LOAN_RATE, NUM_RATES};
				 vector<double> rates(NUM_RATES);
				 rates[SAVINGS_RATE] = double::Parse(this->textBox_SavingsRate->Text);
				 rates[CREDIT_CARD_RATE] = double::Parse(this->textBox_CreditRate->Text);
				 rates[HOME_LOAN_RATE] = double::Parse(this->textBox_HomeLoanRate->Text);
				 _as->setRates(rates);
			 }

			 // user changed tabs...
	private: System::Void tabControl_BCCustomer_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 enum{DETAILS, SAVINGS, CREDIT, HOME_LOAN};

				 int index = this->tabControl_BCCustomer->SelectedIndex;
				 switch (index)
				 {
				 case DETAILS:
					 loadCustomerDetails();
					 loadCustomerAccounts();
					 break;
				 case SAVINGS:
					 loadCreateSavingsPanel();
					 break;
				 case CREDIT:
					 loadCreateCreditPanel();
					 break;
				 case HOME_LOAN:
					 loadCreateHomeLoanPanel();
					 break;
				 }
			 }

	private: System::Void tabControl_MainMenu_SelectIndexChanged(System::Object^  sender, System::EventArgs^  e){

				 enum{CUSTOMER, RATES, ADMIN};
				 int index = this->tabControl_MainMenu->SelectedIndex;
				 this->tabControl_BCCustomer->SelectedIndex = CUSTOMER;

				 switch(index)
				 {
				 case CUSTOMER:
					 loadCustomerDetails();
					 loadCustomerAccounts();
					 break;
				 case RATES:
					 loadRatesPanel();
					 break;
				 case ADMIN:

					 break;
				 }

			 }


	private: System::Void passwordChange1_Load(System::Object^  sender, System::EventArgs^  e) {



			 }
	};


};


