#pragma once
#include "Vector.h"
#include"LoanForm.h"
#include "seelect_account.h"
#include"CheckForm.h"
#include"SaveForm.h"
#include"First.h"



#include <cliext/list>
namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Select
	/// </summary>
	public ref class Select : public System::Windows::Forms::Form
	{
		 
	public:
		Select(void)
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
		~Select()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label3;
	public:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::ComboBox^  Savebox;
	public: System::Windows::Forms::ComboBox^  loanbox;
	public: System::Windows::Forms::ComboBox^  checkbox;


	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  delete_btn;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Select::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Savebox = (gcnew System::Windows::Forms::ComboBox());
			this->loanbox = (gcnew System::Windows::Forms::ComboBox());
			this->checkbox = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->label3->Location = System::Drawing::Point(84, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 30);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Loan Account";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->label2->Location = System::Drawing::Point(83, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 30);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Save Account";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 30);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Check Account";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(272, 163);
			this->button1->TabIndex = 13;
			this->button1->Text = L"   Select";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Select::button1_Click);
			// 
			// Savebox
			// 
			this->Savebox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->Savebox->FormattingEnabled = true;
			this->Savebox->Location = System::Drawing::Point(88, 191);
			this->Savebox->Name = L"Savebox";
			this->Savebox->Size = System::Drawing::Size(198, 38);
			this->Savebox->TabIndex = 12;
			this->Savebox->SelectedIndexChanged += gcnew System::EventHandler(this, &Select::Savebox_SelectedIndexChanged);
			// 
			// loanbox
			// 
			this->loanbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->loanbox->FormattingEnabled = true;
			this->loanbox->Location = System::Drawing::Point(89, 283);
			this->loanbox->Name = L"loanbox";
			this->loanbox->Size = System::Drawing::Size(197, 38);
			this->loanbox->TabIndex = 11;
			this->loanbox->SelectedIndexChanged += gcnew System::EventHandler(this, &Select::loanbox_SelectedIndexChanged);
			// 
			// checkbox
			// 
			this->checkbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkbox->FormattingEnabled = true;
			this->checkbox->Location = System::Drawing::Point(89, 96);
			this->checkbox->Name = L"checkbox";
			this->checkbox->Size = System::Drawing::Size(197, 38);
			this->checkbox->TabIndex = 10;
			this->checkbox->SelectedIndexChanged += gcnew System::EventHandler(this, &Select::checkbox_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->delete_btn);
			this->panel1->Controls->Add(this->btn_add);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 420);
			this->panel1->TabIndex = 25;
			// 
			// delete_btn
			// 
			this->delete_btn->FlatAppearance->BorderSize = 0;
			this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36));
			this->delete_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->delete_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_btn.Image")));
			this->delete_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delete_btn->Location = System::Drawing::Point(0, 292);
			this->delete_btn->Margin = System::Windows::Forms::Padding(2);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(273, 110);
			this->delete_btn->TabIndex = 30;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &Select::delete_btn_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_add->FlatAppearance->BorderSize = 0;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btn_add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add.Image")));
			this->btn_add->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_add->Location = System::Drawing::Point(3, 166);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(280, 126);
			this->btn_add->TabIndex = 29;
			this->btn_add->Text = L"Add";
			this->btn_add->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Select::btn_add_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(50, 96);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 38);
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(49, 191);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 38);
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(50, 283);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(33, 38);
			this->pictureBox4->TabIndex = 28;
			this->pictureBox4->TabStop = false;
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
			this->button4->Location = System::Drawing::Point(294, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 25);
			this->button4->TabIndex = 23;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Select::button4_Click);
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
			this->button6->Location = System::Drawing::Point(325, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 24;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Select::button6_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->checkbox);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->loanbox);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->Savebox);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(278, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(362, 402);
			this->panel2->TabIndex = 29;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Select::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(44, 41);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Select::pictureBox1_Click);
			// 
			// Select
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->ClientSize = System::Drawing::Size(637, 401);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Select";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Select";
			this->Load += gcnew System::EventHandler(this, &Select::Select_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void updateUsersFile()
	{
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
				out << ve::usr[i].id <<' '<<ve::usr[i].name<<' ' << ve::usr[i].userName << ' ' << ve::usr[i].password << ' ';
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
	}

	public: void updateAccFile()
	{
		ofstream out;
		out.open("Accounts.txt");
		if (out.is_open())
		{
			bool firstLine = true;
			map<string, CheckingAccount>::iterator C = ve::checkMap.begin();
			while (C != ve::checkMap.end())
			{
				if (firstLine)
					firstLine = false;
				else
					out << endl;
				out << C->second.accountID << ' ' << C->second.creationDate << ' ' << C->second.balance << ' ' << C->second.instance;
				C++;
			}

			map<string, LoanAccount>::iterator L = ve::loanMap.begin();
			while (L != ve::loanMap.end())
			{
				if (firstLine)
					firstLine = false;
				else
					out << endl;
				out << L->second.accountID << ' ' << L->second.creationDate << ' ' << L->second.principalAmount << ' ' << L->second.balance << ' ' << L->second.interestRate << ' ' << L->second.loanDuration;
				L++;
			}

			map<string, SavingAccount>::iterator S = ve::saveMap.begin();
			while (S != ve::saveMap.end())
			{
				if (firstLine)
					firstLine = false;
				else
					out << endl;
				out << S->second.accountID << ' ' << S->second.creationDate << ' ' << S->second.balance << ' ' << S->second.rate;
				S++;
			}
		}
		out.close();
	}

	public: void updateOpFile()
	{
		ofstream out;
		out.open("Operations.txt");
		if (out.is_open())
		{
			bool firstLine = true;
			map<string, map<string, Operation>>::iterator U = ve::userOpMap.begin();
			while (U != ve::userOpMap.end())
			{
				map<string, Operation>::iterator O = U->second.begin();
				while (O != U->second.end())
				{
					if (firstLine)
						firstLine = false;
					else
						out << endl;
					out << O->first << ' ' << O->second.getUserID() << ' ' << O->second.getOpType() << ' ' << O->second.getBalanceWithdrawnOrDeposited() << ' ' << O->second.getAccID() << ' ' << O->second.getOpDate();
					O++;
				}

				U++;
			}
		}
		out.close();
	}

	public: System::Void Select_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < ve::current_user.Checklist.size(); i++)
		{
			String^ h = marshal_as<String^>(ve::current_user.Checklist[i]);
			checkbox->Items->Add(h);
		}
		for (int i = 0; i < ve::current_user.Loanlist.size(); i++)
		{
			String^ h = marshal_as<String^>(ve::current_user.Loanlist[i]);
			loanbox->Items->Add(h);
		}
		for (int i = 0; i < ve::current_user.Saveist.size(); i++)
		{
			String^ h = marshal_as<String^>(ve::current_user.Saveist[i]);
			Savebox->Items->Add(h);
		}

	}
private: System::Void checkbox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkbox->SelectedIndex != -1)
	{
		Savebox->SelectedIndex = -1;
		loanbox->SelectedIndex = -1;
		ve::current_acc = marshal_as<string>(checkbox->SelectedItem->ToString());
	}
}
private: System::Void Savebox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Savebox->SelectedIndex != -1)
	{
		checkbox->SelectedIndex = -1;
		loanbox->SelectedIndex = -1;
		ve::current_acc = marshal_as<string>(Savebox->SelectedItem->ToString());
	}
}
private: System::Void loanbox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (loanbox->SelectedIndex != -1)
	{
		Savebox->SelectedIndex = -1;
		checkbox->SelectedIndex = -1;
		ve::current_acc = marshal_as<string>(loanbox->SelectedItem->ToString());

	}
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (loanbox->SelectedIndex != -1)
		{
			Yarab::LoanForm Lform;
			Lform.ShowDialog();
		}
		
		else if (checkbox->SelectedIndex != -1)
		{
			Yarab::CheckForm Cform;
			Cform.ShowDialog();
		}

		else if (Savebox->SelectedIndex != -1)
		{
			Yarab::SaveForm Sform;
			Sform.ShowDialog();
		}
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	updateUsersFile();
	updateAccFile();
	updateOpFile();

	Application::Exit();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void btn_add_Click(System::Object^  sender, System::EventArgs^  e) {
	Yarab::seelect_account sele;
	sele.ShowDialog();
	

}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->checkbox->Items->Clear();
	this->Savebox->Items->Clear();
	this->loanbox->Items->Clear();
	for (int i = 0; i < ve::current_user.Checklist.size(); i++)
		{
			String^ h = marshal_as<String^>(ve::current_user.Checklist[i]);
			checkbox->Items->Add(h);
		}
		for (int i = 0; i < ve::current_user.Loanlist.size(); i++)
		{
			String^ h = marshal_as<String^>(ve::current_user.Loanlist[i]);
			loanbox->Items->Add(h);
		}
		for (int i = 0; i < ve::current_user.Saveist.size(); i++)
		{
			String^ h = marshal_as<String^>(ve::current_user.Saveist[i]);
			Savebox->Items->Add(h);
		}

}
private: System::Void delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkbox->SelectedIndex != -1)
	{
		ve::current_acc = marshal_as<string>( checkbox->SelectedItem->ToString());
		if (ve::checkMap[ve::current_acc].instance < 5000)
			MessageBox::Show("You have to pay your dept");
		else
		{
			ve::checkMap.erase(ve::current_acc);
			for (int i = 0;i < ve::usr.size();i++)

			{
				if (ve::usr[i].id == ve::current_id)

				{
					for (int j = 0;j < ve::usr[i].Checklist.size();j++)
					{
						if (ve::usr[i].Checklist[j] == ve::current_acc)

						{
							ve::usr[i].Checklist.erase(ve::usr[i].Checklist.begin() + j);
							for (int k = 0;k < ve::current_user.Checklist.size();i = k++)
							{
								if (ve::current_user.Checklist[k] == ve::current_acc)
								{
									ve::current_user.Checklist.erase(ve::current_user.Checklist.begin() + k);
									break;
								}
							}
							MessageBox::Show("Deleted");
							break;
						}
					}
					break;
				}
			}
		}
	}
	else if (Savebox->SelectedIndex != -1)
	{
		ve::current_acc = marshal_as<string>(Savebox->SelectedItem->ToString());
		
		
			ve::saveMap.erase(ve::current_acc);
			for (int i = 0;i < ve::usr.size();i++)

			{
				if (ve::usr[i].id == ve::current_id)

				{
					for (int j = 0;j < ve::usr[i].Saveist.size();j++)
					{
						if (ve::usr[i].Saveist[j] == ve::current_acc)
						{
							ve::usr[i].Saveist.erase(ve::usr[i].Saveist.begin() + j);
							for (int k = 0;k < ve::current_user.Saveist.size();i = k++)
							{
								if (ve::current_user.Saveist[k] == ve::current_acc)
								{
									ve::current_user.Saveist.erase(ve::current_user.Saveist.begin() + k);
									break;
								}
							}
							MessageBox::Show("Deleted");
							break;
						}
					}
					break;
				}
			}
		}
	else if (loanbox->SelectedIndex != -1)
	{
		ve::current_acc = marshal_as<string>(loanbox->SelectedItem->ToString());
		if (ve::loanMap[ve::current_acc].principalAmount >0)
			MessageBox::Show("You have to pay your dept");
		else
		{
			ve::loanMap.erase(ve::current_acc);
			for (int i = 0;i < ve::usr.size();i++)

			{
				if (ve::usr[i].id == ve::current_id)

				{
					for (int j = 0;j < ve::usr[i].Loanlist.size();j++)
					{
						if (ve::usr[i].Loanlist[j] == ve::current_acc)

						{
							ve::usr[i].Loanlist.erase(ve::usr[i].Loanlist.begin() + j);
							for (int k = 0;k < ve::current_user.Loanlist.size();i = k++)
							{
								if (ve::current_user.Loanlist[k] == ve::current_acc)
								{
									ve::current_user.Loanlist.erase(ve::current_user.Loanlist.begin() + k);
									break;
								}
							}
							MessageBox::Show("Deleted");
							break;

						}
					}
					break;
				}
			}
		}
	}
	this->checkbox->SelectedIndex = -1;
	this->Savebox->SelectedIndex = -1;
	this->loanbox->SelectedIndex = -1;
	this->checkbox->Items->Clear();
	this->Savebox->Items->Clear();
	this->loanbox->Items->Clear();
	for (int i = 0; i < ve::current_user.Checklist.size(); i++)
	{
		String^ h = marshal_as<String^>(ve::current_user.Checklist[i]);
		checkbox->Items->Add(h);
	}
	for (int i = 0; i < ve::current_user.Loanlist.size(); i++)
	{
		String^ h = marshal_as<String^>(ve::current_user.Loanlist[i]);
		loanbox->Items->Add(h);
	}
	for (int i = 0; i < ve::current_user.Saveist.size(); i++)
	{
		String^ h = marshal_as<String^>(ve::current_user.Saveist[i]);
		Savebox->Items->Add(h);
	}
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
