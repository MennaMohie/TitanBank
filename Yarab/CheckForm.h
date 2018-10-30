#pragma once
#include"Vector.h"
#include "Report.h"

namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckForm
	/// </summary>
	public ref class CheckForm : public System::Windows::Forms::Form
	{
	public:
		CheckForm(void)
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
		~CheckForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:

	private: System::Windows::Forms::TextBox^  txt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  bal;
	private: System::Windows::Forms::Label^  insta;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  depo;
	private: System::Windows::Forms::Button^  wiht_darw;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckForm::typeid));
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bal = (gcnew System::Windows::Forms::Label());
			this->insta = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->depo = (gcnew System::Windows::Forms::Button());
			this->wiht_darw = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(23, 152);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(217, 20);
			this->txt->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(270, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Current Balance : ";
			// 
			// bal
			// 
			this->bal->AutoSize = true;
			this->bal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bal->Location = System::Drawing::Point(338, 193);
			this->bal->Name = L"bal";
			this->bal->Size = System::Drawing::Size(72, 25);
			this->bal->TabIndex = 4;
			this->bal->Text = L"00000";
			// 
			// insta
			// 
			this->insta->AutoSize = true;
			this->insta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insta->Location = System::Drawing::Point(338, 313);
			this->insta->Name = L"insta";
			this->insta->Size = System::Drawing::Size(72, 25);
			this->insta->TabIndex = 6;
			this->insta->Text = L"00000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(277, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Overdraft limit : ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->depo);
			this->panel1->Controls->Add(this->wiht_darw);
			this->panel1->Location = System::Drawing::Point(-2, -12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 396);
			this->panel1->TabIndex = 7;
			// 
			// depo
			// 
			this->depo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->depo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->depo->FlatAppearance->BorderSize = 0;
			this->depo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->depo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->depo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->depo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"depo.Image")));
			this->depo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->depo->Location = System::Drawing::Point(3, 13);
			this->depo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->depo->Name = L"depo";
			this->depo->Size = System::Drawing::Size(249, 149);
			this->depo->TabIndex = 2;
			this->depo->Text = L"Deposit";
			this->depo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->depo->UseVisualStyleBackColor = false;
			this->depo->Click += gcnew System::EventHandler(this, &CheckForm::depo_Click);
			// 
			// wiht_darw
			// 
			this->wiht_darw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->wiht_darw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->wiht_darw->FlatAppearance->BorderSize = 0;
			this->wiht_darw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wiht_darw->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->wiht_darw->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->wiht_darw->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wiht_darw.Image")));
			this->wiht_darw->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->wiht_darw->Location = System::Drawing::Point(3, 166);
			this->wiht_darw->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->wiht_darw->Name = L"wiht_darw";
			this->wiht_darw->Size = System::Drawing::Size(252, 113);
			this->wiht_darw->TabIndex = 3;
			this->wiht_darw->Text = L"Withdraw";
			this->wiht_darw->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->wiht_darw->UseVisualStyleBackColor = false;
			this->wiht_darw->Click += gcnew System::EventHandler(this, &CheckForm::wiht_darw_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->insta);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->txt);
			this->panel2->Controls->Add(this->bal);
			this->panel2->Location = System::Drawing::Point(247, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(556, 381);
			this->panel2->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(519, 11);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 28;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &CheckForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(488, 11);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 25);
			this->button5->TabIndex = 27;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CheckForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(18, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 28);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Withdraw/deposit";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 296);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 96);
			this->button4->TabIndex = 29;
			this->button4->Text = L"History";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CheckForm::button4_Click);
			// 
			// CheckForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 381);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CheckForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CheckForm";
			this->Load += gcnew System::EventHandler(this, &CheckForm::CheckForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CheckForm_Load(System::Object^  sender, System::EventArgs^  e) {
		bal->Text = (marshal_as<String^>(to_string(ve::checkMap[ve::current_acc].balance)));
		insta->Text = (marshal_as<String^>(to_string(ve::checkMap[ve::current_acc].instance)));
		
	}
	private: System::Void wiht_darw_Click(System::Object^  sender, System::EventArgs^  e) {

		string money = marshal_as<string>(txt->Text);
		if (money.size() <= 0)
		{
			MessageBox::Show("Please Enter Correct Data");
		}
		else
		{
			double x = stod(money);
			if (ve::checkMap[ve::current_acc].withdraw(x))
			{
				MessageBox::Show("Operaion Is Done");
			}
			else if(!ve::checkMap[ve::current_acc].withdraw(x))
			{
				MessageBox::Show("You Do Not Have Balance");
			}

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

			string id = ve::current_id + to_string(ve::userOpMap[ve::current_id].size() + 1);
			string type = "Withdraw";
			Operation op(id, ve::current_id, type, x, ve::current_acc, date);
			ve::userOpMap[ve::current_id][id] = op;

		}
		bal->Text = (marshal_as<String^>(to_string(ve::checkMap[ve::current_acc].balance)));
		insta->Text = (marshal_as<String^>(to_string(ve::checkMap[ve::current_acc].instance)));


	}
private: System::Void depo_Click(System::Object^  sender, System::EventArgs^  e) {
	string money = marshal_as<string>(txt->Text);
	if (money.size() <= 0)
	{
		MessageBox::Show("Please Enter Correct Data");
	}
	else
	{
		double x = stod(money);
		ve::checkMap[ve::current_acc].deposit(x);
		MessageBox::Show("Operaion Is Done");


		bal->Text = (marshal_as<String^>(to_string(ve::checkMap[ve::current_acc].balance)));
		insta->Text = (marshal_as<String^>(to_string(ve::checkMap[ve::current_acc].instance)));

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

		string id = ve::current_id + to_string(ve::userOpMap[ve::current_id].size() + 1);
		string type = "Deposit";
		Operation op(id, ve::current_id, type, stod(money), ve::current_acc, date);
		ve::userOpMap[ve::current_id][id] = op;
	}
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void historyButton_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Yarab::Report rep;
	rep.ShowDialog();
}
};
}
