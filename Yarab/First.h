#pragma once
#include "User.h"
#include"Adminn.h"
#include "Vector.h"
#include <msclr\marshal_cppstd.h>
#include "Select.h"
#include "Register.h"
using namespace System;
using namespace msclr::interop;

namespace Yarab
{


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Firsy
	/// </summary>
	public ref class Firsy : public System::Windows::Forms::Form
	{
	public:
		Firsy(void)
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
		~Firsy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  password;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(284, 314);
			this->button1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(316, 54);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Firsy::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(20, 138);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 49);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Password";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->password->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(24, 188);
			this->password->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(317, 39);
			this->password->TabIndex = 7;
			this->password->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(20, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 49);
			this->label1->TabIndex = 6;
			this->label1->Text = L"User Name";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->name->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(24, 91);
			this->name->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(317, 39);
			this->name->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->name);
			this->panel1->Location = System::Drawing::Point(257, 47);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(375, 261);
			this->panel1->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(-3, -4);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(233, 426);
			this->panel2->TabIndex = 11;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Firsy::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"D:\\Yarab\\3425c832-3a31-43a4-8130-44a51615548e.png";
			this->pictureBox1->Location = System::Drawing::Point(0, 118);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(240, 193);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(367, 386);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Sign Up Now";
			this->label3->Click += gcnew System::EventHandler(this, &Firsy::label3_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(596, 9);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 31);
			this->button6->TabIndex = 22;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Firsy::button6_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(555, 9);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 31);
			this->button4->TabIndex = 21;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Firsy::button4_Click);
			// 
			// Firsy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(641, 423);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Firsy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Firsy";
			this->Load += gcnew System::EventHandler(this, &Firsy::Firsy_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void loadUsersFile()
	{
		string line;
		ifstream fin;
		fin.open(("Users.txt"));
		if (fin.is_open())
		{
			while (getline(fin, line))
			{
				User use;
				stringstream ss(line);
				vector <string> v;
				while (getline(ss, line, ' '))
				{
					v.push_back(line);
				}
				use.id = v[0];
				use.name = v[1];
				use.userName = v[2];
				use.password = v[3];
				for (int i = 4; i < v.size(); i++)
				{
					if (v[i][0] == 'C')
					{
						use.Checklist.push_back(v[i]);
					}
					else if (v[i][0] == 'S')
					{
						use.Saveist.push_back(v[i]);
					}
					else if (v[i][0] == 'L')
					{
						use.Loanlist.push_back(v[i]);
					}
				}
				ve::usr.push_back(use);
			}
		}
		fin.close();
	}

	private: void loadAdminsFile()
	{
		string line;
		ifstream fin;
		fin.open(("Admin.txt"));
		if (fin.is_open())
		{
			while (getline(fin, line))
			{
				admin use;
				stringstream ss(line);
				vector <string> v;
				while (getline(ss, line, ' '))
				{
					v.push_back(line);
				}
				use.id = v[0];
				use.userName = v[1];
				use.password = v[2];
				ve::admins[use.userName] = use;
				
			}
		}
		fin.close();
	}
	public: void loadAccFile()
	{
		string line;
		ifstream stream;
		stream.open("Accounts.txt");
		if (stream.is_open())
		{
			while (getline(stream, line))
			{
				stringstream ss(line);
				vector<string> v;
				CheckingAccount checkAcc;
				SavingAccount saveAcc;
				LoanAccount loanAcc;
				while (getline(ss, line, ' '))
				{
					v.push_back(line);
				}
				if (v[0][0] == 'C')
				{
					checkAcc.accountID = v[0];
					checkAcc.creationDate = v[1];
					checkAcc.balance = stod(v[2]);
					checkAcc.instance = stod(v[3]);
					ve::checkMap[v[0]] = checkAcc;

				}
				else if (v[0][0] == 'L')
				{
					loanAcc.accountID = v[0];
					loanAcc.creationDate = v[1];
					loanAcc.principalAmount = stod(v[2]);
					loanAcc.balance = stod(v[3]);
					loanAcc.interestRate = stod(v[4]);
					loanAcc.loanDuration = stol(v[5]);
					
					DateTime d;
					string nowdate = marshal_as<string>(d.Now.ToString());
					loanAcc.decrease(nowdate);
					
					ve::loanMap[v[0]] = loanAcc;
				}

				else if (v[0][0] == 'S')
				{
					saveAcc.accountID = v[0];
					saveAcc.creationDate = v[1];
					saveAcc.balance = stod(v[2]);
					saveAcc.rate = stod(v[3]);
					
						DateTime d;
						string nowdate = marshal_as<string>(d.Now.ToString());
						saveAcc.increase(nowdate);
					
					ve::saveMap[v[0]] = saveAcc;
					//MessageBox::Show(marshal_as<String^>(ve::saveMap[v[0]].creationDate));
				}


			}
		}
		stream.close();
	}

	public: void loadOpFile()
	{
		string line;
		ifstream stream;
		stream.open("Operations.txt");
		if (stream.is_open())
		{
			while (getline(stream, line))
			{
				stringstream ss(line);
				vector<string> v;
				while (getline(ss, line, ' '))
				{
					v.push_back(line);
				}
				Operation op(v[0], v[1], v[2], stod(v[3]), v[4], v[5]);
				ve::userOpMap[v[1]][v[0]] = op;
			}
		}
		stream.close();
	}

	private: System::Void Firsy_Load(System::Object^  sender, System::EventArgs^  e)
	{
		loadUsersFile();
		loadAccFile();
		loadOpFile();
		loadAdminsFile();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nm = name->Text;
		bool flag = false;
		String^ pass = password->Text;
		string nn = marshal_as<string>(nm);
		string pp = marshal_as<string>(pass);
		for (int i = 0; i < ve::usr.size(); i++)
		{
			User u = ve::usr[i];
			if (u.userName == nn&&u.password == pp)
			{
				flag = true;
				ve::current_user = u;
				ve::current_id = ve::usr[i].id;
				break;
			}
		}
		if (flag == true)
		{

			Yarab::Select s;
			this->Hide();
			s.ShowDialog();
		}
		else if (ve::admins.find(nn) != ve::admins.end()&& ve::admins[nn].password==pp)
		{
			//ve::current_id = ve::admins[nn].id;
			Yarab::Adminn a;
			this->Hide();
			a.ShowDialog();
		}
		else
		{
			MessageBox::Show("Please Enter The Data Correct");
		}
	}


	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
		
		
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	Yarab::Register d;
	d.ShowDialog();
	
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
	}
