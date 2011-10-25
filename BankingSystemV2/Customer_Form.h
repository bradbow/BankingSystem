#pragma once
#include "CSavingsView.h"
#include "CCreditView.h"
#include "CHomeLoanView.h"
#include "CDeposit.h"
#include "CWithdraw.h"
#include "CTransfer.h"
#include "PasswordChange.h"

namespace INB305_BankingForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Customer_Form
	/// </summary>
	public ref class Customer_Form : public System::Windows::Forms::Form
	{
	public:
		Customer_Form(void)
		{	

			InitializeComponent();
			cDeposit1->Dock = System::Windows::Forms::DockStyle::Fill;
			cWithdraw1->Dock = System::Windows::Forms::DockStyle::Fill;
			cSavingsView1->Dock = System::Windows::Forms::DockStyle::Fill;
			cHomeLoanView1->Dock = System::Windows::Forms::DockStyle::Fill;
			cCreditView1->Dock = System::Windows::Forms::DockStyle::Fill;
			cTransfer1->Dock = System::Windows::Forms::DockStyle::Fill;
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;





	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::Panel^  Customer_Accounts_panel;


	private: System::Windows::Forms::ToolStripMenuItem^  adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  securityToolStripMenuItem;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  AvailableActions_label;
	private: System::Windows::Forms::ListBox^  AvailableActions_listBox;


	private: System::Windows::Forms::Label^  SelectAccount_label;
	private: System::Windows::Forms::ListBox^  SelectAccount_listBox;













































































	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label_Phone;

private: System::Windows::Forms::TextBox^  textBox_Phone;
private: System::Windows::Forms::TextBox^  textBox_Address;


private: System::Windows::Forms::TextBox^  textBox_Name;

	private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label_Name;

	private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Button^  button_CreateAccount;

private: System::Windows::Forms::Label^  label_AccountName;
private: System::Windows::Forms::TextBox^  textBox_AccountName;















private: INB305_BankingForms::CSavingsView^  cSavingsView1;



private: System::Windows::Forms::ToolStripMenuItem^  accountsToolStripMenuItem;
private: INB305_BankingForms::PasswordChange^  passwordChange1;
private: INB305_BankingForms::CWithdraw^  cWithdraw1;
private: INB305_BankingForms::CDeposit^  cDeposit1;
private: INB305_BankingForms::CHomeLoanView^  cHomeLoanView1;
private: INB305_BankingForms::CCreditView^  cCreditView1;
private: INB305_BankingForms::CTransfer^  cTransfer1;
private: INB305_BankingForms::CTransactions^  cTransactions1;





























































































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
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->accountsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->securityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Customer_Accounts_panel = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->AvailableActions_label = (gcnew System::Windows::Forms::Label());
			this->AvailableActions_listBox = (gcnew System::Windows::Forms::ListBox());
			this->SelectAccount_label = (gcnew System::Windows::Forms::Label());
			this->SelectAccount_listBox = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label_Phone = (gcnew System::Windows::Forms::Label());
			this->textBox_Phone = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Address = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label_Name = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button_CreateAccount = (gcnew System::Windows::Forms::Button());
			this->label_AccountName = (gcnew System::Windows::Forms::Label());
			this->textBox_AccountName = (gcnew System::Windows::Forms::TextBox());
			this->cWithdraw1 = (gcnew INB305_BankingForms::CWithdraw());
			this->cHomeLoanView1 = (gcnew INB305_BankingForms::CHomeLoanView());
			this->cDeposit1 = (gcnew INB305_BankingForms::CDeposit());
			this->cCreditView1 = (gcnew INB305_BankingForms::CCreditView());
			this->cSavingsView1 = (gcnew INB305_BankingForms::CSavingsView());
			this->cTransfer1 = (gcnew INB305_BankingForms::CTransfer());
			this->passwordChange1 = (gcnew INB305_BankingForms::PasswordChange());
			this->cTransactions1 = (gcnew INB305_BankingForms::CTransactions());
			this->menuStrip1->SuspendLayout();
			this->Customer_Accounts_panel->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->logOutToolStripMenuItem, 
				this->accountsToolStripMenuItem, this->adminToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->logOutToolStripMenuItem->Text = L"Log Out";
			// 
			// accountsToolStripMenuItem
			// 
			this->accountsToolStripMenuItem->Name = L"accountsToolStripMenuItem";
			this->accountsToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->accountsToolStripMenuItem->Text = L"Accounts";
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->securityToolStripMenuItem});
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->adminToolStripMenuItem->Text = L"Admin";
			// 
			// securityToolStripMenuItem
			// 
			this->securityToolStripMenuItem->Name = L"securityToolStripMenuItem";
			this->securityToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->securityToolStripMenuItem->Text = L"Security";
			// 
			// Customer_Accounts_panel
			// 
			this->Customer_Accounts_panel->Controls->Add(this->tabControl1);
			this->Customer_Accounts_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Customer_Accounts_panel->Location = System::Drawing::Point(0, 24);
			this->Customer_Accounts_panel->Name = L"Customer_Accounts_panel";
			this->Customer_Accounts_panel->Size = System::Drawing::Size(584, 338);
			this->Customer_Accounts_panel->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(584, 338);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(576, 312);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Select";
			this->tabPage1->Click += gcnew System::EventHandler(this, &Customer_Form::tabPage1_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->AvailableActions_label);
			this->splitContainer1->Panel1->Controls->Add(this->AvailableActions_listBox);
			this->splitContainer1->Panel1->Controls->Add(this->SelectAccount_label);
			this->splitContainer1->Panel1->Controls->Add(this->SelectAccount_listBox);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->cCreditView1);
			this->splitContainer1->Panel2->Controls->Add(this->cSavingsView1);
			this->splitContainer1->Panel2->Controls->Add(this->cTransfer1);
			this->splitContainer1->Panel2->Controls->Add(this->cTransactions1);
			this->splitContainer1->Panel2->Controls->Add(this->cWithdraw1);
			this->splitContainer1->Panel2->Controls->Add(this->cHomeLoanView1);
			this->splitContainer1->Panel2->Controls->Add(this->cDeposit1);
			this->splitContainer1->Size = System::Drawing::Size(570, 306);
			this->splitContainer1->SplitterDistance = 143;
			this->splitContainer1->TabIndex = 0;
			// 
			// AvailableActions_label
			// 
			this->AvailableActions_label->AutoSize = true;
			this->AvailableActions_label->Location = System::Drawing::Point(360, 14);
			this->AvailableActions_label->Name = L"AvailableActions_label";
			this->AvailableActions_label->Size = System::Drawing::Size(88, 13);
			this->AvailableActions_label->TabIndex = 4;
			this->AvailableActions_label->Text = L"Available Actions";
			// 
			// AvailableActions_listBox
			// 
			this->AvailableActions_listBox->FormattingEnabled = true;
			this->AvailableActions_listBox->Location = System::Drawing::Point(363, 30);
			this->AvailableActions_listBox->Name = L"AvailableActions_listBox";
			this->AvailableActions_listBox->Size = System::Drawing::Size(120, 95);
			this->AvailableActions_listBox->TabIndex = 3;
			// 
			// SelectAccount_label
			// 
			this->SelectAccount_label->AutoSize = true;
			this->SelectAccount_label->Location = System::Drawing::Point(5, 14);
			this->SelectAccount_label->Name = L"SelectAccount_label";
			this->SelectAccount_label->Size = System::Drawing::Size(83, 13);
			this->SelectAccount_label->TabIndex = 2;
			this->SelectAccount_label->Text = L"Select Account:";
			// 
			// SelectAccount_listBox
			// 
			this->SelectAccount_listBox->FormattingEnabled = true;
			this->SelectAccount_listBox->Location = System::Drawing::Point(8, 30);
			this->SelectAccount_listBox->Name = L"SelectAccount_listBox";
			this->SelectAccount_listBox->Size = System::Drawing::Size(336, 95);
			this->SelectAccount_listBox->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label_Phone);
			this->tabPage2->Controls->Add(this->textBox_Phone);
			this->tabPage2->Controls->Add(this->textBox_Address);
			this->tabPage2->Controls->Add(this->textBox_Name);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label_Name);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(576, 312);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Details";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(258, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Update Details";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label_Phone
			// 
			this->label_Phone->AutoSize = true;
			this->label_Phone->Location = System::Drawing::Point(38, 66);
			this->label_Phone->Name = L"label_Phone";
			this->label_Phone->Size = System::Drawing::Size(41, 13);
			this->label_Phone->TabIndex = 5;
			this->label_Phone->Text = L"Phone:";
			// 
			// textBox_Phone
			// 
			this->textBox_Phone->Location = System::Drawing::Point(85, 66);
			this->textBox_Phone->Name = L"textBox_Phone";
			this->textBox_Phone->Size = System::Drawing::Size(175, 20);
			this->textBox_Phone->TabIndex = 4;
			// 
			// textBox_Address
			// 
			this->textBox_Address->Location = System::Drawing::Point(85, 102);
			this->textBox_Address->Name = L"textBox_Address";
			this->textBox_Address->Size = System::Drawing::Size(282, 20);
			this->textBox_Address->TabIndex = 2;
			// 
			// textBox_Name
			// 
			this->textBox_Name->Location = System::Drawing::Point(85, 30);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(282, 20);
			this->textBox_Name->TabIndex = 0;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(38, 102);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(48, 13);
			this->label27->TabIndex = 3;
			this->label27->Text = L"Address:";
			// 
			// label_Name
			// 
			this->label_Name->AutoSize = true;
			this->label_Name->Location = System::Drawing::Point(41, 33);
			this->label_Name->Name = L"label_Name";
			this->label_Name->Size = System::Drawing::Size(38, 13);
			this->label_Name->TabIndex = 1;
			this->label_Name->Text = L"Name:";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Controls->Add(this->button_CreateAccount);
			this->tabPage3->Controls->Add(this->label_AccountName);
			this->tabPage3->Controls->Add(this->textBox_AccountName);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(576, 312);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Open Savings";
			// 
			// button_CreateAccount
			// 
			this->button_CreateAccount->Location = System::Drawing::Point(206, 64);
			this->button_CreateAccount->Name = L"button_CreateAccount";
			this->button_CreateAccount->Size = System::Drawing::Size(108, 23);
			this->button_CreateAccount->TabIndex = 2;
			this->button_CreateAccount->Text = L"Create Account";
			this->button_CreateAccount->UseVisualStyleBackColor = true;
			// 
			// label_AccountName
			// 
			this->label_AccountName->AutoSize = true;
			this->label_AccountName->Location = System::Drawing::Point(8, 32);
			this->label_AccountName->Name = L"label_AccountName";
			this->label_AccountName->Size = System::Drawing::Size(81, 13);
			this->label_AccountName->TabIndex = 1;
			this->label_AccountName->Text = L"Account Name:";
			// 
			// textBox_AccountName
			// 
			this->textBox_AccountName->Location = System::Drawing::Point(89, 30);
			this->textBox_AccountName->Name = L"textBox_AccountName";
			this->textBox_AccountName->Size = System::Drawing::Size(225, 20);
			this->textBox_AccountName->TabIndex = 0;
			// 
			// cWithdraw1
			// 
			this->cWithdraw1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cWithdraw1->Location = System::Drawing::Point(0, 0);
			this->cWithdraw1->Name = L"cWithdraw1";
			this->cWithdraw1->Size = System::Drawing::Size(570, 159);
			this->cWithdraw1->TabIndex = 4;
			// 
			// cHomeLoanView1
			// 
			this->cHomeLoanView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cHomeLoanView1->Location = System::Drawing::Point(0, 0);
			this->cHomeLoanView1->Name = L"cHomeLoanView1";
			this->cHomeLoanView1->Size = System::Drawing::Size(570, 159);
			this->cHomeLoanView1->TabIndex = 2;
			// 
			// cDeposit1
			// 
			this->cDeposit1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cDeposit1->Location = System::Drawing::Point(0, 0);
			this->cDeposit1->Name = L"cDeposit1";
			this->cDeposit1->Size = System::Drawing::Size(570, 159);
			this->cDeposit1->TabIndex = 3;
			// 
			// cCreditView1
			// 
			this->cCreditView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cCreditView1->Location = System::Drawing::Point(0, 0);
			this->cCreditView1->Name = L"cCreditView1";
			this->cCreditView1->Size = System::Drawing::Size(570, 159);
			this->cCreditView1->TabIndex = 1;
			// 
			// cSavingsView1
			// 
			this->cSavingsView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cSavingsView1->Location = System::Drawing::Point(0, 0);
			this->cSavingsView1->Name = L"cSavingsView1";
			this->cSavingsView1->Size = System::Drawing::Size(570, 159);
			this->cSavingsView1->TabIndex = 0;
			this->cSavingsView1->Load += gcnew System::EventHandler(this, &Customer_Form::cSavingsView1_Load);
			// 
			// cTransfer1
			// 
			this->cTransfer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cTransfer1->Location = System::Drawing::Point(0, 0);
			this->cTransfer1->Name = L"cTransfer1";
			this->cTransfer1->Size = System::Drawing::Size(570, 159);
			this->cTransfer1->TabIndex = 5;
			// 
			// passwordChange1
			// 
			this->passwordChange1->Location = System::Drawing::Point(0, 24);
			this->passwordChange1->Name = L"passwordChange1";
			this->passwordChange1->Size = System::Drawing::Size(584, 319);
			this->passwordChange1->TabIndex = 2;
			// 
			// cTransactions1
			// 
			this->cTransactions1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cTransactions1->Location = System::Drawing::Point(0, 0);
			this->cTransactions1->Name = L"cTransactions1";
			this->cTransactions1->Size = System::Drawing::Size(570, 159);
			this->cTransactions1->TabIndex = 0;
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 362);
			this->Controls->Add(this->Customer_Accounts_panel);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->passwordChange1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Customer_Form";
			this->Text = L"Customer_Form";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Customer_Accounts_panel->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void CreditView_panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void TransactionHistory_panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }

private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label32_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cSavingsView1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
