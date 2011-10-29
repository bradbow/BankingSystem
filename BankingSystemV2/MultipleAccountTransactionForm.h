#pragma once
#include "Customer.h"

namespace BankingSystemV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MultipleAccountTransactionForm
	/// </summary>
	public ref class MultipleAccountTransactionForm : public System::Windows::Forms::Form
	{
	public:
		MultipleAccountTransactionForm(Customer* customer)
		{
			InitializeComponent();
			_customer = customer;
			_as = AccountServices::instance();
			_ts = TransactionServices::instance();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MultipleAccountTransactionForm()
		{
			if (components)
			{
				delete components;
			}
		}

		Customer* _customer;
		AccountServices* _as;
		TransactionServices* _ts;

	private: System::Windows::Forms::Label^  lblAmount;
	protected: 
	private: System::Windows::Forms::Label^  lblFromAccount;
	private: System::Windows::Forms::Label^  lblToAccount;
	private: System::Windows::Forms::ListBox^  lbFromAccount;
	private: System::Windows::Forms::ListBox^  lbToAccount;
	private: System::Windows::Forms::TextBox^  txtAmount;

	private: System::Windows::Forms::Button^  btnTransfer;

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
			this->lblFromAccount = (gcnew System::Windows::Forms::Label());
			this->lblToAccount = (gcnew System::Windows::Forms::Label());
			this->lbFromAccount = (gcnew System::Windows::Forms::ListBox());
			this->lbToAccount = (gcnew System::Windows::Forms::ListBox());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->btnTransfer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAmount
			// 
			this->lblAmount->AutoSize = true;
			this->lblAmount->Location = System::Drawing::Point(31, 12);
			this->lblAmount->Name = L"lblAmount";
			this->lblAmount->Size = System::Drawing::Size(43, 13);
			this->lblAmount->TabIndex = 0;
			this->lblAmount->Text = L"Amount";
			// 
			// lblFromAccount
			// 
			this->lblFromAccount->AutoSize = true;
			this->lblFromAccount->Location = System::Drawing::Point(1, 51);
			this->lblFromAccount->Name = L"lblFromAccount";
			this->lblFromAccount->Size = System::Drawing::Size(73, 13);
			this->lblFromAccount->TabIndex = 1;
			this->lblFromAccount->Text = L"From Account";
			// 
			// lblToAccount
			// 
			this->lblToAccount->AutoSize = true;
			this->lblToAccount->Location = System::Drawing::Point(11, 163);
			this->lblToAccount->Name = L"lblToAccount";
			this->lblToAccount->Size = System::Drawing::Size(63, 13);
			this->lblToAccount->TabIndex = 2;
			this->lblToAccount->Text = L"To Account";
			// 
			// lbFromAccount
			// 
			this->lbFromAccount->FormattingEnabled = true;
			this->lbFromAccount->Location = System::Drawing::Point(78, 51);
			this->lbFromAccount->Name = L"lbFromAccount";
			this->lbFromAccount->Size = System::Drawing::Size(328, 95);
			this->lbFromAccount->TabIndex = 3;
			// 
			// lbToAccount
			// 
			this->lbToAccount->FormattingEnabled = true;
			this->lbToAccount->Location = System::Drawing::Point(78, 163);
			this->lbToAccount->Name = L"lbToAccount";
			this->lbToAccount->Size = System::Drawing::Size(328, 95);
			this->lbToAccount->TabIndex = 4;
			// 
			// txtAmount
			// 
			this->txtAmount->Location = System::Drawing::Point(78, 9);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(108, 20);
			this->txtAmount->TabIndex = 5;
			// 
			// btnTransfer
			// 
			this->btnTransfer->Location = System::Drawing::Point(187, 274);
			this->btnTransfer->Name = L"btnTransfer";
			this->btnTransfer->Size = System::Drawing::Size(75, 23);
			this->btnTransfer->TabIndex = 6;
			this->btnTransfer->Text = L"Transfer";
			this->btnTransfer->UseVisualStyleBackColor = true;
			this->btnTransfer->Click += gcnew System::EventHandler(this, &MultipleAccountTransactionForm::btnTransfer_Click);
			// 
			// MultipleAccountTransactionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 309);
			this->Controls->Add(this->btnTransfer);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->lbToAccount);
			this->Controls->Add(this->lbFromAccount);
			this->Controls->Add(this->lblToAccount);
			this->Controls->Add(this->lblFromAccount);
			this->Controls->Add(this->lblAmount);
			this->Name = L"MultipleAccountTransactionForm";
			this->Text = L"Transaction Portal";
			this->Load += gcnew System::EventHandler(this, &MultipleAccountTransactionForm::MultipleAccountTransactionForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		// ------------------------------------------------------------------------------------ //
		// event handlers
		private: 

			// load event
			System::Void MultipleAccountTransactionForm_Load(System::Object^  sender, System::EventArgs^  e)
			{

				DebitAccount* dbp;
				
				list<Account*> accounts = _as->getCustomerAccounts(_customer->getUserId());
				list<Account*>::iterator lit;
				for (lit = accounts.begin(); lit != accounts.end(); ++lit)
				{
					dbp = dynamic_cast<DebitAccount*>(*lit);
					if (dbp)
					{
						this->lbFromAccount->Items->Add(DotNetUtils::StdStringToSystemString(dbp->getSummary()));
						this->lbToAccount->Items->Add(DotNetUtils::StdStringToSystemString(dbp->getSummary()));
					}
					else
					{
						this->lbToAccount->Items->Add(DotNetUtils::StdStringToSystemString((*lit)->getSummary()));
					}
				}

			}

			// transfer button
			System::Void btnTransfer_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				// check for list box selections
				if (this->lbFromAccount->SelectedIndex == -1 || this->lbToAccount->SelectedIndex == -1)
				{
					MessageBox::Show(this, "You must select an account from each box");
					return;
				}

				// check for empty value in amount box
				if (this->txtAmount->Text == "")
				{
					MessageBox::Show(this, "Please enter an amount greater than zero");
					return;
				}

				// perform transfer
				int fromIndex = this->lbFromAccount->SelectedIndex;
				int toIndex = this->lbToAccount->SelectedIndex;
				double amount = double::Parse(this->txtAmount->Text);
				std::string fromLine = DotNetUtils::SystemStringToStdString(this->lbFromAccount->Items[fromIndex]->ToString());
				std::string toLine = DotNetUtils::SystemStringToStdString(this->lbToAccount->Items[toIndex]->ToString());

				DebitAccount* dap = dynamic_cast<DebitAccount*>(getAccountFromSummary(fromLine));
				Account* ap = getAccountFromSummary(fromLine);

				Transfer* tr = new Transfer
									(
										_ts->getNextTransactionId(),
										amount,
										_ts->getCurrentDate(DATE_DELIMITER),
										dap->getAccountId(),
										ap->getAccountId()
									);

				try
				{
					tr->execute();
				}
				catch (TransactionException e)
				{
					MessageBox::Show(this, DotNetUtils::StdStringToSystemString(e.getMessage()));
				}
				
			}

			Account* getAccountFromSummary(std::string line)
			{
				vector<std::string> split = StringUtils::splitString(line, ' ');
				int accId = TypeConv(split[0]);
				return _as->getAccount(accId);
			}

#pragma endregion
	

};
}
