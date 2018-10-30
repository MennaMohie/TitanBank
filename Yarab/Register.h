#pragma once
#include "Vector.h"
#include "Register.h"

namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  user_txt;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  pass1_txt;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  pass2_txt;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  name_txt;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->user_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pass1_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass2_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// user_txt
			// 
			this->user_txt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_txt->Location = System::Drawing::Point(279, 126);
			this->user_txt->Name = L"user_txt";
			this->user_txt->Size = System::Drawing::Size(228, 27);
			this->user_txt->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(274, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(274, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// pass1_txt
			// 
			this->pass1_txt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass1_txt->Location = System::Drawing::Point(279, 188);
			this->pass1_txt->Name = L"pass1_txt";
			this->pass1_txt->Size = System::Drawing::Size(228, 27);
			this->pass1_txt->TabIndex = 2;
			this->pass1_txt->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(274, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Retype Password";
			// 
			// pass2_txt
			// 
			this->pass2_txt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass2_txt->Location = System::Drawing::Point(279, 249);
			this->pass2_txt->Name = L"pass2_txt";
			this->pass2_txt->Size = System::Drawing::Size(228, 27);
			this->pass2_txt->TabIndex = 4;
			this->pass2_txt->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(271, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 81);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Maroon;
			this->button6->Location = System::Drawing::Point(524, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 26;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Register::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(493, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 25);
			this->button4->TabIndex = 25;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Register::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(274, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 25);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Name";
			// 
			// name_txt
			// 
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt->Location = System::Drawing::Point(279, 68);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(228, 27);
			this->name_txt->TabIndex = 27;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(570, 412);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pass2_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pass1_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->user_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		bool user_flag = true;
		string user = marshal_as<string>(user_txt->Text);
		string name = marshal_as<string>(name_txt->Text);
		string pass1 = marshal_as<string>(pass1_txt->Text);
		string pass2 = marshal_as<string>(pass2_txt->Text);
		if (user.size() == 0 || name.size() == 0 || pass1.size() == 0 || pass2.size() == 0)
		{
			MessageBox::Show("Some data is missing.");
		}
		else
		{
			for (int i = 0; i < ve::usr.size(); i++)
			{
				if (ve::usr[i].userName == user)
				{
					user_flag = false;
					break;
				}
			}
			if (user_flag)
			{
				if (pass1 == pass2)
				{
					User new_user;
					new_user.name = name;
					new_user.password = pass1;
					new_user.userName = user;
					string id = ve::usr[(ve::usr.size()) - 1].id;
					int x = stoi(id);
					x++;
					new_user.id = to_string(x);
					ve::usr.push_back(new_user);
					// Write New Data
					ofstream out;
					out.open("Users.txt");
					int l = ve::usr.size();
					int i, j;
					if (out.is_open())
					{
						for (i = 0; i < l; i++)
						{
							if (i != 0)
								out << endl;
							out << ve::usr[i].id << ' ' << ve::usr[i].name << ' ' << ve::usr[i].userName << ' ' << ve::usr[i].password << ' ' << ' ';
							for (j = 0; j < ve::usr[i].Checklist.size(); j++)
							{
								out << ve::usr[i].Checklist[j] << ' ';
							}
							for (j = 0; j < ve::usr[i].Loanlist.size(); j++)
							{
								out << ve::usr[i].Loanlist[j] << ' ';
							}
							for (j = 0; j < ve::usr[i].Saveist.size(); j++)
							{
								out << ve::usr[i].Saveist[j] << ' ';
							}
						}
					}
					out.close();
					MessageBox::Show("Sucessful Registration");
					////////////////////////////////
				}
				else
				{
					MessageBox::Show("The Password Do Not Match");
				}
			}
			else
			{
				MessageBox::Show("This User Is Already Exist");
			}
		}
	}
};
}
