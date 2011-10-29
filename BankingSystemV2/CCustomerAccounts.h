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
	public: System::Windows::Forms::TextBox^  txtMinRepayment;
	public: System::Windows::Forms::TextBox^  txtPaymentOption;
	public: System::Windows::Forms::TextBox^  txtAddress;
	public: System::Windows::Forms::Label^  lblRepayment;
	public: System::Windows::Forms::Label^  lblOption;
	public: System::Windows::Forms::Label^  lblAddress;
	public: System::Windows::Forms::TextBox^  txtOverdraftLimit;
	public: System::Windows::Forms::TextBox^  txtBalance;
	public: System::Windows::Forms::TextBox^  txtInterestRate;
	public: System::Windows::Forms::TextBox^  txtAccountName;
	public: System::Windows::Forms::TextBox^  txtAccountId;
	public: System::Windows::Forms::Label^  lblOverdraftLimit;
	public: System::Windows::Forms::Label^  lblBalance;
	public: System::Windows::Forms::Label^  lblInterestRate;
	public: System::Windows::Forms::Label^  lblAccountName;
	public: System::Windows::Forms::Label^  lblAccountID;

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
			this->lbSummary = (gcnew System::Windows::Forms::ListBox());
			this->grbxDetails = (gcnew System::Windows::Forms::GroupBox());
			this->grbxTransactions = (gcnew System::Windows::Forms::GroupBox());
			this->btnTransfer = (gcnew System::Windows::Forms::Button());
			this->btnWithdraw = (gcnew System::Windows::Forms::Button());
			this->btnDeposit = (gcnew System::Windows::Forms::Button());
			this->lbTransactionHistory = (gcnew System::Windows::Forms::ListBox());
			this->btnNewAccount = (gcnew System::Windows::Forms::Button());
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
			this->grbxSummary->SuspendLayout();
			this->grbxDetails->SuspendLayout();
			this->grbxTransactions->SuspendLayout();
			this->SuspendLayout();
			// 
			// grbxSummary
			// 
			this->grbxSummary->Controls->Add(this->lbSummary);
			this->grbxSummary->Location = System::Drawing::Point(19, 32);
			this->grbxSummary->Name = L"grbxSummary";
			this->grbxSummary->Size = System::Drawing::Size(554, 145);
			this->grbxSummary->TabIndex = 0;
			this->grbxSummary->TabStop = false;
			this->grbxSummary->Text = L"Accounts Summary";
			// 
			// lbSummary
			// 
			this->lbSummary->FormattingEnabled = true;
			this->lbSummary->Location = System::Drawing::Point(20, 33);
			this->lbSummary->Name = L"lbSummary";
			this->lbSummary->Size = System::Drawing::Size(515, 95);
			this->lbSummary->TabIndex = 0;
			// 
			// grbxDetails
			// 
			this->grbxDetails->Controls->Add(this->txtMinRepayment);
			this->grbxDetails->Controls->Add(this->txtPaymentOption);
			this->grbxDetails->Controls->Add(this->txtAddress);
			this->grbxDetails->Controls->Add(this->lblRepayment);
			this->grbxDetails->Controls->Add(this->lblOption);
			this->grbxDetails->Controls->Add(this->lblAddress);
			this->grbxDetails->Controls->Add(this->txtOverdraftLimit);
			this->grbxDetails->Controls->Add(this->txtBalance);
			this->grbxDetails->Controls->Add(this->txtInterestRate);
			this->grbxDetails->Controls->Add(this->txtAccountName);
			this->grbxDetails->Controls->Add(this->txtAccountId);
			this->grbxDetails->Controls->Add(this->lblOverdraftLimit);
			this->grbxDetails->Controls->Add(this->lblBalance);
			this->grbxDetails->Controls->Add(this->lblInterestRate);
			this->grbxDetails->Controls->Add(this->lblAccountName);
			this->grbxDetails->Controls->Add(this->lblAccountID);
			this->grbxDetails->Location = System::Drawing::Point(19, 183);
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
			this->grbxTransactions->Location = System::Drawing::Point(19, 407);
			this->grbxTransactions->Name = L"grbxTransactions";
			this->grbxTransactions->Size = System::Drawing::Size(554, 185);
			this->grbxTransactions->TabIndex = 2;
			this->grbxTransactions->TabStop = false;
			this->grbxTransactions->Text = L"Transactions";
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
			// btnWithdraw
			// 
			this->btnWithdraw->Location = System::Drawing::Point(101, 29);
			this->btnWithdraw->Name = L"btnWithdraw";
			this->btnWithdraw->Size = System::Drawing::Size(75, 23);
			this->btnWithdraw->TabIndex = 2;
			this->btnWithdraw->Text = L"Withdraw";
			this->btnWithdraw->UseVisualStyleBackColor = true;
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
			// lbTransactionHistory
			// 
			this->lbTransactionHistory->FormattingEnabled = true;
			this->lbTransactionHistory->Location = System::Drawing::Point(15, 61);
			this->lbTransactionHistory->Name = L"lbTransactionHistory";
			this->lbTransactionHistory->Size = System::Drawing::Size(519, 108);
			this->lbTransactionHistory->TabIndex = 0;
			// 
			// btnNewAccount
			// 
			this->btnNewAccount->Location = System::Drawing::Point(449, 3);
			this->btnNewAccount->Name = L"btnNewAccount";
			this->btnNewAccount->Size = System::Drawing::Size(124, 23);
			this->btnNewAccount->TabIndex = 3;
			this->btnNewAccount->Text = L"Open New Account ...";
			this->btnNewAccount->UseVisualStyleBackColor = true;
			// 
			// txtMinRepayment
			// 
			this->txtMinRepayment->Location = System::Drawing::Point(347, 99);
			this->txtMinRepayment->Name = L"txtMinRepayment";
			this->txtMinRepayment->Size = System::Drawing::Size(100, 20);
			this->txtMinRepayment->TabIndex = 32;
			// 
			// txtPaymentOption
			// 
			this->txtPaymentOption->Location = System::Drawing::Point(347, 61);
			this->txtPaymentOption->Name = L"txtPaymentOption";
			this->txtPaymentOption->Size = System::Drawing::Size(199, 20);
			this->txtPaymentOption->TabIndex = 31;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(347, 23);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(199, 20);
			this->txtAddress->TabIndex = 30;
			// 
			// lblRepayment
			// 
			this->lblRepayment->AutoSize = true;
			this->lblRepayment->Location = System::Drawing::Point(270, 102);
			this->lblRepayment->Name = L"lblRepayment";
			this->lblRepayment->Size = System::Drawing::Size(61, 13);
			this->lblRepayment->TabIndex = 29;
			this->lblRepayment->Text = L"Repayment";
			// 
			// lblOption
			// 
			this->lblOption->AutoSize = true;
			this->lblOption->Location = System::Drawing::Point(249, 65);
			this->lblOption->Name = L"lblOption";
			this->lblOption->Size = System::Drawing::Size(82, 13);
			this->lblOption->TabIndex = 28;
			this->lblOption->Text = L"Payment Option";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Location = System::Drawing::Point(286, 26);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(45, 13);
			this->lblAddress->TabIndex = 27;
			this->lblAddress->Text = L"Address";
			// 
			// txtOverdraftLimit
			// 
			this->txtOverdraftLimit->Location = System::Drawing::Point(93, 175);
			this->txtOverdraftLimit->Name = L"txtOverdraftLimit";
			this->txtOverdraftLimit->Size = System::Drawing::Size(101, 20);
			this->txtOverdraftLimit->TabIndex = 26;
			// 
			// txtBalance
			// 
			this->txtBalance->Location = System::Drawing::Point(93, 137);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->Size = System::Drawing::Size(101, 20);
			this->txtBalance->TabIndex = 25;
			// 
			// txtInterestRate
			// 
			this->txtInterestRate->Location = System::Drawing::Point(93, 99);
			this->txtInterestRate->Name = L"txtInterestRate";
			this->txtInterestRate->Size = System::Drawing::Size(68, 20);
			this->txtInterestRate->TabIndex = 24;
			// 
			// txtAccountName
			// 
			this->txtAccountName->Location = System::Drawing::Point(93, 62);
			this->txtAccountName->Name = L"txtAccountName";
			this->txtAccountName->Size = System::Drawing::Size(150, 20);
			this->txtAccountName->TabIndex = 23;
			// 
			// txtAccountId
			// 
			this->txtAccountId->Location = System::Drawing::Point(93, 23);
			this->txtAccountId->Name = L"txtAccountId";
			this->txtAccountId->Size = System::Drawing::Size(150, 20);
			this->txtAccountId->TabIndex = 22;
			// 
			// lblOverdraftLimit
			// 
			this->lblOverdraftLimit->AutoSize = true;
			this->lblOverdraftLimit->Location = System::Drawing::Point(12, 178);
			this->lblOverdraftLimit->Name = L"lblOverdraftLimit";
			this->lblOverdraftLimit->Size = System::Drawing::Size(75, 13);
			this->lblOverdraftLimit->TabIndex = 21;
			this->lblOverdraftLimit->Text = L"Overdraft Limit";
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Location = System::Drawing::Point(41, 140);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(46, 13);
			this->lblBalance->TabIndex = 20;
			this->lblBalance->Text = L"Balance";
			// 
			// lblInterestRate
			// 
			this->lblInterestRate->AutoSize = true;
			this->lblInterestRate->Location = System::Drawing::Point(13, 102);
			this->lblInterestRate->Name = L"lblInterestRate";
			this->lblInterestRate->Size = System::Drawing::Size(74, 13);
			this->lblInterestRate->TabIndex = 19;
			this->lblInterestRate->Text = L"Intereset Rate";
			// 
			// lblAccountName
			// 
			this->lblAccountName->AutoSize = true;
			this->lblAccountName->Location = System::Drawing::Point(9, 64);
			this->lblAccountName->Name = L"lblAccountName";
			this->lblAccountName->Size = System::Drawing::Size(78, 13);
			this->lblAccountName->TabIndex = 18;
			this->lblAccountName->Text = L"Account Name";
			// 
			// lblAccountID
			// 
			this->lblAccountID->AutoSize = true;
			this->lblAccountID->Location = System::Drawing::Point(26, 26);
			this->lblAccountID->Name = L"lblAccountID";
			this->lblAccountID->Size = System::Drawing::Size(61, 13);
			this->lblAccountID->TabIndex = 17;
			this->lblAccountID->Text = L"Account ID";
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
			this->Size = System::Drawing::Size(591, 603);
			this->grbxSummary->ResumeLayout(false);
			this->grbxDetails->ResumeLayout(false);
			this->grbxDetails->PerformLayout();
			this->grbxTransactions->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
