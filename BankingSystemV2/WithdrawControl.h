#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace INB305_BankingForms {

	/// <summary>
	/// Summary for CWithdraw
	/// </summary>
	public ref class CWithdraw : public System::Windows::Forms::UserControl
	{
	public:
		CWithdraw(void)
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
		~CWithdraw()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_AccountID;
	private: System::Windows::Forms::TextBox^  textBox_Amount;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  textBox_AccountName;
	private: System::Windows::Forms::TextBox^  textBox_Balance;


	private: System::Windows::Forms::Label^  label_AccountID;
	private: System::Windows::Forms::Label^  label_AccountName;
	private: System::Windows::Forms::Label^  label_Amount;
	private: System::Windows::Forms::Label^  label_Balance;
	private: System::Windows::Forms::Button^  button_Withdraw;

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
			this->textBox_Amount = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AccountName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Balance = (gcnew System::Windows::Forms::TextBox());
			this->label_AccountID = (gcnew System::Windows::Forms::Label());
			this->label_AccountName = (gcnew System::Windows::Forms::Label());
			this->label_Amount = (gcnew System::Windows::Forms::Label());
			this->label_Balance = (gcnew System::Windows::Forms::Label());
			this->button_Withdraw = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_AccountID
			// 
			this->textBox_AccountID->Location = System::Drawing::Point(68, 8);
			this->textBox_AccountID->Name = L"textBox_AccountID";
			this->textBox_AccountID->Size = System::Drawing::Size(100, 20);
			this->textBox_AccountID->TabIndex = 0;
			this->textBox_AccountID->TextChanged += gcnew System::EventHandler(this, &CWithdraw::textBox1_TextChanged);
			// 
			// textBox_Amount
			// 
			this->textBox_Amount->Location = System::Drawing::Point(68, 49);
			this->textBox_Amount->Name = L"textBox_Amount";
			this->textBox_Amount->Size = System::Drawing::Size(100, 20);
			this->textBox_Amount->TabIndex = 1;
			// 
			// textBox_AccountName
			// 
			this->textBox_AccountName->Location = System::Drawing::Point(266, 6);
			this->textBox_AccountName->Name = L"textBox_AccountName";
			this->textBox_AccountName->Size = System::Drawing::Size(286, 20);
			this->textBox_AccountName->TabIndex = 2;
			// 
			// textBox_Balance
			// 
			this->textBox_Balance->Location = System::Drawing::Point(68, 75);
			this->textBox_Balance->Name = L"textBox_Balance";
			this->textBox_Balance->Size = System::Drawing::Size(100, 20);
			this->textBox_Balance->TabIndex = 3;
			// 
			// label_AccountID
			// 
			this->label_AccountID->AutoSize = true;
			this->label_AccountID->Location = System::Drawing::Point(7, 11);
			this->label_AccountID->Name = L"label_AccountID";
			this->label_AccountID->Size = System::Drawing::Size(61, 13);
			this->label_AccountID->TabIndex = 4;
			this->label_AccountID->Text = L"Account id:";
			// 
			// label_AccountName
			// 
			this->label_AccountName->AutoSize = true;
			this->label_AccountName->Location = System::Drawing::Point(179, 9);
			this->label_AccountName->Name = L"label_AccountName";
			this->label_AccountName->Size = System::Drawing::Size(81, 13);
			this->label_AccountName->TabIndex = 5;
			this->label_AccountName->Text = L"Account Name:";
			// 
			// label_Amount
			// 
			this->label_Amount->AutoSize = true;
			this->label_Amount->Location = System::Drawing::Point(19, 55);
			this->label_Amount->Name = L"label_Amount";
			this->label_Amount->Size = System::Drawing::Size(46, 13);
			this->label_Amount->TabIndex = 6;
			this->label_Amount->Text = L"Amount:";
			// 
			// label_Balance
			// 
			this->label_Balance->AutoSize = true;
			this->label_Balance->Location = System::Drawing::Point(18, 78);
			this->label_Balance->Name = L"label_Balance";
			this->label_Balance->Size = System::Drawing::Size(49, 13);
			this->label_Balance->TabIndex = 7;
			this->label_Balance->Text = L"Balance:";
			// 
			// button_Withdraw
			// 
			this->button_Withdraw->Location = System::Drawing::Point(182, 49);
			this->button_Withdraw->Name = L"button_Withdraw";
			this->button_Withdraw->Size = System::Drawing::Size(75, 23);
			this->button_Withdraw->TabIndex = 8;
			this->button_Withdraw->Text = L"Withdraw";
			this->button_Withdraw->UseVisualStyleBackColor = true;
			// 
			// CWithdraw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button_Withdraw);
			this->Controls->Add(this->label_Balance);
			this->Controls->Add(this->label_Amount);
			this->Controls->Add(this->label_AccountName);
			this->Controls->Add(this->label_AccountID);
			this->Controls->Add(this->textBox_Balance);
			this->Controls->Add(this->textBox_AccountName);
			this->Controls->Add(this->textBox_Amount);
			this->Controls->Add(this->textBox_AccountID);
			this->Name = L"CWithdraw";
			this->Size = System::Drawing::Size(565, 150);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
