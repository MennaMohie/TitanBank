#pragma once
#include"Vector.h"

namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Report
	/// </summary>
	public ref class Report : public System::Windows::Forms::Form
	{
	public:
		Report(void)
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
		~Report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  reportGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  opID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OperationType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AmountOfMoney;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;




	protected:

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
			this->reportGrid = (gcnew System::Windows::Forms::DataGridView());
			this->opID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OperationType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AmountOfMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reportGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// reportGrid
			// 
			this->reportGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->reportGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->reportGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->reportGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->opID, this->OperationType,
					this->AmountOfMoney, this->Date
			});
			this->reportGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->reportGrid->Location = System::Drawing::Point(0, 32);
			this->reportGrid->Name = L"reportGrid";
			this->reportGrid->Size = System::Drawing::Size(442, 342);
			this->reportGrid->TabIndex = 0;
			this->reportGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Report::reportGrid_CellContentClick);
			// 
			// opID
			// 
			this->opID->HeaderText = L"Transaction ID";
			this->opID->Name = L"opID";
			// 
			// OperationType
			// 
			this->OperationType->HeaderText = L"Transaction Type";
			this->OperationType->Name = L"OperationType";
			// 
			// AmountOfMoney
			// 
			this->AmountOfMoney->HeaderText = L"Amount $";
			this->AmountOfMoney->Name = L"AmountOfMoney";
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(408, 1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 30;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Report::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(377, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 25);
			this->button5->TabIndex = 29;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Report::button5_Click);
			// 
			// Report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(443, 373);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->reportGrid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Report";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Report";
			this->Load += gcnew System::EventHandler(this, &Report::Report_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reportGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Report_Load(System::Object^  sender, System::EventArgs^  e) {
		map<string, Operation>::iterator it = ve::userOpMap[ve::current_id].begin();
		while (it != ve::userOpMap[ve::current_id].end())
		{
			if (it->second.getAccID() == ve::current_acc)
			{
				reportGrid->Rows->Add(marshal_as<String^>(it->second.getOpID()),
					marshal_as<String^>(it->second.getOpType()),
					marshal_as<String^>(to_string(it->second.getBalanceWithdrawnOrDeposited())),
					marshal_as<String^>(it->second.getOpDate()));

			}
			it++;
		}
		
		
	}
	private: System::Void reportGrid_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
};
}
