#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BankingSystemV2 {

	/// <summary>
	/// Summary for CCustomerDetails
	/// </summary>
	public ref class CCustomerDetails : public System::Windows::Forms::UserControl
	{
	public:
		CCustomerDetails(void)
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
		~CCustomerDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  grbxPersonalDetails;
	protected: 
	private: System::Windows::Forms::Button^  btnUpdateDetails;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lblCustomerPhone;
	private: System::Windows::Forms::Label^  lblCustomerAddress;
	private: System::Windows::Forms::Label^  lblCustomerName;
	private: System::Windows::Forms::GroupBox^  grbxPassword;
	private: System::Windows::Forms::Button^  btnChangePassword;
	private: System::Windows::Forms::Label^  lblConfirmPassword;
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			this->grbxPersonalDetails = (gcnew System::Windows::Forms::GroupBox());
			this->grbxPassword = (gcnew System::Windows::Forms::GroupBox());
			this->lblCustomerName = (gcnew System::Windows::Forms::Label());
			this->lblCustomerAddress = (gcnew System::Windows::Forms::Label());
			this->lblCustomerPhone = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->btnUpdateDetails = (gcnew System::Windows::Forms::Button());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->grbxPersonalDetails->SuspendLayout();
			this->grbxPassword->SuspendLayout();
			this->SuspendLayout();
			// 
			// grbxPersonalDetails
			// 
			this->grbxPersonalDetails->Controls->Add(this->btnUpdateDetails);
			this->grbxPersonalDetails->Controls->Add(this->textBox3);
			this->grbxPersonalDetails->Controls->Add(this->textBox2);
			this->grbxPersonalDetails->Controls->Add(this->textBox1);
			this->grbxPersonalDetails->Controls->Add(this->lblCustomerPhone);
			this->grbxPersonalDetails->Controls->Add(this->lblCustomerAddress);
			this->grbxPersonalDetails->Controls->Add(this->lblCustomerName);
			this->grbxPersonalDetails->Location = System::Drawing::Point(18, 15);
			this->grbxPersonalDetails->Name = L"grbxPersonalDetails";
			this->grbxPersonalDetails->Size = System::Drawing::Size(454, 189);
			this->grbxPersonalDetails->TabIndex = 6;
			this->grbxPersonalDetails->TabStop = false;
			this->grbxPersonalDetails->Text = L"Personal Details";
			// 
			// grbxPassword
			// 
			this->grbxPassword->Controls->Add(this->btnChangePassword);
			this->grbxPassword->Controls->Add(this->lblConfirmPassword);
			this->grbxPassword->Controls->Add(this->lblPassword);
			this->grbxPassword->Controls->Add(this->textBox5);
			this->grbxPassword->Controls->Add(this->textBox4);
			this->grbxPassword->Location = System::Drawing::Point(18, 220);
			this->grbxPassword->Name = L"grbxPassword";
			this->grbxPassword->Size = System::Drawing::Size(454, 154);
			this->grbxPassword->TabIndex = 7;
			this->grbxPassword->TabStop = false;
			this->grbxPassword->Text = L"Password";
			// 
			// lblCustomerName
			// 
			this->lblCustomerName->AutoSize = true;
			this->lblCustomerName->Location = System::Drawing::Point(75, 30);
			this->lblCustomerName->Name = L"lblCustomerName";
			this->lblCustomerName->Size = System::Drawing::Size(35, 13);
			this->lblCustomerName->TabIndex = 0;
			this->lblCustomerName->Text = L"Name";
			// 
			// lblCustomerAddress
			// 
			this->lblCustomerAddress->AutoSize = true;
			this->lblCustomerAddress->Location = System::Drawing::Point(65, 74);
			this->lblCustomerAddress->Name = L"lblCustomerAddress";
			this->lblCustomerAddress->Size = System::Drawing::Size(45, 13);
			this->lblCustomerAddress->TabIndex = 1;
			this->lblCustomerAddress->Text = L"Address";
			// 
			// lblCustomerPhone
			// 
			this->lblCustomerPhone->AutoSize = true;
			this->lblCustomerPhone->Location = System::Drawing::Point(72, 116);
			this->lblCustomerPhone->Name = L"lblCustomerPhone";
			this->lblCustomerPhone->Size = System::Drawing::Size(38, 13);
			this->lblCustomerPhone->TabIndex = 2;
			this->lblCustomerPhone->Text = L"Phone";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(297, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(297, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(297, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(138, 31);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(290, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(138, 74);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(290, 20);
			this->textBox5->TabIndex = 5;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(57, 34);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(53, 13);
			this->lblPassword->TabIndex = 6;
			this->lblPassword->Text = L"Password";
			// 
			// lblConfirmPassword
			// 
			this->lblConfirmPassword->AutoSize = true;
			this->lblConfirmPassword->Location = System::Drawing::Point(19, 77);
			this->lblConfirmPassword->Name = L"lblConfirmPassword";
			this->lblConfirmPassword->Size = System::Drawing::Size(91, 13);
			this->lblConfirmPassword->TabIndex = 7;
			this->lblConfirmPassword->Text = L"Confirm Password";
			// 
			// btnUpdateDetails
			// 
			this->btnUpdateDetails->Location = System::Drawing::Point(190, 151);
			this->btnUpdateDetails->Name = L"btnUpdateDetails";
			this->btnUpdateDetails->Size = System::Drawing::Size(75, 23);
			this->btnUpdateDetails->TabIndex = 6;
			this->btnUpdateDetails->Text = L"Update Details";
			this->btnUpdateDetails->UseVisualStyleBackColor = true;
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->Location = System::Drawing::Point(176, 111);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(103, 23);
			this->btnChangePassword->TabIndex = 8;
			this->btnChangePassword->Text = L"Change Password";
			this->btnChangePassword->UseVisualStyleBackColor = true;
			// 
			// CCustomerDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->grbxPassword);
			this->Controls->Add(this->grbxPersonalDetails);
			this->Name = L"CCustomerDetails";
			this->Size = System::Drawing::Size(492, 392);
			this->grbxPersonalDetails->ResumeLayout(false);
			this->grbxPersonalDetails->PerformLayout();
			this->grbxPassword->ResumeLayout(false);
			this->grbxPassword->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
