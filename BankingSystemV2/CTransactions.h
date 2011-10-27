#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BankingSystemV2 {

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
	private: System::Windows::Forms::Label^  lblTransactions;

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
			this->lblTransactions = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_Transactions))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_Transactions
			// 
			this->dataGridView_Transactions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Transactions->Location = System::Drawing::Point(0, 45);
			this->dataGridView_Transactions->Name = L"dataGridView_Transactions";
			this->dataGridView_Transactions->Size = System::Drawing::Size(570, 115);
			this->dataGridView_Transactions->TabIndex = 0;
			// 
			// lblTransactions
			// 
			this->lblTransactions->AutoSize = true;
			this->lblTransactions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTransactions->Location = System::Drawing::Point(3, 12);
			this->lblTransactions->Name = L"lblTransactions";
			this->lblTransactions->Size = System::Drawing::Size(145, 20);
			this->lblTransactions->TabIndex = 1;
			this->lblTransactions->Text = L"Transaction History";
			// 
			// CTransactions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblTransactions);
			this->Controls->Add(this->dataGridView_Transactions);
			this->Name = L"CTransactions";
			this->Size = System::Drawing::Size(570, 160);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_Transactions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
