#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BankingSystemV2 {

	/// <summary>
	/// Summary for CTransfer
	/// </summary>
	public ref class CTransfer : public System::Windows::Forms::UserControl
	{
	public:
		CTransfer(void)
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
		~CTransfer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox_From;
	private: System::Windows::Forms::ListBox^  listBox_To;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label_From;
	private: System::Windows::Forms::Label^  label_To;
	private: System::Windows::Forms::TextBox^  textBox_Amount;

	private: System::Windows::Forms::Label^  label_Amount;
	private: System::Windows::Forms::Button^  button_Transfer;


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
			this->listBox_From = (gcnew System::Windows::Forms::ListBox());
			this->listBox_To = (gcnew System::Windows::Forms::ListBox());
			this->label_From = (gcnew System::Windows::Forms::Label());
			this->label_To = (gcnew System::Windows::Forms::Label());
			this->textBox_Amount = (gcnew System::Windows::Forms::TextBox());
			this->label_Amount = (gcnew System::Windows::Forms::Label());
			this->button_Transfer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox_From
			// 
			this->listBox_From->FormattingEnabled = true;
			this->listBox_From->Location = System::Drawing::Point(17, 39);
			this->listBox_From->Name = L"listBox_From";
			this->listBox_From->Size = System::Drawing::Size(171, 95);
			this->listBox_From->TabIndex = 0;
			// 
			// listBox_To
			// 
			this->listBox_To->FormattingEnabled = true;
			this->listBox_To->Location = System::Drawing::Point(205, 39);
			this->listBox_To->Name = L"listBox_To";
			this->listBox_To->Size = System::Drawing::Size(188, 95);
			this->listBox_To->TabIndex = 1;
			// 
			// label_From
			// 
			this->label_From->AutoSize = true;
			this->label_From->Location = System::Drawing::Point(20, 18);
			this->label_From->Name = L"label_From";
			this->label_From->Size = System::Drawing::Size(55, 13);
			this->label_From->TabIndex = 2;
			this->label_From->Text = L"From Acc:";
			// 
			// label_To
			// 
			this->label_To->AutoSize = true;
			this->label_To->Location = System::Drawing::Point(209, 18);
			this->label_To->Name = L"label_To";
			this->label_To->Size = System::Drawing::Size(45, 13);
			this->label_To->TabIndex = 3;
			this->label_To->Text = L"To Acc:";
			// 
			// textBox_Amount
			// 
			this->textBox_Amount->Location = System::Drawing::Point(431, 41);
			this->textBox_Amount->Name = L"textBox_Amount";
			this->textBox_Amount->Size = System::Drawing::Size(100, 20);
			this->textBox_Amount->TabIndex = 7;
			// 
			// label_Amount
			// 
			this->label_Amount->AutoSize = true;
			this->label_Amount->Location = System::Drawing::Point(435, 17);
			this->label_Amount->Name = L"label_Amount";
			this->label_Amount->Size = System::Drawing::Size(46, 13);
			this->label_Amount->TabIndex = 8;
			this->label_Amount->Text = L"Amount:";
			// 
			// button_Transfer
			// 
			this->button_Transfer->Location = System::Drawing::Point(456, 97);
			this->button_Transfer->Name = L"button_Transfer";
			this->button_Transfer->Size = System::Drawing::Size(75, 23);
			this->button_Transfer->TabIndex = 9;
			this->button_Transfer->Text = L"Transfer";
			this->button_Transfer->UseVisualStyleBackColor = true;
			// 
			// CTransfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button_Transfer);
			this->Controls->Add(this->label_Amount);
			this->Controls->Add(this->textBox_Amount);
			this->Controls->Add(this->label_To);
			this->Controls->Add(this->label_From);
			this->Controls->Add(this->listBox_To);
			this->Controls->Add(this->listBox_From);
			this->Name = L"CTransfer";
			this->Size = System::Drawing::Size(565, 150);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
