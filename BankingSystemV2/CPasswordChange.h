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
	private: System::Windows::Forms::TextBox^  textBox_OldPassword;
	protected: 
	private: System::Windows::Forms::Label^  label_OldPassword;
	private: System::Windows::Forms::TextBox^  textBox_NewPassword;
	private: System::Windows::Forms::TextBox^  textBox_Confirm;
	private: System::Windows::Forms::Label^  label_NewPassword;
	private: System::Windows::Forms::Label^  label_ConfirmNew;
	private: System::Windows::Forms::Button^  button_Change;

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
			this->textBox_OldPassword = (gcnew System::Windows::Forms::TextBox());
			this->label_OldPassword = (gcnew System::Windows::Forms::Label());
			this->textBox_NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Confirm = (gcnew System::Windows::Forms::TextBox());
			this->label_NewPassword = (gcnew System::Windows::Forms::Label());
			this->label_ConfirmNew = (gcnew System::Windows::Forms::Label());
			this->button_Change = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_OldPassword
			// 
			this->textBox_OldPassword->Location = System::Drawing::Point(141, 57);
			this->textBox_OldPassword->Name = L"textBox_OldPassword";
			this->textBox_OldPassword->Size = System::Drawing::Size(206, 20);
			this->textBox_OldPassword->TabIndex = 0;
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
			// textBox_NewPassword
			// 
			this->textBox_NewPassword->Location = System::Drawing::Point(141, 92);
			this->textBox_NewPassword->Name = L"textBox_NewPassword";
			this->textBox_NewPassword->Size = System::Drawing::Size(206, 20);
			this->textBox_NewPassword->TabIndex = 2;
			// 
			// textBox_Confirm
			// 
			this->textBox_Confirm->Location = System::Drawing::Point(141, 129);
			this->textBox_Confirm->Name = L"textBox_Confirm";
			this->textBox_Confirm->Size = System::Drawing::Size(206, 20);
			this->textBox_Confirm->TabIndex = 3;
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
			// button_Change
			// 
			this->button_Change->Location = System::Drawing::Point(232, 173);
			this->button_Change->Name = L"button_Change";
			this->button_Change->Size = System::Drawing::Size(115, 23);
			this->button_Change->TabIndex = 6;
			this->button_Change->Text = L"Change Password";
			this->button_Change->UseVisualStyleBackColor = true;
			// 
			// CPasswordChange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button_Change);
			this->Controls->Add(this->label_ConfirmNew);
			this->Controls->Add(this->label_NewPassword);
			this->Controls->Add(this->textBox_Confirm);
			this->Controls->Add(this->textBox_NewPassword);
			this->Controls->Add(this->label_OldPassword);
			this->Controls->Add(this->textBox_OldPassword);
			this->Name = L"CPasswordChange";
			this->Size = System::Drawing::Size(584, 343);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
