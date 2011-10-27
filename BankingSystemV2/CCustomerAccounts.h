#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BankingSystemV2 {

	/// <summary>
	/// Summary for CCustomerAccounts
	/// </summary>
	public ref class CCustomerAccounts : public System::Windows::Forms::UserControl
	{
	public:
		CCustomerAccounts(void)
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
		~CCustomerAccounts()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::GroupBox^  grbxSummary;
	public: System::Windows::Forms::GroupBox^  grbxDetails;
	public: System::Windows::Forms::GroupBox^  grbxTransactions;
	public: System::Windows::Forms::ListBox^  lbSummary;
	public: System::Windows::Forms::Button^  btnTransfer;
	public: System::Windows::Forms::Button^  btnWithdraw;
	public: System::Windows::Forms::Button^  btnDeposit;
	public: System::Windows::Forms::ListBox^  lbTransactionHistory;
	public: System::Windows::Forms::Button^  btnNewAccount;

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
			this->grbxSummary = (gcnew System::Windows::Forms::GroupBox());
			this->grbxDetails = (gcnew System::Windows::Forms::GroupBox());
			this->grbxTransactions = (gcnew System::Windows::Forms::GroupBox());
			this->btnNewAccount = (gcnew System::Windows::Forms::Button());
			this->lbSummary = (gcnew System::Windows::Forms::ListBox());
			this->lbTransactionHistory = (gcnew System::Windows::Forms::ListBox());
			this->btnDeposit = (gcnew System::Windows::Forms::Button());
			this->btnWithdraw = (gcnew System::Windows::Forms::Button());
			this->btnTransfer = (gcnew System::Windows::Forms::Button());
			this->grbxSummary->SuspendLayout();
			this->grbxTransactions->SuspendLayout();
			this->SuspendLayout();
			// 
			// grbxSummary
			// 
			this->grbxSummary->Controls->Add(this->lbSummary);
			this->grbxSummary->Location = System::Drawing::Point(19, 62);
			this->grbxSummary->Name = L"grbxSummary";
			this->grbxSummary->Size = System::Drawing::Size(554, 218);
			this->grbxSummary->TabIndex = 0;
			this->grbxSummary->TabStop = false;
			this->grbxSummary->Text = L"Accounts Summary";
			// 
			// grbxDetails
			// 
			this->grbxDetails->Location = System::Drawing::Point(19, 304);
			this->grbxDetails->Name = L"grbxDetails";
			this->grbxDetails->Size = System::Drawing::Size(554, 218);
			this->grbxDetails->TabIndex = 1;
			this->grbxDetails->TabStop = false;
			this->grbxDetails->Text = L"Details";
			// 
			// grbxTransactions
			// 
			this->grbxTransactions->Controls->Add(this->btnTransfer);
			this->grbxTransactions->Controls->Add(this->btnWithdraw);
			this->grbxTransactions->Controls->Add(this->btnDeposit);
			this->grbxTransactions->Controls->Add(this->lbTransactionHistory);
			this->grbxTransactions->Location = System::Drawing::Point(19, 545);
			this->grbxTransactions->Name = L"grbxTransactions";
			this->grbxTransactions->Size = System::Drawing::Size(554, 218);
			this->grbxTransactions->TabIndex = 2;
			this->grbxTransactions->TabStop = false;
			this->grbxTransactions->Text = L"Transactions";
			// 
			// btnNewAccount
			// 
			this->btnNewAccount->Location = System::Drawing::Point(449, 18);
			this->btnNewAccount->Name = L"btnNewAccount";
			this->btnNewAccount->Size = System::Drawing::Size(124, 23);
			this->btnNewAccount->TabIndex = 3;
			this->btnNewAccount->Text = L"Open New Account ...";
			this->btnNewAccount->UseVisualStyleBackColor = true;
			// 
			// lbSummary
			// 
			this->lbSummary->FormattingEnabled = true;
			this->lbSummary->Location = System::Drawing::Point(20, 33);
			this->lbSummary->Name = L"lbSummary";
			this->lbSummary->Size = System::Drawing::Size(515, 160);
			this->lbSummary->TabIndex = 0;
			// 
			// lbTransactionHistory
			// 
			this->lbTransactionHistory->FormattingEnabled = true;
			this->lbTransactionHistory->Location = System::Drawing::Point(15, 61);
			this->lbTransactionHistory->Name = L"lbTransactionHistory";
			this->lbTransactionHistory->Size = System::Drawing::Size(519, 134);
			this->lbTransactionHistory->TabIndex = 0;
			// 
			// btnDeposit
			// 
			this->btnDeposit->Location = System::Drawing::Point(20, 29);
			this->btnDeposit->Name = L"btnDeposit";
			this->btnDeposit->Size = System::Drawing::Size(75, 23);
			this->btnDeposit->TabIndex = 1;
			this->btnDeposit->Text = L"Deposit";
			this->btnDeposit->UseVisualStyleBackColor = true;
			// 
			// btnWithdraw
			// 
			this->btnWithdraw->Location = System::Drawing::Point(101, 29);
			this->btnWithdraw->Name = L"btnWithdraw";
			this->btnWithdraw->Size = System::Drawing::Size(75, 23);
			this->btnWithdraw->TabIndex = 2;
			this->btnWithdraw->Text = L"Withdraw";
			this->btnWithdraw->UseVisualStyleBackColor = true;
			// 
			// btnTransfer
			// 
			this->btnTransfer->Location = System::Drawing::Point(182, 29);
			this->btnTransfer->Name = L"btnTransfer";
			this->btnTransfer->Size = System::Drawing::Size(75, 23);
			this->btnTransfer->TabIndex = 3;
			this->btnTransfer->Text = L"Transfer";
			this->btnTransfer->UseVisualStyleBackColor = true;
			// 
			// CCustomerAccounts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnNewAccount);
			this->Controls->Add(this->grbxTransactions);
			this->Controls->Add(this->grbxDetails);
			this->Controls->Add(this->grbxSummary);
			this->Name = L"CCustomerAccounts";
			this->Size = System::Drawing::Size(591, 782);
			this->grbxSummary->ResumeLayout(false);
			this->grbxTransactions->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
