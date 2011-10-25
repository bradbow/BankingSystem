#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace INB305_BankingForms {

	/// <summary>
	/// Summary for CCreditView
	/// </summary>
	public ref class CCreditView : public System::Windows::Forms::UserControl
	{
	public:
		CCreditView(void)
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
		~CCreditView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_AccountID;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox_AccountName;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox_InterestRate;

	private: System::Windows::Forms::TextBox^  textBox_Limit;

	private: System::Windows::Forms::Label^  label_AccountID;
	private: System::Windows::Forms::Label^  label_AccountName;
	private: System::Windows::Forms::Label^  label_InterestRate;
	private: System::Windows::Forms::Label^  label_Limit;
	private: System::Windows::Forms::TextBox^  textBox_Balance;

	private: System::Windows::Forms::Label^  label1_Balance;


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
			this->textBox_AccountName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_InterestRate = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Limit = (gcnew System::Windows::Forms::TextBox());
			this->label_AccountID = (gcnew System::Windows::Forms::Label());
			this->label_AccountName = (gcnew System::Windows::Forms::Label());
			this->label_InterestRate = (gcnew System::Windows::Forms::Label());
			this->label_Limit = (gcnew System::Windows::Forms::Label());
			this->textBox_Balance = (gcnew System::Windows::Forms::TextBox());
			this->label1_Balance = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_AccountID
			// 
			this->textBox_AccountID->Location = System::Drawing::Point(89, 17);
			this->textBox_AccountID->Name = L"textBox_AccountID";
			this->textBox_AccountID->Size = System::Drawing::Size(100, 20);
			this->textBox_AccountID->TabIndex = 0;
			// 
			// textBox_AccountName
			// 
			this->textBox_AccountName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_AccountName->Location = System::Drawing::Point(288, 17);
			this->textBox_AccountName->Name = L"textBox_AccountName";
			this->textBox_AccountName->Size = System::Drawing::Size(260, 20);
			this->textBox_AccountName->TabIndex = 1;
			// 
			// textBox_InterestRate
			// 
			this->textBox_InterestRate->Location = System::Drawing::Point(89, 46);
			this->textBox_InterestRate->Name = L"textBox_InterestRate";
			this->textBox_InterestRate->Size = System::Drawing::Size(100, 20);
			this->textBox_InterestRate->TabIndex = 2;
			// 
			// textBox_Limit
			// 
			this->textBox_Limit->Location = System::Drawing::Point(89, 72);
			this->textBox_Limit->Name = L"textBox_Limit";
			this->textBox_Limit->Size = System::Drawing::Size(100, 20);
			this->textBox_Limit->TabIndex = 3;
			// 
			// label_AccountID
			// 
			this->label_AccountID->AutoSize = true;
			this->label_AccountID->Location = System::Drawing::Point(22, 20);
			this->label_AccountID->Name = L"label_AccountID";
			this->label_AccountID->Size = System::Drawing::Size(61, 13);
			this->label_AccountID->TabIndex = 4;
			this->label_AccountID->Text = L"Account id:";
			// 
			// label_AccountName
			// 
			this->label_AccountName->AutoSize = true;
			this->label_AccountName->Location = System::Drawing::Point(201, 20);
			this->label_AccountName->Name = L"label_AccountName";
			this->label_AccountName->Size = System::Drawing::Size(81, 13);
			this->label_AccountName->TabIndex = 5;
			this->label_AccountName->Text = L"Account Name:";
			// 
			// label_InterestRate
			// 
			this->label_InterestRate->AutoSize = true;
			this->label_InterestRate->Location = System::Drawing::Point(18, 46);
			this->label_InterestRate->Name = L"label_InterestRate";
			this->label_InterestRate->Size = System::Drawing::Size(71, 13);
			this->label_InterestRate->TabIndex = 6;
			this->label_InterestRate->Text = L"Interest Rate:";
			// 
			// label_Limit
			// 
			this->label_Limit->AutoSize = true;
			this->label_Limit->Location = System::Drawing::Point(12, 75);
			this->label_Limit->Name = L"label_Limit";
			this->label_Limit->Size = System::Drawing::Size(78, 13);
			this->label_Limit->TabIndex = 7;
			this->label_Limit->Text = L"Overdraft Limit:";
			// 
			// textBox_Balance
			// 
			this->textBox_Balance->Location = System::Drawing::Point(89, 100);
			this->textBox_Balance->Name = L"textBox_Balance";
			this->textBox_Balance->Size = System::Drawing::Size(100, 20);
			this->textBox_Balance->TabIndex = 8;
			// 
			// label1_Balance
			// 
			this->label1_Balance->AutoSize = true;
			this->label1_Balance->Location = System::Drawing::Point(36, 103);
			this->label1_Balance->Name = L"label1_Balance";
			this->label1_Balance->Size = System::Drawing::Size(49, 13);
			this->label1_Balance->TabIndex = 9;
			this->label1_Balance->Text = L"Balance:";
			// 
			// CCreditView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1_Balance);
			this->Controls->Add(this->textBox_Balance);
			this->Controls->Add(this->label_Limit);
			this->Controls->Add(this->label_InterestRate);
			this->Controls->Add(this->label_AccountName);
			this->Controls->Add(this->label_AccountID);
			this->Controls->Add(this->textBox_Limit);
			this->Controls->Add(this->textBox_InterestRate);
			this->Controls->Add(this->textBox_AccountName);
			this->Controls->Add(this->textBox_AccountID);
			this->Name = L"CCreditView";
			this->Size = System::Drawing::Size(565, 150);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
