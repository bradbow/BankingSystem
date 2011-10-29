#pragma once
#include "Account.h"
#include "HomeLoanAccount.hpp"
#include "CreditCardAccount.hpp"
#include "SavingsAccount.hpp"

namespace BankingSystemV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SingleAccountTransactionForm
	/// </summary>
	public ref class SingleAccountTransactionForm : public System::Windows::Forms::Form
	{


		static const int WITHDRAWAL = 0;
		static const int DEPOSIT = 1;

	public:
		SingleAccountTransactionForm(Account* account, int type)
		{
			InitializeComponent();
			_account = account;
			_type = type;

			if (_type == WITHDRAWAL)
			{
				this->btnAction->Text = "Withdraw";
			}
			else if (_type == DEPOSIT)
			{
				this->btnAction->Text = "Deposit";
			}

			// intialise info text boxes
			this->txtAccountId->Text = _account->getAccountId().ToString();
			this->txtAccountName->Text = DotNetUtils::StdStringToSystemString(_account->getAccountName());
			this->txtCurrentBalance->Text = _account->getBalance().ToString();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SingleAccountTransactionForm()
		{
			if (components)
			{
				delete components;
			}
		}

		Account* _account;
		int _type;

	private: System::Windows::Forms::Label^  lblAmount;
	private: System::Windows::Forms::TextBox^  txtAmount;
	protected: 

	private: System::Windows::Forms::Label^  lblAccountNumber;
	private: System::Windows::Forms::Label^  lblAccountName;
	private: System::Windows::Forms::Label^  lblCurrentBalance;
	private: System::Windows::Forms::TextBox^  txtAccountId;
	private: System::Windows::Forms::TextBox^  txtAccountName;
	private: System::Windows::Forms::TextBox^  txtCurrentBalance;







	private: System::Windows::Forms::Button^  btnAction;


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
			this->lblAmount = (gcnew System::Windows::Forms::Label());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->lblAccountNumber = (gcnew System::Windows::Forms::Label());
			this->lblAccountName = (gcnew System::Windows::Forms::Label());
			this->lblCurrentBalance = (gcnew System::Windows::Forms::Label());
			this->txtAccountId = (gcnew System::Windows::Forms::TextBox());
			this->txtAccountName = (gcnew System::Windows::Forms::TextBox());
			this->txtCurrentBalance = (gcnew System::Windows::Forms::TextBox());
			this->btnAction = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAmount
			// 
			this->lblAmount->AutoSize = true;
			this->lblAmount->Location = System::Drawing::Point(46, 8);
			this->lblAmount->Name = L"lblAmount";
			this->lblAmount->Size = System::Drawing::Size(43, 13);
			this->lblAmount->TabIndex = 0;
			this->lblAmount->Text = L"Amount";
			// 
			// txtAmount
			// 
			this->txtAmount->Location = System::Drawing::Point(108, 5);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(93, 20);
			this->txtAmount->TabIndex = 1;
			// 
			// lblAccountNumber
			// 
			this->lblAccountNumber->AutoSize = true;
			this->lblAccountNumber->Location = System::Drawing::Point(30, 55);
			this->lblAccountNumber->Name = L"lblAccountNumber";
			this->lblAccountNumber->Size = System::Drawing::Size(61, 13);
			this->lblAccountNumber->TabIndex = 2;
			this->lblAccountNumber->Text = L"Account ID";
			// 
			// lblAccountName
			// 
			this->lblAccountName->AutoSize = true;
			this->lblAccountName->Location = System::Drawing::Point(13, 89);
			this->lblAccountName->Name = L"lblAccountName";
			this->lblAccountName->Size = System::Drawing::Size(78, 13);
			this->lblAccountName->TabIndex = 3;
			this->lblAccountName->Text = L"Account Name";
			// 
			// lblCurrentBalance
			// 
			this->lblCurrentBalance->AutoSize = true;
			this->lblCurrentBalance->Location = System::Drawing::Point(43, 123);
			this->lblCurrentBalance->Name = L"lblCurrentBalance";
			this->lblCurrentBalance->Size = System::Drawing::Size(46, 13);
			this->lblCurrentBalance->TabIndex = 4;
			this->lblCurrentBalance->Text = L"Balance";
			// 
			// txtAccountId
			// 
			this->txtAccountId->Enabled = false;
			this->txtAccountId->Location = System::Drawing::Point(108, 52);
			this->txtAccountId->Name = L"txtAccountId";
			this->txtAccountId->Size = System::Drawing::Size(148, 20);
			this->txtAccountId->TabIndex = 5;
			// 
			// txtAccountName
			// 
			this->txtAccountName->Enabled = false;
			this->txtAccountName->Location = System::Drawing::Point(108, 86);
			this->txtAccountName->Name = L"txtAccountName";
			this->txtAccountName->Size = System::Drawing::Size(148, 20);
			this->txtAccountName->TabIndex = 6;
			// 
			// txtCurrentBalance
			// 
			this->txtCurrentBalance->Enabled = false;
			this->txtCurrentBalance->Location = System::Drawing::Point(108, 120);
			this->txtCurrentBalance->Name = L"txtCurrentBalance";
			this->txtCurrentBalance->Size = System::Drawing::Size(93, 20);
			this->txtCurrentBalance->TabIndex = 7;
			// 
			// btnAction
			// 
			this->btnAction->Location = System::Drawing::Point(108, 154);
			this->btnAction->Name = L"btnAction";
			this->btnAction->Size = System::Drawing::Size(75, 23);
			this->btnAction->TabIndex = 8;
			this->btnAction->Text = L"button1";
			this->btnAction->UseVisualStyleBackColor = true;
			this->btnAction->Click += gcnew System::EventHandler(this, &SingleAccountTransactionForm::btnAction_Click);
			// 
			// SingleAccountTransactionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(286, 189);
			this->Controls->Add(this->btnAction);
			this->Controls->Add(this->txtCurrentBalance);
			this->Controls->Add(this->txtAccountName);
			this->Controls->Add(this->txtAccountId);
			this->Controls->Add(this->lblCurrentBalance);
			this->Controls->Add(this->lblAccountName);
			this->Controls->Add(this->lblAccountNumber);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->lblAmount);
			this->Name = L"SingleAccountTransactionForm";
			this->Text = L"SingleAccountTransactionForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:

			// --------------------------------------------------------------------------------- //
			// Event handlers

			// perform action
			System::Void btnAction_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				double amount = double::Parse(this->txtAmount->Text);
				
				if (_type == WITHDRAWAL)
				{
					DebitAccount* dap = dynamic_cast<DebitAccount*>(_account);
					dap->withdraw(amount);
				}
				else if (_type == DEPOSIT)
				{
					_account->deposit(amount);
				}
			}

#pragma endregion



};
}
