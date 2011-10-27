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
	public: System::Windows::Forms::Button^  btnUpdateDetails;
	private: 

	private: 
	protected: 

	public: System::Windows::Forms::TextBox^  txtCustomerAddress;
	public: System::Windows::Forms::TextBox^  txtCustomerPhone;
	public: System::Windows::Forms::TextBox^  txtCustomerName;
	public: System::Windows::Forms::Label^  lblCustomerPhone;
	public: System::Windows::Forms::Label^  lblCustomerAddress;
	public: System::Windows::Forms::Label^  lblCustomerName;
	public: System::Windows::Forms::GroupBox^  grbxPassword;
	public: System::Windows::Forms::Button^  btnChangePassword;
	public: System::Windows::Forms::Label^  lblConfirmPassword;
	public: System::Windows::Forms::Label^  lblPassword;
	public: System::Windows::Forms::TextBox^  txtPassword;
	public: System::Windows::Forms::TextBox^  txtConfirmPassword;


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
			this->btnUpdateDetails = (gcnew System::Windows::Forms::Button());
			this->txtCustomerAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerName = (gcnew System::Windows::Forms::TextBox());
			this->lblCustomerPhone = (gcnew System::Windows::Forms::Label());
			this->lblCustomerAddress = (gcnew System::Windows::Forms::Label());
			this->lblCustomerName = (gcnew System::Windows::Forms::Label());
			this->grbxPassword = (gcnew System::Windows::Forms::GroupBox());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->lblConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->grbxPersonalDetails->SuspendLayout();
			this->grbxPassword->SuspendLayout();
			this->SuspendLayout();
			// 
			// grbxPersonalDetails
			// 
			this->grbxPersonalDetails->Controls->Add(this->btnUpdateDetails);
			this->grbxPersonalDetails->Controls->Add(this->txtCustomerAddress);
			this->grbxPersonalDetails->Controls->Add(this->txtCustomerPhone);
			this->grbxPersonalDetails->Controls->Add(this->txtCustomerName);
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
			// btnUpdateDetails
			// 
			this->btnUpdateDetails->Location = System::Drawing::Point(190, 151);
			this->btnUpdateDetails->Name = L"btnUpdateDetails";
			this->btnUpdateDetails->Size = System::Drawing::Size(75, 23);
			this->btnUpdateDetails->TabIndex = 3;
			this->btnUpdateDetails->Text = L"Update Details";
			this->btnUpdateDetails->UseVisualStyleBackColor = true;
			// 
			// txtCustomerAddress
			// 
			this->txtCustomerAddress->Location = System::Drawing::Point(131, 71);
			this->txtCustomerAddress->Name = L"txtCustomerAddress";
			this->txtCustomerAddress->Size = System::Drawing::Size(297, 20);
			this->txtCustomerAddress->TabIndex = 1;
			// 
			// txtCustomerPhone
			// 
			this->txtCustomerPhone->Location = System::Drawing::Point(131, 113);
			this->txtCustomerPhone->Name = L"txtCustomerPhone";
			this->txtCustomerPhone->Size = System::Drawing::Size(297, 20);
			this->txtCustomerPhone->TabIndex = 2;
			// 
			// txtCustomerName
			// 
			this->txtCustomerName->Location = System::Drawing::Point(131, 27);
			this->txtCustomerName->Name = L"txtCustomerName";
			this->txtCustomerName->Size = System::Drawing::Size(297, 20);
			this->txtCustomerName->TabIndex = 0;
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
			// lblCustomerAddress
			// 
			this->lblCustomerAddress->AutoSize = true;
			this->lblCustomerAddress->Location = System::Drawing::Point(65, 74);
			this->lblCustomerAddress->Name = L"lblCustomerAddress";
			this->lblCustomerAddress->Size = System::Drawing::Size(45, 13);
			this->lblCustomerAddress->TabIndex = 1;
			this->lblCustomerAddress->Text = L"Address";
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
			// grbxPassword
			// 
			this->grbxPassword->Controls->Add(this->btnChangePassword);
			this->grbxPassword->Controls->Add(this->lblConfirmPassword);
			this->grbxPassword->Controls->Add(this->lblPassword);
			this->grbxPassword->Controls->Add(this->txtConfirmPassword);
			this->grbxPassword->Controls->Add(this->txtPassword);
			this->grbxPassword->Location = System::Drawing::Point(18, 220);
			this->grbxPassword->Name = L"grbxPassword";
			this->grbxPassword->Size = System::Drawing::Size(454, 154);
			this->grbxPassword->TabIndex = 7;
			this->grbxPassword->TabStop = false;
			this->grbxPassword->Text = L"Password";
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->Location = System::Drawing::Point(176, 111);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(103, 23);
			this->btnChangePassword->TabIndex = 6;
			this->btnChangePassword->Text = L"Change Password";
			this->btnChangePassword->UseVisualStyleBackColor = true;
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
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(57, 34);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(53, 13);
			this->lblPassword->TabIndex = 6;
			this->lblPassword->Text = L"Password";
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Location = System::Drawing::Point(138, 74);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(290, 20);
			this->txtConfirmPassword->TabIndex = 5;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(138, 31);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(290, 20);
			this->txtPassword->TabIndex = 4;
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
