#pragma once
#include "UserServices.h"
#include "Session.h"
#include <msclr\marshal_cppstd.h>
#include "ApplicationController.h"

namespace BankingSystemV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(ApplicationController* ac)
		{
			InitializeComponent();
			_ac = ac;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblUserId;
	protected: 
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::TextBox^  txtUserId;
	private: System::Windows::Forms::TextBox^  txtPassword;


	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Label^  lblInvalid;

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
			this->lblUserId = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUserId = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->lblInvalid = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblUserId
			// 
			this->lblUserId->AutoSize = true;
			this->lblUserId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblUserId->Location = System::Drawing::Point(67, 28);
			this->lblUserId->Name = L"lblUserId";
			this->lblUserId->Size = System::Drawing::Size(61, 20);
			this->lblUserId->TabIndex = 5;
			this->lblUserId->Text = L"User Id";
			this->lblUserId->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(50, 63);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(78, 20);
			this->lblPassword->TabIndex = 5;
			this->lblPassword->Text = L"Password";
			// 
			// txtUserId
			// 
			this->txtUserId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtUserId->Location = System::Drawing::Point(134, 25);
			this->txtUserId->Name = L"txtUserId";
			this->txtUserId->Size = System::Drawing::Size(202, 26);
			this->txtUserId->TabIndex = 0;
			this->txtUserId->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtUserId_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(134, 60);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(202, 26);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtPassword_TextChanged);
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(146, 131);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(91, 34);
			this->btnLogin->TabIndex = 2;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// lblInvalid
			// 
			this->lblInvalid->AutoSize = true;
			this->lblInvalid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblInvalid->ForeColor = System::Drawing::Color::Red;
			this->lblInvalid->Location = System::Drawing::Point(116, 101);
			this->lblInvalid->Name = L"lblInvalid";
			this->lblInvalid->Size = System::Drawing::Size(155, 17);
			this->lblInvalid->TabIndex = 6;
			this->lblInvalid->Text = L"Invalid login credentials";
			this->lblInvalid->Visible = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(387, 167);
			this->Controls->Add(this->lblInvalid);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUserId);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUserId);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"Ezy Bank Login";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginForm::LoginForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: 

		ApplicationController* _ac;

		// ------------------------------------------------------------------------------------- //
		// Event Handlers

		// event handler for login button
		System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			
			// check for empty values
			if (this->txtUserId->Text == "" || this->txtPassword->Text == "")
			{
				this->lblInvalid->Visible = true;
				return;
			}
			
			// get values and perform System::String^ to std::string conversion
			msclr::interop::marshal_context context;
			int userId = int::Parse(this->txtUserId->Text);
			std::string password = context.marshal_as<std::string>(this->txtPassword->Text);

			// validate via service
			UserServices* _us = UserServices::instance();
			if (_us->validateUser(userId, password))
			{
				User* u = _us->getUser(userId);
				Session* session = Session::getInstance();
				session->setUser(u);

				_ac->launchAppropriateUserForm(u);
			}
			else
			{
				this->lblInvalid->Visible = true;
			}
			
		}

		// event handler for text changed in userid text box
		System::Void txtUserId_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			// user has changed username so reset errors visibility
			this->lblInvalid->Visible = false;
		}

		// event handler for text changed in password text box
		System::Void txtPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			// user has changed password so reset errors visibility
			this->lblInvalid->Visible = false;
		}

		// closing the form - save data
		System::Void LoginForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
		{
			_ac->saveDataToDataSource();
			int hold = 1;
		}


		// end of Event Handlers
		// ------------------------------------------------------------------------------------- //


};
}
