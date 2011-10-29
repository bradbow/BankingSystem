#pragma once
#include "CCustomerAccounts.h"
#include "CCustomerDetails.h"
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
			
			_ac = ac;
			_customer = dynamic_cast<Customer*>(Session::getUser());
			hideNonBaseDetailFields();

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
	private: BankingSystemV2::CCustomerDetails^  pnlCustomerDetails;
	private: BankingSystemV2::CCustomerAccounts^  pnlCustomerAccounts;
	private: System::Windows::Forms::Label^  lblOverdraftLimit;
	private: System::Windows::Forms::Label^  lblBalance;
	private: System::Windows::Forms::Label^  lblInterestRate;
	private: System::Windows::Forms::Label^  lblAccountName;
	private: System::Windows::Forms::Label^  lblAccountID;
	private: System::Windows::Forms::TextBox^  txtOverdraftLimit;
	private: System::Windows::Forms::TextBox^  txtBalance;
	private: System::Windows::Forms::TextBox^  txtInterestRate;
	private: System::Windows::Forms::TextBox^  txtAccountName;
	private: System::Windows::Forms::TextBox^  txtAccountId;
	private: System::Windows::Forms::TextBox^  txtMinRepayment;
	private: System::Windows::Forms::TextBox^  txtPaymentOption;
	private: System::Windows::Forms::TextBox^  txtAddress;
	private: System::Windows::Forms::Label^  lblRepayment;
	private: System::Windows::Forms::Label^  lblOption;
	private: System::Windows::Forms::Label^  lblAddress;
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
			this->pnlCustomerDetails = (gcnew BankingSystemV2::CCustomerDetails());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtMinRepayment = (gcnew System::Windows::Forms::TextBox());
			this->txtPaymentOption = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblRepayment = (gcnew System::Windows::Forms::Label());
			this->lblOption = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->txtOverdraftLimit = (gcnew System::Windows::Forms::TextBox());
			this->txtBalance = (gcnew System::Windows::Forms::TextBox());
			this->txtInterestRate = (gcnew System::Windows::Forms::TextBox());
			this->txtAccountName = (gcnew System::Windows::Forms::TextBox());
			this->txtAccountId = (gcnew System::Windows::Forms::TextBox());
			this->lblOverdraftLimit = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->lblInterestRate = (gcnew System::Windows::Forms::Label());
			this->lblAccountName = (gcnew System::Windows::Forms::Label());
			this->lblAccountID = (gcnew System::Windows::Forms::Label());
			this->pnlCustomerAccounts = (gcnew BankingSystemV2::CCustomerAccounts());
			this->panel1->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->btnLogout);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(608, 21);
			this->panel1->TabIndex = 3;
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::SystemColors::Control;
			this->btnLogout->Location = System::Drawing::Point(534, 0);
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
			this->tabControl->Size = System::Drawing::Size(608, 819);
			this->tabControl->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pnlCustomerDetails);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(600, 793);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Your Details";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pnlCustomerDetails
			// 
			this->pnlCustomerDetails->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlCustomerDetails->Location = System::Drawing::Point(3, 3);
			this->pnlCustomerDetails->Name = L"pnlCustomerDetails";
			this->pnlCustomerDetails->Size = System::Drawing::Size(594, 787);
			this->pnlCustomerDetails->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtMinRepayment);
			this->tabPage2->Controls->Add(this->txtPaymentOption);
			this->tabPage2->Controls->Add(this->txtAddress);
			this->tabPage2->Controls->Add(this->lblRepayment);
			this->tabPage2->Controls->Add(this->lblOption);
			this->tabPage2->Controls->Add(this->lblAddress);
			this->tabPage2->Controls->Add(this->txtOverdraftLimit);
			this->tabPage2->Controls->Add(this->txtBalance);
			this->tabPage2->Controls->Add(this->txtInterestRate);
			this->tabPage2->Controls->Add(this->txtAccountName);
			this->tabPage2->Controls->Add(this->txtAccountId);
			this->tabPage2->Controls->Add(this->lblOverdraftLimit);
			this->tabPage2->Controls->Add(this->lblBalance);
			this->tabPage2->Controls->Add(this->lblInterestRate);
			this->tabPage2->Controls->Add(this->lblAccountName);
			this->tabPage2->Controls->Add(this->lblAccountID);
			this->tabPage2->Controls->Add(this->pnlCustomerAccounts);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(600, 793);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Your Accounts";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txtMinRepayment
			// 
			this->txtMinRepayment->Location = System::Drawing::Point(366, 400);
			this->txtMinRepayment->Name = L"txtMinRepayment";
			this->txtMinRepayment->Size = System::Drawing::Size(100, 20);
			this->txtMinRepayment->TabIndex = 16;
			// 
			// txtPaymentOption
			// 
			this->txtPaymentOption->Location = System::Drawing::Point(366, 362);
			this->txtPaymentOption->Name = L"txtPaymentOption";
			this->txtPaymentOption->Size = System::Drawing::Size(199, 20);
			this->txtPaymentOption->TabIndex = 15;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(366, 324);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(199, 20);
			this->txtAddress->TabIndex = 14;
			// 
			// lblRepayment
			// 
			this->lblRepayment->AutoSize = true;
			this->lblRepayment->Location = System::Drawing::Point(289, 403);
			this->lblRepayment->Name = L"lblRepayment";
			this->lblRepayment->Size = System::Drawing::Size(61, 13);
			this->lblRepayment->TabIndex = 13;
			this->lblRepayment->Text = L"Repayment";
			// 
			// lblOption
			// 
			this->lblOption->AutoSize = true;
			this->lblOption->Location = System::Drawing::Point(268, 366);
			this->lblOption->Name = L"lblOption";
			this->lblOption->Size = System::Drawing::Size(82, 13);
			this->lblOption->TabIndex = 12;
			this->lblOption->Text = L"Payment Option";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Location = System::Drawing::Point(305, 327);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(45, 13);
			this->lblAddress->TabIndex = 11;
			this->lblAddress->Text = L"Address";
			// 
			// txtOverdraftLimit
			// 
			this->txtOverdraftLimit->Location = System::Drawing::Point(112, 476);
			this->txtOverdraftLimit->Name = L"txtOverdraftLimit";
			this->txtOverdraftLimit->Size = System::Drawing::Size(101, 20);
			this->txtOverdraftLimit->TabIndex = 10;
			// 
			// txtBalance
			// 
			this->txtBalance->Location = System::Drawing::Point(112, 438);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->Size = System::Drawing::Size(101, 20);
			this->txtBalance->TabIndex = 9;
			// 
			// txtInterestRate
			// 
			this->txtInterestRate->Location = System::Drawing::Point(112, 400);
			this->txtInterestRate->Name = L"txtInterestRate";
			this->txtInterestRate->Size = System::Drawing::Size(68, 20);
			this->txtInterestRate->TabIndex = 8;
			// 
			// txtAccountName
			// 
			this->txtAccountName->Location = System::Drawing::Point(112, 363);
			this->txtAccountName->Name = L"txtAccountName";
			this->txtAccountName->Size = System::Drawing::Size(150, 20);
			this->txtAccountName->TabIndex = 7;
			// 
			// txtAccountId
			// 
			this->txtAccountId->Location = System::Drawing::Point(112, 324);
			this->txtAccountId->Name = L"txtAccountId";
			this->txtAccountId->Size = System::Drawing::Size(150, 20);
			this->txtAccountId->TabIndex = 6;
			// 
			// lblOverdraftLimit
			// 
			this->lblOverdraftLimit->AutoSize = true;
			this->lblOverdraftLimit->Location = System::Drawing::Point(31, 479);
			this->lblOverdraftLimit->Name = L"lblOverdraftLimit";
			this->lblOverdraftLimit->Size = System::Drawing::Size(75, 13);
			this->lblOverdraftLimit->TabIndex = 5;
			this->lblOverdraftLimit->Text = L"Overdraft Limit";
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Location = System::Drawing::Point(60, 441);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(46, 13);
			this->lblBalance->TabIndex = 4;
			this->lblBalance->Text = L"Balance";
			// 
			// lblInterestRate
			// 
			this->lblInterestRate->AutoSize = true;
			this->lblInterestRate->Location = System::Drawing::Point(32, 403);
			this->lblInterestRate->Name = L"lblInterestRate";
			this->lblInterestRate->Size = System::Drawing::Size(74, 13);
			this->lblInterestRate->TabIndex = 3;
			this->lblInterestRate->Text = L"Intereset Rate";
			// 
			// lblAccountName
			// 
			this->lblAccountName->AutoSize = true;
			this->lblAccountName->Location = System::Drawing::Point(28, 365);
			this->lblAccountName->Name = L"lblAccountName";
			this->lblAccountName->Size = System::Drawing::Size(78, 13);
			this->lblAccountName->TabIndex = 2;
			this->lblAccountName->Text = L"Account Name";
			// 
			// lblAccountID
			// 
			this->lblAccountID->AutoSize = true;
			this->lblAccountID->Location = System::Drawing::Point(45, 327);
			this->lblAccountID->Name = L"lblAccountID";
			this->lblAccountID->Size = System::Drawing::Size(61, 13);
			this->lblAccountID->TabIndex = 1;
			this->lblAccountID->Text = L"Account ID";
			// 
			// pnlCustomerAccounts
			// 
			this->pnlCustomerAccounts->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlCustomerAccounts->Location = System::Drawing::Point(3, 3);
			this->pnlCustomerAccounts->Name = L"pnlCustomerAccounts";
			this->pnlCustomerAccounts->Size = System::Drawing::Size(594, 787);
			this->pnlCustomerAccounts->TabIndex = 0;
			this->pnlCustomerAccounts->lbSummary->SelectedIndexChanged += gcnew
				System::EventHandler(this, &Customer_Form::accountSelectionChanged);
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 840);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->panel1);
			this->Name = L"Customer_Form";
			this->Text = L"Ezy Bank: Customer Portal";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Customer_Form::Customer_Form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Customer_Form::Customer_Form_Load);
			this->panel1->ResumeLayout(false);
			this->tabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
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
		this->pnlCustomerDetails->txtCustomerName->Text =  DotNetUtils::StdStringToSystemString(_customer->getName());
		this->pnlCustomerDetails->txtCustomerAddress->Text =  DotNetUtils::StdStringToSystemString(_customer->getAddress());
		this->pnlCustomerDetails->txtCustomerPhone->Text =  DotNetUtils::StdStringToSystemString(_customer->getPhoneNumber());

		// intiialise accounts
		/*std::string str; System::String^ temp;
		set<int> accountIds = _customer->getAccounts();
		set<int>::iterator sit;
		for (sit = accountIds.begin(); sit != accountIds.end(); sit++)
		{
			Account* ap = AccountServices::instance()->getAccount(*sit);
			str = ap->getSummary();
			temp = gcnew String(str.c_str());
			this->pnlCustomerAccounts->lbSummary->Items->Add(temp);
		}*/

	}

	// update details event
	System::Void btnUpdateDetails_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		_customer->setName(DotNetUtils::SystemStringToStdString(this->pnlCustomerDetails->txtCustomerName->Text));
		_customer->setAddress(DotNetUtils::SystemStringToStdString(this->pnlCustomerDetails->txtCustomerAddress->Text));
		_customer->setPhoneNumber(DotNetUtils::SystemStringToStdString(this->pnlCustomerDetails->txtCustomerPhone->Text));
		MessageBox::Show(this, "Details successfully updated!");
	}

	// account changed event
	System::Void accountSelectionChanged(System::Object^  sender, System::EventArgs^  e)
	{
		// get account id
		int index = this->pnlCustomerAccounts->lbSummary->SelectedIndex;
		std::string line = DotNetUtils::SystemStringToStdString(this->pnlCustomerAccounts->lbSummary->Items[index]->ToString());
		vector<std::string> split = StringUtils::splitString(line, ' ');
		int accId = TypeConv(split[0]);

		// get account and populate details and transactions
		Account* account = AccountServices::instance()->getAccount(accId);
		
		// load details pane
		loadDetailsPane(account);

		// load tranascations pane
		loadTransactionPane(account);

	}

	// ----------------------------------------------------------------------------------------- //
	// Helper / Utiliy methods

	void loadDetailsPane(Account* account)
	{
		SavingsAccount* sa; CreditCardAccount* cca; HomeLoanAccount* hla;

		sa = dynamic_cast<SavingsAccount*>(account);
		cca = dynamic_cast<CreditCardAccount*>(account);
		hla = dynamic_cast<HomeLoanAccount*>(account);

		// load common fields
		this->txtAccountId->Text = account->getAccountId().ToString();
		this->txtAccountName->Text = DotNetUtils::StdStringToSystemString(account->getAccountName());
		this->txtInterestRate->Text = account->getInterestRate().ToString();
		this->txtBalance->Text = account->getBalance().ToString();

		// customise depending on account
		if (sa)
		{
			loadSavingsDetails(sa);
		}
		else if (cca)
		{
			loadCreditCardDetails(cca);
		}
		else if (hla)
		{
			loadHomeLoanDetails(hla);
		}
	}

	void loadTransactionPane(Account* account)
	{
		// clear existing
		this->pnlCustomerAccounts->lbTransactionHistory->Items->Clear();
		
		/*TransactionServices* ts = TransactionServices::instance();
		Transaction* t;
		set<int> transIds = account->getTransactions();
		set<int>::iterator sit;
		for (sit = transIds.begin(); sit != transIds.end(); ++sit)
		{
			t = ts->getTransaction(*sit);
			this->pnlCustomerAccounts->lbTransactionHistory->Items->
				Add(DotNetUtils::StdStringToSystemString(t->getSummary()));
		}*/
	}

	void loadSavingsDetails(SavingsAccount* sa)
	{
		hideNonBaseDetailFields();		
	}

	void loadCreditCardDetails(CreditCardAccount* cca)
	{
		hideNonBaseDetailFields();
		this->lblOverdraftLimit->Visible = true;
		this->txtOverdraftLimit->Visible = true;
		this->txtOverdraftLimit->Text = cca->getOverdraftLimit().ToString();
	}

	void loadHomeLoanDetails(HomeLoanAccount* hla)
	{
		showAllDetailFields();
		this->lblOverdraftLimit->Visible = false;
		this->txtOverdraftLimit->Visible = false;
		this->txtAddress->Text = DotNetUtils::StdStringToSystemString(hla->getAddress());
		this->txtMinRepayment->Text = hla->getMinRepayment().ToString();

		std::string str = AccountServices::repaymentOptionToString(hla->getRepaymentOption());		
		this->txtPaymentOption->Text = DotNetUtils::StdStringToSystemString(str);
	}

	void hideNonBaseDetailFields()
	{
		// make sure other fields are hidden
		this->lblOverdraftLimit->Visible = false;
		this->txtOverdraftLimit->Visible = false;
		this->lblAddress->Visible = false;
		this->txtAddress->Visible = false;
		this->lblOption->Visible = false;
		this->txtPaymentOption->Visible = false;
		this->lblRepayment->Visible = false;
		this->txtMinRepayment->Visible = false;
	}

	void showAllDetailFields()
	{
		// make sure other fields are hidden
		this->lblOverdraftLimit->Visible = true;
		this->txtOverdraftLimit->Visible = true;
		this->lblAddress->Visible = true;
		this->txtAddress->Visible = true;
		this->lblOption->Visible = true;
		this->txtPaymentOption->Visible = true;
		this->lblRepayment->Visible = true;
		this->txtMinRepayment->Visible = true;
	}

 
};
}
