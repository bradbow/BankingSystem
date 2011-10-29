#pragma once
#include "CCustomerAccounts.h"
#include "CCustomerDetails.h"
#include "Session.h"
#include "Utils.h"
#include "ApplicationController.h"
#include "AccountServices.h"
#include "CreateSavingsAccountForm.h"
#include "SingleAccountTransactionForm.h"
#include "MultipleAccountTransactionForm.h"
#include <string>
#include <list>
#include <sstream>

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
			_as = AccountServices::instance();
			_ts = TransactionServices::instance();
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
		AccountServices* _as;
		TransactionServices* _ts;
		Account* _currentAccount;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnLogout;
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: BankingSystemV2::CCustomerDetails^  pnlCustomerDetails;
	private: BankingSystemV2::CCustomerAccounts^  pnlCustomerAccounts;

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
			this->tabControl->Size = System::Drawing::Size(608, 630);
			this->tabControl->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pnlCustomerDetails);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(600, 604);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Your Details";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pnlCustomerDetails
			// 
			this->pnlCustomerDetails->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlCustomerDetails->Location = System::Drawing::Point(3, 3);
			this->pnlCustomerDetails->Name = L"pnlCustomerDetails";
			this->pnlCustomerDetails->Size = System::Drawing::Size(594, 598);
			this->pnlCustomerDetails->TabIndex = 0;
			this->pnlCustomerDetails->btnResetPassword->Click
				+= gcnew System::EventHandler(this, &Customer_Form::resetPassword);
			this->pnlCustomerDetails->btnUpdateDetails->Click
				+= gcnew System::EventHandler(this, &Customer_Form::updateDetails);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pnlCustomerAccounts);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(600, 604);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Your Accounts";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pnlCustomerAccounts
			// 
			this->pnlCustomerAccounts->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlCustomerAccounts->Location = System::Drawing::Point(3, 3);
			this->pnlCustomerAccounts->Name = L"pnlCustomerAccounts";
			this->pnlCustomerAccounts->Size = System::Drawing::Size(594, 598);
			this->pnlCustomerAccounts->TabIndex = 0;
			this->pnlCustomerAccounts->btnNewAccount->Click 
				+= gcnew System::EventHandler(this, &Customer_Form::createNewAccount);
			this->pnlCustomerAccounts->lbSummary->SelectedIndexChanged 
				+= gcnew System::EventHandler(this, &Customer_Form::accountSelectionChanged);
			this->pnlCustomerAccounts->btnDeposit->Click 
				+= gcnew System::EventHandler(this, &Customer_Form::launchDeposit);
			this->pnlCustomerAccounts->btnWithdraw->Click 
				+= gcnew System::EventHandler(this, &Customer_Form::launchWithdrawal);
			this->pnlCustomerAccounts->btnTransfer->Click 
				+= gcnew System::EventHandler(this, &Customer_Form::launchTransfer);
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 651);
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

		loadAccounts();

		// diable buttons
		disallowTransactions(NULL);

	}

	// update details event
	System::Void updateDetails(System::Object^  sender, System::EventArgs^  e) 
	{
		_customer->setAddress(DotNetUtils::SystemStringToStdString(this->pnlCustomerDetails->txtCustomerAddress->Text));
		_customer->setPhoneNumber(DotNetUtils::SystemStringToStdString(this->pnlCustomerDetails->txtCustomerPhone->Text));
		MessageBox::Show(this, "Details successfully updated!");
	}

	// create new account event
	System::Void createNewAccount(System::Object^  sender, System::EventArgs^  e) 
	{
		CreateSavingsAccountForm^ f = gcnew CreateSavingsAccountForm(_customer);
		f->ShowDialog(this);
		updateAccountsPanel();
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
		_currentAccount = account;

		// load details pane
		loadDetailsPane(account);

		// load tranascations pane
		loadTransactionPane(account);

		// disable / enable transactions
		disallowTransactions(account);

	}

	// reset password event
	System::Void resetPassword(System::Object^  sender, System::EventArgs^  e) 
	{
		System::String^ psword = this->pnlCustomerDetails->txtPassword->Text;
		System::String^ cnfPsword = this->pnlCustomerDetails->txtConfirmPassword->Text;

		// make sure neither are empty string
		if (psword == "" || cnfPsword == "")
		{
			MessageBox::Show(this, "Invalid passwords entered!");
			return;
		}

		// make sure they match
		if (psword != cnfPsword)
		{
			MessageBox::Show(this, "Passwords must match");
			return;
		}

		// update
		std::string stdPsword = DotNetUtils::SystemStringToStdString(psword);
		UserServices::instance()->changePassword(_customer->getUserId(), stdPsword);
		MessageBox::Show(this, "Password successfully updated!");
		this->pnlCustomerDetails->txtPassword->Text = "";
		this->pnlCustomerDetails->txtConfirmPassword->Text = "";

	}

	System::Void launchDeposit(System::Object^  sender, System::EventArgs^  e) 
	{
		
		SingleAccountTransactionForm^ f = gcnew SingleAccountTransactionForm(_currentAccount, SingleAccountTransactionForm::DEPOSIT);
		f->ShowDialog();
		loadTransactionPane(_currentAccount);
		loadDetailsPane(_currentAccount);
	}

	System::Void launchWithdrawal(System::Object^  sender, System::EventArgs^  e) 
	{
		
		SingleAccountTransactionForm^ f = gcnew SingleAccountTransactionForm(_currentAccount, SingleAccountTransactionForm::WITHDRAWAL);
		f->ShowDialog();
		loadTransactionPane(_currentAccount);
		loadDetailsPane(_currentAccount);
	}

	System::Void launchTransfer(System::Object^  sender, System::EventArgs^  e) 
	{
		
		MultipleAccountTransactionForm^ f = gcnew MultipleAccountTransactionForm(_customer);
		f->ShowDialog();
		loadTransactionPane(_currentAccount);
		loadDetailsPane(_currentAccount);
	}

	// ----------------------------------------------------------------------------------------- //
	// Helper / Utiliy methods

	void disallowTransactions(Account* account)
	{
		DebitAccount* dap = dynamic_cast<DebitAccount*>(account);

		if (dap)
		{
			this->pnlCustomerAccounts->btnWithdraw->Enabled = true;
			this->pnlCustomerAccounts->btnDeposit->Enabled = true;
			this->pnlCustomerAccounts->btnTransfer->Enabled = true;
		} 
		else
		{
			this->pnlCustomerAccounts->btnWithdraw->Enabled = false;
		}
	}

	void loadAccounts()
	{
		// clear
		this->pnlCustomerAccounts->lbSummary->Items->Clear();
		
		// intiialise accounts
		std::string str; System::String^ temp;
		list<Account*> accounts = _as->getCustomerAccounts(_customer->getUserId());
		list<Account*>::iterator lit;
		for (lit = accounts.begin(); lit != accounts.end(); lit++)
		{
			str = (*lit)->getSummary();
			temp = gcnew String(str.c_str());
			this->pnlCustomerAccounts->lbSummary->Items->Add(temp);
		}
	}
	
	
	void updateAccountsPanel()
	{
		loadAccounts();
	}

	void loadDetailsPane(Account* account)
	{
		SavingsAccount* sa; CreditCardAccount* cca; HomeLoanAccount* hla;

		sa = dynamic_cast<SavingsAccount*>(account);
		cca = dynamic_cast<CreditCardAccount*>(account);
		hla = dynamic_cast<HomeLoanAccount*>(account);

		// load common fields
		this->pnlCustomerAccounts->txtAccountId->Text = account->getAccountId().ToString();
		this->pnlCustomerAccounts->txtAccountName->Text = DotNetUtils::StdStringToSystemString(account->getAccountName());
		this->pnlCustomerAccounts->txtInterestRate->Text = account->getInterestRate().ToString();
		this->pnlCustomerAccounts->txtBalance->Text = account->getBalance().ToString();

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
		
		list<Transaction*> transactions = 
			_ts->getTransactionsForAccount(account->getAccountId());
		
		list<Transaction*>::iterator lit;
		for (lit = transactions.begin(); lit != transactions.end(); ++lit)
		{
			this->pnlCustomerAccounts->lbTransactionHistory->Items->
				Add(DotNetUtils::StdStringToSystemString((*lit)->getSummary()));
		}
	}

	void loadSavingsDetails(SavingsAccount* sa)
	{
		hideNonBaseDetailFields();		
	}

	void loadCreditCardDetails(CreditCardAccount* cca)
	{
		hideNonBaseDetailFields();
		this->pnlCustomerAccounts->lblOverdraftLimit->Visible = true;
		this->pnlCustomerAccounts->txtOverdraftLimit->Visible = true;
		this->pnlCustomerAccounts->txtOverdraftLimit->Text = cca->getOverdraftLimit().ToString();
	}

	void loadHomeLoanDetails(HomeLoanAccount* hla)
	{
		showAllDetailFields();
		this->pnlCustomerAccounts->lblOverdraftLimit->Visible = false;
		this->pnlCustomerAccounts->txtOverdraftLimit->Visible = false;
		this->pnlCustomerAccounts->txtAddress->Text = DotNetUtils::StdStringToSystemString(hla->getAddress());
		this->pnlCustomerAccounts->txtMinRepayment->Text = hla->getMinRepayment().ToString();

		std::string str = AccountServices::repaymentOptionToString(hla->getRepaymentOption());		
		this->pnlCustomerAccounts->txtPaymentOption->Text = DotNetUtils::StdStringToSystemString(str);
	}

	void hideNonBaseDetailFields()
	{
		// make sure other fields are hidden
		this->pnlCustomerAccounts->lblOverdraftLimit->Visible = false;
		this->pnlCustomerAccounts->txtOverdraftLimit->Visible = false;
		this->pnlCustomerAccounts->lblAddress->Visible = false;
		this->pnlCustomerAccounts->txtAddress->Visible = false;
		this->pnlCustomerAccounts->lblOption->Visible = false;
		this->pnlCustomerAccounts->txtPaymentOption->Visible = false;
		this->pnlCustomerAccounts->lblRepayment->Visible = false;
		this->pnlCustomerAccounts->txtMinRepayment->Visible = false;
	}

	void showAllDetailFields()
	{
		// make sure other fields are hidden
		this->pnlCustomerAccounts->lblOverdraftLimit->Visible = true;
		this->pnlCustomerAccounts->txtOverdraftLimit->Visible = true;
		this->pnlCustomerAccounts->lblAddress->Visible = true;
		this->pnlCustomerAccounts->txtAddress->Visible = true;
		this->pnlCustomerAccounts->lblOption->Visible = true;
		this->pnlCustomerAccounts->txtPaymentOption->Visible = true;
		this->pnlCustomerAccounts->lblRepayment->Visible = true;
		this->pnlCustomerAccounts->txtMinRepayment->Visible = true;
	}


};
}
