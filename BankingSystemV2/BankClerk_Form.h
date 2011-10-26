#pragma once

#include "CPasswordChange.h"

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
		BankClerk_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
































	private: System::Windows::Forms::Panel^  panel_AdjustInteresttRate;
	private: System::Windows::Forms::Panel^  panel_CustomerAcc;














	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label_Password_;
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
private: System::Windows::Forms::TabControl^  tabControl;
private: System::Windows::Forms::TabPage^  tabPage_Customer;
private: System::Windows::Forms::TabPage^  tabPage_SetInterest;
private: System::Windows::Forms::TabPage^  tabPage_Admin;









	protected: 

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label_Password_ = (gcnew System::Windows::Forms::Label());
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
			this->button_CreateAccount = (gcnew System::Windows::Forms::Button());
			this->label_CSAccountName = (gcnew System::Windows::Forms::Label());
			this->textBox_CSAccountName = (gcnew System::Windows::Forms::TextBox());
			this->tabPage_CreateCredit = (gcnew System::Windows::Forms::TabPage());
			this->button_CCCreateAccount = (gcnew System::Windows::Forms::Button());
			this->label_CCOverdraft = (gcnew System::Windows::Forms::Label());
			this->textBox_CCOverdraft = (gcnew System::Windows::Forms::TextBox());
			this->label_CCAccountName = (gcnew System::Windows::Forms::Label());
			this->textBox_CCAccountName = (gcnew System::Windows::Forms::TextBox());
			this->tabPage_CreateHomeLoan = (gcnew System::Windows::Forms::TabPage());
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
			this->passwordChange1 = (gcnew BankingSystemV2::CPasswordChange());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Customer = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_SetInterest = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_Admin = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1->SuspendLayout();
			this->panel_AdjustInteresttRate->SuspendLayout();
			this->panel_CustomerAcc->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl_BCCustomer->SuspendLayout();
			this->tabPage_Details->SuspendLayout();
			this->tabPage_CreateSavings->SuspendLayout();
			this->tabPage_CreateCredit->SuspendLayout();
			this->tabPage_CreateHomeLoan->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->tabPage_Customer->SuspendLayout();
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
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &BankClerk_Form::menuStrip1_ItemClicked);
			// 
			// ToolStripMenuItem_logOut
			// 
			this->ToolStripMenuItem_logOut->Name = L"ToolStripMenuItem_logOut";
			this->ToolStripMenuItem_logOut->Size = System::Drawing::Size(62, 20);
			this->ToolStripMenuItem_logOut->Text = L"Log Out";
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
			this->button_SetRates->Click += gcnew System::EventHandler(this, &BankClerk_Form::button8_Click);
			// 
			// textBox_HomeLoanRate
			// 
			this->textBox_HomeLoanRate->Location = System::Drawing::Point(108, 116);
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
			this->textBox_CreditRate->Location = System::Drawing::Point(108, 90);
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
			this->panel_CustomerAcc->Controls->Add(this->tabControl);
			this->panel_CustomerAcc->Location = System::Drawing::Point(0, 24);
			this->panel_CustomerAcc->Name = L"panel_CustomerAcc";
			this->panel_CustomerAcc->Size = System::Drawing::Size(634, 379);
			this->panel_CustomerAcc->TabIndex = 3;
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
			this->splitContainer1->Panel1->Controls->Add(this->label_Password_);
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
			// label_Password_
			// 
			this->label_Password_->AutoSize = true;
			this->label_Password_->Location = System::Drawing::Point(14, 248);
			this->label_Password_->Name = L"label_Password_";
			this->label_Password_->Size = System::Drawing::Size(81, 13);
			this->label_Password_->TabIndex = 5;
			this->label_Password_->Text = L"New Password:";
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
			// 
			// button_CustomerSearch
			// 
			this->button_CustomerSearch->Location = System::Drawing::Point(121, 47);
			this->button_CustomerSearch->Name = L"button_CustomerSearch";
			this->button_CustomerSearch->Size = System::Drawing::Size(75, 23);
			this->button_CustomerSearch->TabIndex = 2;
			this->button_CustomerSearch->Text = L"Search";
			this->button_CustomerSearch->UseVisualStyleBackColor = true;
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
			// 
			// button_AccountCancel
			// 
			this->button_AccountCancel->Location = System::Drawing::Point(62, 273);
			this->button_AccountCancel->Name = L"button_AccountCancel";
			this->button_AccountCancel->Size = System::Drawing::Size(109, 23);
			this->button_AccountCancel->TabIndex = 11;
			this->button_AccountCancel->Text = L"Cancel Account";
			this->button_AccountCancel->UseVisualStyleBackColor = true;
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
			// button_CreateAccount
			// 
			this->button_CreateAccount->Location = System::Drawing::Point(208, 51);
			this->button_CreateAccount->Name = L"button_CreateAccount";
			this->button_CreateAccount->Size = System::Drawing::Size(99, 23);
			this->button_CreateAccount->TabIndex = 2;
			this->button_CreateAccount->Text = L"Create Account";
			this->button_CreateAccount->UseVisualStyleBackColor = true;
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
			// button_CCCreateAccount
			// 
			this->button_CCCreateAccount->Location = System::Drawing::Point(193, 87);
			this->button_CCCreateAccount->Name = L"button_CCCreateAccount";
			this->button_CCCreateAccount->Size = System::Drawing::Size(115, 23);
			this->button_CCCreateAccount->TabIndex = 4;
			this->button_CCCreateAccount->Text = L"Create Account";
			this->button_CCCreateAccount->UseVisualStyleBackColor = true;
			// 
			// label_CCOverdraft
			// 
			this->label_CCOverdraft->AutoSize = true;
			this->label_CCOverdraft->Location = System::Drawing::Point(12, 52);
			this->label_CCOverdraft->Name = L"label_CCOverdraft";
			this->label_CCOverdraft->Size = System::Drawing::Size(78, 13);
			this->label_CCOverdraft->TabIndex = 3;
			this->label_CCOverdraft->Text = L"Overdraft Limit:";
			// 
			// textBox_CCOverdraft
			// 
			this->textBox_CCOverdraft->Location = System::Drawing::Point(96, 51);
			this->textBox_CCOverdraft->Name = L"textBox_CCOverdraft";
			this->textBox_CCOverdraft->Size = System::Drawing::Size(100, 20);
			this->textBox_CCOverdraft->TabIndex = 2;
			// 
			// label_CCAccountName
			// 
			this->label_CCAccountName->AutoSize = true;
			this->label_CCAccountName->Location = System::Drawing::Point(9, 22);
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
			this->tabPage_CreateHomeLoan->Click += gcnew System::EventHandler(this, &BankClerk_Form::tabPage7_Click);
			// 
			// button_CHLCreateAccount
			// 
			this->button_CHLCreateAccount->Location = System::Drawing::Point(197, 271);
			this->button_CHLCreateAccount->Name = L"button_CHLCreateAccount";
			this->button_CHLCreateAccount->Size = System::Drawing::Size(109, 23);
			this->button_CHLCreateAccount->TabIndex = 10;
			this->button_CHLCreateAccount->Text = L"Create Account";
			this->button_CHLCreateAccount->UseVisualStyleBackColor = true;
			// 
			// label_MinRepayment
			// 
			this->label_MinRepayment->AutoSize = true;
			this->label_MinRepayment->Location = System::Drawing::Point(2, 224);
			this->label_MinRepayment->Name = L"label_MinRepayment";
			this->label_MinRepayment->Size = System::Drawing::Size(84, 13);
			this->label_MinRepayment->TabIndex = 9;
			this->label_MinRepayment->Text = L"Min Repayment:";
			this->label_MinRepayment->Click += gcnew System::EventHandler(this, &BankClerk_Form::label15_Click);
			// 
			// textBox_MinRepayment
			// 
			this->textBox_MinRepayment->Location = System::Drawing::Point(86, 221);
			this->textBox_MinRepayment->Name = L"textBox_MinRepayment";
			this->textBox_MinRepayment->Size = System::Drawing::Size(100, 20);
			this->textBox_MinRepayment->TabIndex = 8;
			this->textBox_MinRepayment->TextChanged += gcnew System::EventHandler(this, &BankClerk_Form::textBox12_TextChanged);
			// 
			// label_CHLAmount
			// 
			this->label_CHLAmount->AutoSize = true;
			this->label_CHLAmount->Location = System::Drawing::Point(9, 192);
			this->label_CHLAmount->Name = L"label_CHLAmount";
			this->label_CHLAmount->Size = System::Drawing::Size(73, 13);
			this->label_CHLAmount->TabIndex = 7;
			this->label_CHLAmount->Text = L"Loan Amount:";
			this->label_CHLAmount->Click += gcnew System::EventHandler(this, &BankClerk_Form::label14_Click);
			// 
			// textBox_CHLAmount
			// 
			this->textBox_CHLAmount->Location = System::Drawing::Point(86, 192);
			this->textBox_CHLAmount->Name = L"textBox_CHLAmount";
			this->textBox_CHLAmount->Size = System::Drawing::Size(100, 20);
			this->textBox_CHLAmount->TabIndex = 6;
			this->textBox_CHLAmount->TextChanged += gcnew System::EventHandler(this, &BankClerk_Form::textBox11_TextChanged);
			// 
			// label_RepaymentOption
			// 
			this->label_RepaymentOption->AutoSize = true;
			this->label_RepaymentOption->Location = System::Drawing::Point(209, 170);
			this->label_RepaymentOption->Name = L"label_RepaymentOption";
			this->label_RepaymentOption->Size = System::Drawing::Size(98, 13);
			this->label_RepaymentOption->TabIndex = 5;
			this->label_RepaymentOption->Text = L"Repayment Option:";
			this->label_RepaymentOption->Click += gcnew System::EventHandler(this, &BankClerk_Form::label13_Click);
			// 
			// listBox_RepaymentOption
			// 
			this->listBox_RepaymentOption->FormattingEnabled = true;
			this->listBox_RepaymentOption->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Weekly", L"Fortnightly", L"Monthly"});
			this->listBox_RepaymentOption->Location = System::Drawing::Point(211, 192);
			this->listBox_RepaymentOption->Name = L"listBox_RepaymentOption";
			this->listBox_RepaymentOption->Size = System::Drawing::Size(95, 43);
			this->listBox_RepaymentOption->TabIndex = 4;
			this->listBox_RepaymentOption->SelectedIndexChanged += gcnew System::EventHandler(this, &BankClerk_Form::listBox2_SelectedIndexChanged);
			// 
			// label_PropertyAddress
			// 
			this->label_PropertyAddress->AutoSize = true;
			this->label_PropertyAddress->Location = System::Drawing::Point(-4, 53);
			this->label_PropertyAddress->Name = L"label_PropertyAddress";
			this->label_PropertyAddress->Size = System::Drawing::Size(90, 13);
			this->label_PropertyAddress->TabIndex = 3;
			this->label_PropertyAddress->Text = L"Property Address:";
			// 
			// textBox_PropertyAddress
			// 
			this->textBox_PropertyAddress->Location = System::Drawing::Point(86, 51);
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
			// passwordChange1
			// 
			this->passwordChange1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->passwordChange1->Location = System::Drawing::Point(3, 3);
			this->passwordChange1->Name = L"passwordChange1";
			this->passwordChange1->Size = System::Drawing::Size(620, 347);
			this->passwordChange1->TabIndex = 4;
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPage_Customer);
			this->tabControl->Controls->Add(this->tabPage_SetInterest);
			this->tabControl->Controls->Add(this->tabPage_Admin);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(634, 379);
			this->tabControl->TabIndex = 1;
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
			this->tabControl->ResumeLayout(false);
			this->tabPage_Customer->ResumeLayout(false);
			this->tabPage_SetInterest->ResumeLayout(false);
			this->tabPage_Admin->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }

private: System::Void createSavingsAccToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //this->panel1->Visible = true;
			 //this->panel1->BringToFront();
		 }
private: System::Void createCreditAccToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //this->Create_Credit_Acc_Panel->Visible = true;
			 //this->Create_Credit_Acc_Panel->BringToFront();
		 }
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void createAccountToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			//this->tabControl1->BringToFront()


		 }
private: System::Void cReditToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			//this->tabControl1->BringToFront();
			//tabControl1->SelectedIndex = 0;

		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void tabPage7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void setRatesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void customerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->panel_CustomerAcc->Visible = true;
			 this->panel_CustomerAcc->BringToFront();
		 }
private: System::Void changePasswordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


		 }
};
}