#pragma once
#include "CSavingsView.h"
#include "CCreditView.h"
#include "CHomeLoanView.h"
#include "CDeposit.h"
#include "CWithdraw.h"
#include "CTransfer.h"
#include "CPasswordChange.h"
#include "CTransactions.h"
#include "Session.h"
#include "Utils.h"
#include "ApplicationController.h"
#include "AccountServices.h"
#include <string>
#include <sstream>
#include <cliext\map>

namespace BankingSystemV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Customer_Form
	/// </summary>
	public ref class Customer_Form : public System::Windows::Forms::Form
	{
	public:
		Customer_Form(ApplicationController* ac)
		{	

			InitializeComponent();
			cDeposit1->Dock = System::Windows::Forms::DockStyle::Fill;
			cWithdraw1->Dock = System::Windows::Forms::DockStyle::Fill;
			cSavingsView1->Dock = System::Windows::Forms::DockStyle::Fill;
			cHomeLoanView1->Dock = System::Windows::Forms::DockStyle::Fill;
			cCreditView1->Dock = System::Windows::Forms::DockStyle::Fill;
			cTransfer1->Dock = System::Windows::Forms::DockStyle::Fill;
			
			_ac = ac;
			_customer = dynamic_cast<Customer*>(Session::getUser());

			if (_customer == NULL)
			{
				// TODO throw exception
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Customer_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	// manually entereed code
	private: 
		ApplicationController* _ac;
		Customer* _customer;
































	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnLogout;
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel1->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->btnLogout);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(641, 21);
			this->panel1->TabIndex = 3;
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::SystemColors::Control;
			this->btnLogout->Location = System::Drawing::Point(567, 0);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(74, 21);
			this->btnLogout->TabIndex = 0;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &Customer_Form::btnLogout_Click);
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPage1);
			this->tabControl->Controls->Add(this->tabPage2);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Location = System::Drawing::Point(0, 21);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(641, 570);
			this->tabControl->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"details";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(633, 544);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Your Details";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"accounts";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(633, 544);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Your Accounts";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 591);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->panel1);
			this->Name = L"Customer_Form";
			this->Text = L"Ezy Bank: Customer Portal";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Customer_Form::Customer_Form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Customer_Form::Customer_Form_Load);
			this->panel1->ResumeLayout(false);
			this->tabControl->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private:

	// ----------------------------------------------------------------------------------------- //
	// Event handlers

	// form closed
	System::Void Customer_Form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
	{
		_ac->closeApplication();	 
	}

	// logout event
	System::Void btnLogout_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		 this->Hide();
		 _ac->launchLoginForm();
	}

	// load event
	System::Void Customer_Form_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		// initialise details
		this->txtCustomerName->Text =  DotNetUtils::StdStringToSystemString(_customer->getName());
		this->txtCustomerAddress->Text =  DotNetUtils::StdStringToSystemString(_customer->getAddress());
		this->txtCustomerPhone->Text =  DotNetUtils::StdStringToSystemString(_customer->getPhoneNumber());

		// intiialise accounts
		std::string str; System::String^ temp;
		set<int> accountIds = _customer->getAccounts();
		set<int>::iterator sit;
		for (sit = accountIds.begin(); sit != accountIds.end(); sit++)
		{
			Account* ap = AccountServices::instance()->getAccount(*sit);

			stringstream ss;
			ss << ap->getAccountId() << "        ";
			ss << ap->getAccountTypeName() << "      ";
			ss << ap->getAccountName() << "       ";
			ss << ap->getBalance();
			getline(ss, str);

			temp = gcnew String(str.c_str());
			this->lsbxSelectAccount->Items->Add(temp);
		}

	}

	// update details event
	System::Void btnUpdateDetails_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		_customer->setName(DotNetUtils::SystemStringToStdString(this->txtCustomerName->Text));
		_customer->setAddress(DotNetUtils::SystemStringToStdString(this->txtCustomerAddress->Text));
		_customer->setPhoneNumber(DotNetUtils::SystemStringToStdString(this->txtCustomerPhone->Text));
		MessageBox::Show(this, "Details successfully updated!");
	}

	// ----------------------------------------------------------------------------------------- //

 
};
}
