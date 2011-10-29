#pragma once
#include "Customer.h"
#include "AccountServices.h"

namespace BankingSystemV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateSavingsAccountForm
	/// </summary>
	public ref class CreateSavingsAccountForm : public System::Windows::Forms::Form
	{
	public:
		CreateSavingsAccountForm(Customer* customer)
		{
			InitializeComponent();
			_customer = customer;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateSavingsAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblAccountName;
	protected: 
	private: System::Windows::Forms::Label^  lblInterestRate;
	private: System::Windows::Forms::Label^  lblBalance;
	private: System::Windows::Forms::TextBox^  txtAccountName;
	private: System::Windows::Forms::TextBox^  txtInterestRate;
	private: System::Windows::Forms::TextBox^  txtBalance;



	private: System::Windows::Forms::Button^  bnCreate;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Customer* _customer;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblAccountName = (gcnew System::Windows::Forms::Label());
			this->lblInterestRate = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->txtAccountName = (gcnew System::Windows::Forms::TextBox());
			this->txtInterestRate = (gcnew System::Windows::Forms::TextBox());
			this->txtBalance = (gcnew System::Windows::Forms::TextBox());
			this->bnCreate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAccountName
			// 
			this->lblAccountName->AutoSize = true;
			this->lblAccountName->Location = System::Drawing::Point(13, 18);
			this->lblAccountName->Name = L"lblAccountName";
			this->lblAccountName->Size = System::Drawing::Size(78, 13);
			this->lblAccountName->TabIndex = 0;
			this->lblAccountName->Text = L"Account Name";
			// 
			// lblInterestRate
			// 
			this->lblInterestRate->AutoSize = true;
			this->lblInterestRate->Location = System::Drawing::Point(23, 54);
			this->lblInterestRate->Name = L"lblInterestRate";
			this->lblInterestRate->Size = System::Drawing::Size(68, 13);
			this->lblInterestRate->TabIndex = 1;
			this->lblInterestRate->Text = L"Interest Rate";
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Location = System::Drawing::Point(45, 89);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(46, 13);
			this->lblBalance->TabIndex = 2;
			this->lblBalance->Text = L"Balance";
			// 
			// txtAccountName
			// 
			this->txtAccountName->Location = System::Drawing::Point(97, 15);
			this->txtAccountName->Name = L"txtAccountName";
			this->txtAccountName->Size = System::Drawing::Size(175, 20);
			this->txtAccountName->TabIndex = 3;
			// 
			// txtInterestRate
			// 
			this->txtInterestRate->Enabled = false;
			this->txtInterestRate->Location = System::Drawing::Point(97, 51);
			this->txtInterestRate->Name = L"txtInterestRate";
			this->txtInterestRate->Size = System::Drawing::Size(48, 20);
			this->txtInterestRate->TabIndex = 4;
			// 
			// txtBalance
			// 
			this->txtBalance->Enabled = false;
			this->txtBalance->Location = System::Drawing::Point(97, 86);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->Size = System::Drawing::Size(84, 20);
			this->txtBalance->TabIndex = 5;
			// 
			// bnCreate
			// 
			this->bnCreate->Location = System::Drawing::Point(71, 120);
			this->bnCreate->Name = L"bnCreate";
			this->bnCreate->Size = System::Drawing::Size(142, 23);
			this->bnCreate->TabIndex = 6;
			this->bnCreate->Text = L"Create Savings Account";
			this->bnCreate->UseVisualStyleBackColor = true;
			this->bnCreate->Click += gcnew System::EventHandler(this, &CreateSavingsAccountForm::bnCreate_Click);
			// 
			// CreateSavingsAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 155);
			this->Controls->Add(this->bnCreate);
			this->Controls->Add(this->txtBalance);
			this->Controls->Add(this->txtInterestRate);
			this->Controls->Add(this->txtAccountName);
			this->Controls->Add(this->lblBalance);
			this->Controls->Add(this->lblInterestRate);
			this->Controls->Add(this->lblAccountName);
			this->Name = L"CreateSavingsAccountForm";
			this->Text = L"New Savings Account";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		// ------------------------------------------------------------------------------------------- //
		// event handlers

		System::Void bnCreate_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			/*AccountServices* as = AccountServices::instance();
			std::string accountName = DotNetUtils::SystemStringToStdString(this->txtAccountName->Text);
			int accId = AccountServices::makeAccount(*/
		}
};
}
