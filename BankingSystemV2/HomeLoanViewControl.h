#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace INB305_BankingForms {

	/// <summary>
	/// Summary for CHomeLoanView
	/// </summary>
	public ref class CHomeLoanView : public System::Windows::Forms::UserControl
	{
	public:
		CHomeLoanView(void)
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
		~CHomeLoanView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_AccountID;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox_PropertyAddress;
	private: System::Windows::Forms::TextBox^  textBox_AccountName;
	protected: 


	private: System::Windows::Forms::TextBox^  textBox_InterestRate;

	private: System::Windows::Forms::Label^  label_AccountID;
	private: System::Windows::Forms::Label^  label_AccountName;
	private: System::Windows::Forms::Label^  label_InterestRate;
	private: System::Windows::Forms::Label^  label_PropertyAddress;
	private: System::Windows::Forms::TextBox^  textBox_MinRepayment;

	private: System::Windows::Forms::TextBox^  textBox_Option;

	private: System::Windows::Forms::Label^  label_MinRepayment;
	private: System::Windows::Forms::Label^  label_Option;
	private: System::Windows::Forms::TextBox^  textBox_Balance;

	private: System::Windows::Forms::Label^  label_Balance;

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
			this->textBox_AccountID = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PropertyAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AccountName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_InterestRate = (gcnew System::Windows::Forms::TextBox());
			this->label_AccountID = (gcnew System::Windows::Forms::Label());
			this->label_AccountName = (gcnew System::Windows::Forms::Label());
			this->label_InterestRate = (gcnew System::Windows::Forms::Label());
			this->label_PropertyAddress = (gcnew System::Windows::Forms::Label());
			this->textBox_MinRepayment = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Option = (gcnew System::Windows::Forms::TextBox());
			this->label_MinRepayment = (gcnew System::Windows::Forms::Label());
			this->label_Option = (gcnew System::Windows::Forms::Label());
			this->textBox_Balance = (gcnew System::Windows::Forms::TextBox());
			this->label_Balance = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_AccountID
			// 
			this->textBox_AccountID->Location = System::Drawing::Point(93, 8);
			this->textBox_AccountID->Name = L"textBox_AccountID";
			this->textBox_AccountID->Size = System::Drawing::Size(100, 20);
			this->textBox_AccountID->TabIndex = 0;
			// 
			// textBox_PropertyAddress
			// 
			this->textBox_PropertyAddress->Location = System::Drawing::Point(299, 40);
			this->textBox_PropertyAddress->Name = L"textBox_PropertyAddress";
			this->textBox_PropertyAddress->Size = System::Drawing::Size(256, 20);
			this->textBox_PropertyAddress->TabIndex = 1;
			// 
			// textBox_AccountName
			// 
			this->textBox_AccountName->Location = System::Drawing::Point(299, 10);
			this->textBox_AccountName->Name = L"textBox_AccountName";
			this->textBox_AccountName->Size = System::Drawing::Size(256, 20);
			this->textBox_AccountName->TabIndex = 2;
			// 
			// textBox_InterestRate
			// 
			this->textBox_InterestRate->Location = System::Drawing::Point(93, 41);
			this->textBox_InterestRate->Name = L"textBox_InterestRate";
			this->textBox_InterestRate->Size = System::Drawing::Size(100, 20);
			this->textBox_InterestRate->TabIndex = 3;
			// 
			// label_AccountID
			// 
			this->label_AccountID->AutoSize = true;
			this->label_AccountID->Location = System::Drawing::Point(29, 12);
			this->label_AccountID->Name = L"label_AccountID";
			this->label_AccountID->Size = System::Drawing::Size(61, 13);
			this->label_AccountID->TabIndex = 4;
			this->label_AccountID->Text = L"Account id:";
			// 
			// label_AccountName
			// 
			this->label_AccountName->AutoSize = true;
			this->label_AccountName->Location = System::Drawing::Point(213, 13);
			this->label_AccountName->Name = L"label_AccountName";
			this->label_AccountName->Size = System::Drawing::Size(81, 13);
			this->label_AccountName->TabIndex = 5;
			this->label_AccountName->Text = L"Account Name:";
			// 
			// label_InterestRate
			// 
			this->label_InterestRate->AutoSize = true;
			this->label_InterestRate->Location = System::Drawing::Point(22, 41);
			this->label_InterestRate->Name = L"label_InterestRate";
			this->label_InterestRate->Size = System::Drawing::Size(71, 13);
			this->label_InterestRate->TabIndex = 6;
			this->label_InterestRate->Text = L"Interest Rate:";
			// 
			// label_PropertyAddress
			// 
			this->label_PropertyAddress->AutoSize = true;
			this->label_PropertyAddress->Location = System::Drawing::Point(204, 43);
			this->label_PropertyAddress->Name = L"label_PropertyAddress";
			this->label_PropertyAddress->Size = System::Drawing::Size(90, 13);
			this->label_PropertyAddress->TabIndex = 7;
			this->label_PropertyAddress->Text = L"Property Address:";
			// 
			// textBox_MinRepayment
			// 
			this->textBox_MinRepayment->Location = System::Drawing::Point(93, 72);
			this->textBox_MinRepayment->Name = L"textBox_MinRepayment";
			this->textBox_MinRepayment->Size = System::Drawing::Size(100, 20);
			this->textBox_MinRepayment->TabIndex = 8;
			// 
			// textBox_Option
			// 
			this->textBox_Option->Location = System::Drawing::Point(299, 72);
			this->textBox_Option->Name = L"textBox_Option";
			this->textBox_Option->Size = System::Drawing::Size(100, 20);
			this->textBox_Option->TabIndex = 9;
			// 
			// label_MinRepayment
			// 
			this->label_MinRepayment->AutoSize = true;
			this->label_MinRepayment->Location = System::Drawing::Point(6, 75);
			this->label_MinRepayment->Name = L"label_MinRepayment";
			this->label_MinRepayment->Size = System::Drawing::Size(84, 13);
			this->label_MinRepayment->TabIndex = 10;
			this->label_MinRepayment->Text = L"Min Repayment:";
			// 
			// label_Option
			// 
			this->label_Option->AutoSize = true;
			this->label_Option->Location = System::Drawing::Point(196, 72);
			this->label_Option->Name = L"label_Option";
			this->label_Option->Size = System::Drawing::Size(98, 13);
			this->label_Option->TabIndex = 11;
			this->label_Option->Text = L"Repayment Option:";
			// 
			// textBox_Balance
			// 
			this->textBox_Balance->Location = System::Drawing::Point(93, 104);
			this->textBox_Balance->Name = L"textBox_Balance";
			this->textBox_Balance->Size = System::Drawing::Size(100, 20);
			this->textBox_Balance->TabIndex = 12;
			// 
			// label_Balance
			// 
			this->label_Balance->AutoSize = true;
			this->label_Balance->Location = System::Drawing::Point(43, 104);
			this->label_Balance->Name = L"label_Balance";
			this->label_Balance->Size = System::Drawing::Size(49, 13);
			this->label_Balance->TabIndex = 13;
			this->label_Balance->Text = L"Balance:";
			// 
			// CHomeLoanView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label_Balance);
			this->Controls->Add(this->textBox_Balance);
			this->Controls->Add(this->label_Option);
			this->Controls->Add(this->label_MinRepayment);
			this->Controls->Add(this->textBox_Option);
			this->Controls->Add(this->textBox_MinRepayment);
			this->Controls->Add(this->label_PropertyAddress);
			this->Controls->Add(this->label_InterestRate);
			this->Controls->Add(this->label_AccountName);
			this->Controls->Add(this->label_AccountID);
			this->Controls->Add(this->textBox_InterestRate);
			this->Controls->Add(this->textBox_AccountName);
			this->Controls->Add(this->textBox_PropertyAddress);
			this->Controls->Add(this->textBox_AccountID);
			this->Name = L"CHomeLoanView";
			this->Size = System::Drawing::Size(565, 150);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
