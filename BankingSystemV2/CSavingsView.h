#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BankingSystemV2 {

	/// <summary>
	/// Summary for CSavingsView
	/// </summary>
	public ref class CSavingsView : public System::Windows::Forms::UserControl
	{
	public:
		CSavingsView(void)
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
		~CSavingsView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_AccountID;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox_AccountName;
	private: System::Windows::Forms::TextBox^  textBox_Interest;
	private: System::Windows::Forms::TextBox^  textBox_Balance;
	private: System::Windows::Forms::Label^  label_AccountId;
	private: System::Windows::Forms::Label^  label_AccountName;
	private: System::Windows::Forms::Label^  label_Interest;
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
			this->textBox_AccountName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Interest = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Balance = (gcnew System::Windows::Forms::TextBox());
			this->label_AccountId = (gcnew System::Windows::Forms::Label());
			this->label_AccountName = (gcnew System::Windows::Forms::Label());
			this->label_Interest = (gcnew System::Windows::Forms::Label());
			this->label_Balance = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_AccountID
			// 
			this->textBox_AccountID->Location = System::Drawing::Point(72, 15);
			this->textBox_AccountID->Name = L"textBox_AccountID";
			this->textBox_AccountID->Size = System::Drawing::Size(100, 20);
			this->textBox_AccountID->TabIndex = 0;
			// 
			// textBox_AccountName
			// 
			this->textBox_AccountName->Location = System::Drawing::Point(268, 14);
			this->textBox_AccountName->Name = L"textBox_AccountName";
			this->textBox_AccountName->Size = System::Drawing::Size(273, 20);
			this->textBox_AccountName->TabIndex = 1;
			// 
			// textBox_Interest
			// 
			this->textBox_Interest->Location = System::Drawing::Point(72, 40);
			this->textBox_Interest->Name = L"textBox_Interest";
			this->textBox_Interest->Size = System::Drawing::Size(100, 20);
			this->textBox_Interest->TabIndex = 2;
			// 
			// textBox_Balance
			// 
			this->textBox_Balance->Location = System::Drawing::Point(72, 66);
			this->textBox_Balance->Name = L"textBox_Balance";
			this->textBox_Balance->Size = System::Drawing::Size(100, 20);
			this->textBox_Balance->TabIndex = 3;
			// 
			// label_AccountId
			// 
			this->label_AccountId->AutoSize = true;
			this->label_AccountId->Location = System::Drawing::Point(5, 18);
			this->label_AccountId->Name = L"label_AccountId";
			this->label_AccountId->Size = System::Drawing::Size(61, 13);
			this->label_AccountId->TabIndex = 4;
			this->label_AccountId->Text = L"Account id:";
			// 
			// label_AccountName
			// 
			this->label_AccountName->AutoSize = true;
			this->label_AccountName->Location = System::Drawing::Point(181, 17);
			this->label_AccountName->Name = L"label_AccountName";
			this->label_AccountName->Size = System::Drawing::Size(81, 13);
			this->label_AccountName->TabIndex = 5;
			this->label_AccountName->Text = L"Account Name:";
			// 
			// label_Interest
			// 
			this->label_Interest->AutoSize = true;
			this->label_Interest->Location = System::Drawing::Point(21, 43);
			this->label_Interest->Name = L"label_Interest";
			this->label_Interest->Size = System::Drawing::Size(45, 13);
			this->label_Interest->TabIndex = 6;
			this->label_Interest->Text = L"Interest:";
			// 
			// label_Balance
			// 
			this->label_Balance->AutoSize = true;
			this->label_Balance->Location = System::Drawing::Point(19, 67);
			this->label_Balance->Name = L"label_Balance";
			this->label_Balance->Size = System::Drawing::Size(49, 13);
			this->label_Balance->TabIndex = 7;
			this->label_Balance->Text = L"Balance:";
			// 
			// CSavingsView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label_Balance);
			this->Controls->Add(this->label_Interest);
			this->Controls->Add(this->label_AccountName);
			this->Controls->Add(this->label_AccountId);
			this->Controls->Add(this->textBox_Balance);
			this->Controls->Add(this->textBox_Interest);
			this->Controls->Add(this->textBox_AccountName);
			this->Controls->Add(this->textBox_AccountID);
			this->Name = L"CSavingsView";
			this->Size = System::Drawing::Size(565, 150);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
