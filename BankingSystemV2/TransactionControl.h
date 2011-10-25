#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace INB305_BankingForms {

	/// <summary>
	/// Summary for CTransactions
	/// </summary>
	public ref class CTransactions : public System::Windows::Forms::UserControl
	{
	public:
		CTransactions(void)
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
		~CTransactions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView_Transactions;
	private: System::Windows::Forms::Button^  button_PrintTransactions;
	protected: 


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
			this->dataGridView_Transactions = (gcnew System::Windows::Forms::DataGridView());
			this->button_PrintTransactions = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_Transactions))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_Transactions
			// 
			this->dataGridView_Transactions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Transactions->Location = System::Drawing::Point(3, 0);
			this->dataGridView_Transactions->Name = L"dataGridView_Transactions";
			this->dataGridView_Transactions->Size = System::Drawing::Size(557, 115);
			this->dataGridView_Transactions->TabIndex = 0;
			// 
			// button_PrintTransactions
			// 
			this->button_PrintTransactions->Location = System::Drawing::Point(455, 121);
			this->button_PrintTransactions->Name = L"button_PrintTransactions";
			this->button_PrintTransactions->Size = System::Drawing::Size(105, 23);
			this->button_PrintTransactions->TabIndex = 1;
			this->button_PrintTransactions->Text = L"Print Transactions";
			this->button_PrintTransactions->UseVisualStyleBackColor = true;
			// 
			// CTransactions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button_PrintTransactions);
			this->Controls->Add(this->dataGridView_Transactions);
			this->Name = L"CTransactions";
			this->Size = System::Drawing::Size(570, 159);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_Transactions))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
