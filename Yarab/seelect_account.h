#pragma once
#include "Vector.h"
#include "Select.h"
namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for seelect_account
	/// </summary>
	public ref class seelect_account : public System::Windows::Forms::Form
	{
	public:
		seelect_account(void)
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
		~seelect_account()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  check_btn;
	private: System::Windows::Forms::Button^  save_btn;
	private: System::Windows::Forms::Button^  loan_btn;
	protected:



	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  balance;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  amount;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  loan_txt;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(seelect_account::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->check_btn = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->loan_btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->loan_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->amount = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->balance = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->check_btn);
			this->panel1->Controls->Add(this->save_btn);
			this->panel1->Controls->Add(this->loan_btn);
			this->panel1->Location = System::Drawing::Point(-4, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 341);
			this->panel1->TabIndex = 8;
			// 
			// check_btn
			// 
			this->check_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->check_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->check_btn->FlatAppearance->BorderSize = 0;
			this->check_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->check_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->check_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->check_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"check_btn.Image")));
			this->check_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->check_btn->Location = System::Drawing::Point(6, 2);
			this->check_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->check_btn->Name = L"check_btn";
			this->check_btn->Size = System::Drawing::Size(269, 115);
			this->check_btn->TabIndex = 0;
			this->check_btn->Text = L"Check";
			this->check_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->check_btn->UseVisualStyleBackColor = false;
			this->check_btn->Click += gcnew System::EventHandler(this, &seelect_account::check_btn_Click);
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->save_btn->FlatAppearance->BorderSize = 0;
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->save_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->save_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"save_btn.Image")));
			this->save_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->save_btn->Location = System::Drawing::Point(0, 119);
			this->save_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(272, 100);
			this->save_btn->TabIndex = 1;
			this->save_btn->Text = L"Saving";
			this->save_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &seelect_account::save_btn_Click);
			// 
			// loan_btn
			// 
			this->loan_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->loan_btn->FlatAppearance->BorderSize = 0;
			this->loan_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loan_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->loan_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->loan_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loan_btn.Image")));
			this->loan_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->loan_btn->Location = System::Drawing::Point(0, 223);
			this->loan_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->loan_btn->Name = L"loan_btn";
			this->loan_btn->Size = System::Drawing::Size(275, 115);
			this->loan_btn->TabIndex = 2;
			this->loan_btn->Text = L"Loan";
			this->loan_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->loan_btn->UseVisualStyleBackColor = false;
			this->loan_btn->Click += gcnew System::EventHandler(this, &seelect_account::loan_btn_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->loan_txt);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->amount);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->balance);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(261, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(414, 340);
			this->panel2->TabIndex = 9;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &seelect_account::panel2_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Brown;
			this->label3->Location = System::Drawing::Point(200, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 19);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Enter Loan Duration";
			// 
			// loan_txt
			// 
			this->loan_txt->BackColor = System::Drawing::Color::LightGray;
			this->loan_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->loan_txt->Cursor = System::Windows::Forms::Cursors::Default;
			this->loan_txt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loan_txt->Location = System::Drawing::Point(201, 198);
			this->loan_txt->Name = L"loan_txt";
			this->loan_txt->Size = System::Drawing::Size(190, 27);
			this->loan_txt->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Brown;
			this->label2->Location = System::Drawing::Point(200, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 19);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Enter PrincipalAmount";
			// 
			// amount
			// 
			this->amount->BackColor = System::Drawing::Color::LightGray;
			this->amount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->amount->Cursor = System::Windows::Forms::Cursors::Default;
			this->amount->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount->Location = System::Drawing::Point(201, 133);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(190, 27);
			this->amount->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(200, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 19);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Enter The Balance";
			// 
			// balance
			// 
			this->balance->BackColor = System::Drawing::Color::LightGray;
			this->balance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->balance->Cursor = System::Windows::Forms::Cursors::Default;
			this->balance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balance->Location = System::Drawing::Point(201, 58);
			this->balance->Name = L"balance";
			this->balance->Size = System::Drawing::Size(190, 27);
			this->balance->TabIndex = 31;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Agency FB", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(204, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 109);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Add";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &seelect_account::button5_Click);
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
			this->button6->Location = System::Drawing::Point(377, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 26;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &seelect_account::button6_Click);
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
			this->button4->Location = System::Drawing::Point(346, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 25);
			this->button4->TabIndex = 25;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &seelect_account::button4_Click);
			// 
			// seelect_account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 339);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"seelect_account";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"seelect_account";
			this->Load += gcnew System::EventHandler(this, &seelect_account::seelect_account_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void seelect_account_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->Visible = false;
		label2->Visible = false;
		balance->Visible = false;
		amount->Visible = false;
		label3->Visible = false;
		loan_txt->Visible = false;
	}
	private: System::Void check_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Visible = true;
		balance->Visible = true;
		amount->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		loan_txt->Visible = false;
		ve::choose = 1;

	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		
		if (ve::choose == 1)
		{

			string bal = marshal_as<string>(balance->Text);
			if (bal.size() <= 0)
			{
				MessageBox::Show("Please Enter Correct Data");
			}
			else
			{
				double ba = stod(bal);
				DateTime d;
				string nowdate = marshal_as<string>(d.Now.ToString());
				string month, day, year;
				bool f = false;
				for (int i = 0; i < nowdate.size(); i++)
				{
					if (nowdate[i] == '/'&&f) {
						year += nowdate[i + 1];
						year += nowdate[i + 2]; year += nowdate[i + 3];
						year += nowdate[i + 4]; break;
					}
					else if (nowdate[i] == '/') { f = true; continue; }
					if (f == 0)
					{
						month += nowdate[i];
					}
					if (f == 1)
					{
						day += nowdate[i];
					}
				}
				string date = day + '/' + month + '/' + year;

				string tmp, id, id_usr;
				vector<int>vec;
				int ID = 1;
				map<string, CheckingAccount>::iterator it;

				if (ve::checkMap.size() == 0)
				{
					ID = 1;
				}
				for (it = ve::checkMap.begin(); it != ve::checkMap.end(); it++)
				{
					string s = (it->first);
					string ins;
					for (int i = 1; i < s.size(); i++)
					{
						ins += s[i];
					}
					vec.push_back(stod(ins));
				}
				sort(vec.begin(), vec.end());
				ID = vec[vec.size() - 1];
				ID++;
				id_usr = 'C' + to_string(ID);
				ve::checkMap[id_usr].creationDate = date;
				ve::checkMap[id_usr].balance = ba;
				ve::checkMap[id_usr].accountID = id_usr;
				ve::current_user.Checklist.push_back(id_usr);
				for (int i = 0; i < ve::usr.size(); i++)
				{
					if (ve::usr[i].id == ve::current_id)
					{
						ve::usr[i].Checklist.push_back(id_usr);
					}
				}
				MessageBox::Show("Operation Done");
			}
		}

		else if (ve::choose == 2)
		{
			string bal = marshal_as<string>(balance->Text);
			if (bal.size() <= 0)
			{
				MessageBox::Show("Please Enter Correct Data");
			}
			else
			{

				double ba = stod(bal);
				DateTime d;
				string nowdate = marshal_as<string>(d.Now.ToString());
				string month, day, year;
				bool f = false;
				for (int i = 0; i < nowdate.size(); i++)
				{
					if (nowdate[i] == '/'&&f) {
						year += nowdate[i + 1];
						year += nowdate[i + 2]; year += nowdate[i + 3];
						year += nowdate[i + 4]; break;
					}
					else if (nowdate[i] == '/') { f = true; continue; }
					if (f == 0)
					{
						month += nowdate[i];
					}
					if (f == 1)
					{
						day += nowdate[i];
					}
				}
				string date = day + '/' + month + '/' + year;

				string tmp, id, id_usr;
				vector<int>vec;
				map<string, SavingAccount>::iterator it;
				int ID = 1;
				if (ve::saveMap.size() == 0)
				{
					ID = 1;
				}
				else
				{
					for (it = ve::saveMap.begin(); it != ve::saveMap.end(); it++)
					{
						string s = (it->first);
						string ins;
						for (int i = 1; i < s.size(); i++)
						{
							ins += s[i];
						}
						vec.push_back(stod(ins));
					}
					sort(vec.begin(), vec.end());
					ID = vec[vec.size() - 1];
					ID++;
				}
				id_usr = 'S' + to_string(ID);
				ve::saveMap[id_usr].creationDate = date;
				ve::saveMap[id_usr].balance = ba;
				ve::saveMap[id_usr].accountID = id_usr;
				ve::current_user.Saveist.push_back(id_usr);
				for (int i = 0; i < ve::usr.size(); i++)
				{
					if (ve::usr[i].id == ve::current_id)
					{
						ve::usr[i].Saveist.push_back(id_usr);
					}
				}
				MessageBox::Show("Operation Done");
			}
		}

		else if (ve::choose == 3)
		{

			string duration = marshal_as<string>(loan_txt->Text);
			string prin = marshal_as<string>(amount->Text);
			if (prin.size() <= 0 || duration.size() <= 0)
			{
				MessageBox::Show("Please Enter Correct Data");
			}
			else
			{
				DateTime d;
				string nowdate = marshal_as<string>(d.Now.ToString());
				string month, day, year;
				bool f = false;
				string tmp, id, id_usr;
				for (int i = 0; i < nowdate.size(); i++)
				{
					if (nowdate[i] == '/'&&f) {
						year += nowdate[i + 1];
						year += nowdate[i + 2]; year += nowdate[i + 3];
						year += nowdate[i + 4]; break;
					}
					else if (nowdate[i] == '/') { f = true; continue; }
					if (f == 0)
					{
						month += nowdate[i];
					}
					if (f == 1)
					{
						day += nowdate[i];
					}
				}
				string date = day + '/' + month + '/' + year;
				vector<int>vec;
				map<string, LoanAccount>::iterator it;
				int	ID = 1;
				if (ve::loanMap.size() == 0)
				{
					ID = 1;
				}
				else
				{
					for (it = ve::loanMap.begin(); it != ve::loanMap.end(); it++)
					{
						string s = (it->first);
						string ins;
						for (int i = 1; i < s.size(); i++)
						{
							ins += s[i];
						}
						vec.push_back(stod(ins));
					}
					sort(vec.begin(), vec.end());
					ID = vec[vec.size() - 1];
					ID++;
				}
				id_usr = 'L' + to_string(ID);
				ve::loanMap[id_usr].creationDate = date;
				ve::loanMap[id_usr].balance = 0;
				ve::loanMap[id_usr].accountID = id_usr;
				ve::loanMap[id_usr].loanDuration = stod(duration);
				ve::loanMap[id_usr].principalAmount = stod(prin);
				ve::current_user.Loanlist.push_back(id_usr);
				ve::loanMap[id_usr].interestRate = 0.13;

				for (int i = 0; i < ve::usr.size(); i++)
				{
					if (ve::usr[i].id == ve::current_id)
					{
						ve::usr[i].Loanlist.push_back(id_usr);
					}
				}
				MessageBox::Show("Operation Done");
			}
		}
	}
	private: System::Void save_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		label1->Visible = true;
		balance->Visible = true;
		amount->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		loan_txt->Visible = false;
		ve::choose = 2;
	}
	private: System::Void loan_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Visible = false;
		balance->Visible = false;
		amount->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		loan_txt->Visible = true;
		ve::choose = 3;
	}
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
};
}
