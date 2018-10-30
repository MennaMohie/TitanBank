#pragma once
#include "Vector.h"
#include "First.h"
namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  datag;
	private: System::Windows::Forms::Button^  users;
	protected:


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TransactionID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TransactionType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Amount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::Button^  Accounts;
	private: System::Windows::Forms::DataGridView^  use;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  UserID;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;





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
			this->datag = (gcnew System::Windows::Forms::DataGridView());
			this->TransactionID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TransactionType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->users = (gcnew System::Windows::Forms::Button());
			this->Accounts = (gcnew System::Windows::Forms::Button());
			this->use = (gcnew System::Windows::Forms::DataGridView());
			this->UserID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datag))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->use))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// datag
			// 
			this->datag->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datag->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->TransactionID,
					this->TransactionType, this->Amount, this->Date
			});
			this->datag->Location = System::Drawing::Point(281, 31);
			this->datag->Name = L"datag";
			this->datag->Size = System::Drawing::Size(434, 337);
			this->datag->TabIndex = 0;
			this->datag->Visible = false;
			this->datag->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Admin::dataGridView1_CellContentClick);
			// 
			// TransactionID
			// 
			this->TransactionID->HeaderText = L"Transaction ID";
			this->TransactionID->Name = L"TransactionID";
			// 
			// TransactionType
			// 
			this->TransactionType->HeaderText = L"Transaction Type";
			this->TransactionType->Name = L"TransactionType";
			// 
			// Amount
			// 
			this->Amount->HeaderText = L"Amount $";
			this->Amount->Name = L"Amount";
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			// 
			// users
			// 
			this->users->FlatAppearance->BorderSize = 0;
			this->users->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->users->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36));
			this->users->ForeColor = System::Drawing::Color::Coral;
			this->users->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->users->Location = System::Drawing::Point(0, 3);
			this->users->Name = L"users";
			this->users->Size = System::Drawing::Size(283, 170);
			this->users->TabIndex = 1;
			this->users->Text = L"users";
			this->users->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->users->UseVisualStyleBackColor = true;
			this->users->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// Accounts
			// 
			this->Accounts->FlatAppearance->BorderSize = 0;
			this->Accounts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Accounts->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36));
			this->Accounts->ForeColor = System::Drawing::Color::Coral;
			this->Accounts->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Accounts->Location = System::Drawing::Point(2, 200);
			this->Accounts->Margin = System::Windows::Forms::Padding(2);
			this->Accounts->Name = L"Accounts";
			this->Accounts->Size = System::Drawing::Size(284, 168);
			this->Accounts->TabIndex = 2;
			this->Accounts->Text = L"Report";
			this->Accounts->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Accounts->UseVisualStyleBackColor = true;
			this->Accounts->Click += gcnew System::EventHandler(this, &Admin::Accounts_Click);
			// 
			// use
			// 
			this->use->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->use->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->UserID });
			this->use->Location = System::Drawing::Point(281, 107);
			this->use->Margin = System::Windows::Forms::Padding(2);
			this->use->Name = L"use";
			this->use->RowTemplate->Height = 24;
			this->use->Size = System::Drawing::Size(444, 261);
			this->use->TabIndex = 3;
			this->use->Visible = false;
			// 
			// UserID
			// 
			this->UserID->HeaderText = L"User ID";
			this->UserID->Name = L"UserID";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button6->Location = System::Drawing::Point(681, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 26;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Admin::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button4->Location = System::Drawing::Point(650, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 25);
			this->button4->TabIndex = 25;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Admin::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->Accounts);
			this->panel1->Controls->Add(this->users);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36));
			this->panel1->ForeColor = System::Drawing::Color::Coral;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 400);
			this->panel1->TabIndex = 27;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel1_Paint);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Coral;
			this->ClientSize = System::Drawing::Size(717, 366);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->use);
			this->Controls->Add(this->datag);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datag))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->use))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
		/*map< string, map<string, Operation> >::iterator i = ve::userOpMap.begin();
		for (;i != ve::userOpMap.end();i++)
		{
			map<string, Operation>::iterator it = i->second.begin();
			use->Rows->Add(marshal_as<String^>(i->first));
			while (it != i->second.end())
			{

				datag->Rows->Add(marshal_as<String^>(it->second.getOpID()),
					marshal_as<String^>(it->second.getOpType()),
					marshal_as<String^>(to_string(it->second.getBalanceWithdrawnOrDeposited())),
					marshal_as<String^>(it->second.getOpDate()));
				it++;
			}
		}*/

		

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		use->Visible = 1;
		datag->Visible = 0;

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void Accounts_Click(System::Object^  sender, System::EventArgs^  e) {
		use->Visible = false;
		datag->Visible = true;
		for (int i = 0; i < ve::usr.size(); i++)
		{
			string id = ve::usr[i].id;
			map<string, Operation>::iterator it = ve::userOpMap[id].begin();

			while (it != ve::userOpMap[id].end())
			{
				if (it->second.getAccID() == id)
				{
					datag->Rows->Add(marshal_as<String^>(it->second.getOpID()),
						marshal_as<String^>(it->second.getOpType()),
						marshal_as<String^>(to_string(it->second.getBalanceWithdrawnOrDeposited())),
						marshal_as<String^>(it->second.getOpDate()));

				}
				it++;
			}
		}
		
		

	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;

}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
