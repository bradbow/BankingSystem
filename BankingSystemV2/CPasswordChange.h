#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BankingSystemV2 {

	/// <summary>
	/// Summary for CPasswordChange
	/// </summary>
	public ref class CPasswordChange : public System::Windows::Forms::UserControl
	{
	public:
		CPasswordChange(void)
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
		~CPasswordChange()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  txtOldPassword;
	protected: 

	protected: 
	public: System::Windows::Forms::Label^  label_OldPassword;
	public: System::Windows::Forms::TextBox^  txtNewPassword;
	public: System::Windows::Forms::TextBox^  txtConfirmNewPassword;


	public: System::Windows::Forms::Label^  label_NewPassword;
	public: System::Windows::Forms::Label^  label_ConfirmNew;
	public: System::Windows::Forms::Button^  btnChange;


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
			this->txtOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->label_OldPassword = (gcnew System::Windows::Forms::Label());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->label_NewPassword = (gcnew System::Windows::Forms::Label());
			this->label_ConfirmNew = (gcnew System::Windows::Forms::Label());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtOldPassword
			// 
			this->txtOldPassword->Location = System::Drawing::Point(141, 57);
			this->txtOldPassword->Name = L"txtOldPassword";
			this->txtOldPassword->PasswordChar = '*';
			this->txtOldPassword->Size = System::Drawing::Size(206, 20);
			this->txtOldPassword->TabIndex = 0;
			// 
			// label_OldPassword
			// 
			this->label_OldPassword->AutoSize = true;
			this->label_OldPassword->Location = System::Drawing::Point(54, 57);
			this->label_OldPassword->Name = L"label_OldPassword";
			this->label_OldPassword->Size = System::Drawing::Size(75, 13);
			this->label_OldPassword->TabIndex = 1;
			this->label_OldPassword->Text = L"Old Password:";
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Location = System::Drawing::Point(141, 92);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->PasswordChar = '*';
			this->txtNewPassword->Size = System::Drawing::Size(206, 20);
			this->txtNewPassword->TabIndex = 2;
			// 
			// txtConfirmNewPassword
			// 
			this->txtConfirmNewPassword->Location = System::Drawing::Point(141, 129);
			this->txtConfirmNewPassword->Name = L"txtConfirmNewPassword";
			this->txtConfirmNewPassword->PasswordChar = '*';
			this->txtConfirmNewPassword->Size = System::Drawing::Size(206, 20);
			this->txtConfirmNewPassword->TabIndex = 3;
			// 
			// label_NewPassword
			// 
			this->label_NewPassword->AutoSize = true;
			this->label_NewPassword->Location = System::Drawing::Point(54, 95);
			this->label_NewPassword->Name = L"label_NewPassword";
			this->label_NewPassword->Size = System::Drawing::Size(81, 13);
			this->label_NewPassword->TabIndex = 4;
			this->label_NewPassword->Text = L"New Password:";
			// 
			// label_ConfirmNew
			// 
			this->label_ConfirmNew->AutoSize = true;
			this->label_ConfirmNew->Location = System::Drawing::Point(17, 132);
			this->label_ConfirmNew->Name = L"label_ConfirmNew";
			this->label_ConfirmNew->Size = System::Drawing::Size(119, 13);
			this->label_ConfirmNew->TabIndex = 5;
			this->label_ConfirmNew->Text = L"Confirm New Password:";
			// 
			// btnChange
			// 
			this->btnChange->Location = System::Drawing::Point(232, 173);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(115, 23);
			this->btnChange->TabIndex = 6;
			this->btnChange->Text = L"Change Password";
			this->btnChange->UseVisualStyleBackColor = true;
			// 
			// CPasswordChange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->label_ConfirmNew);
			this->Controls->Add(this->label_NewPassword);
			this->Controls->Add(this->txtConfirmNewPassword);
			this->Controls->Add(this->txtNewPassword);
			this->Controls->Add(this->label_OldPassword);
			this->Controls->Add(this->txtOldPassword);
			this->Name = L"CPasswordChange";
			this->Size = System::Drawing::Size(584, 343);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
