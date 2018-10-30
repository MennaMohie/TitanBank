#pragma once
#include "Vector.h"
#include"LoanAccount.h"
#include "Report.h"

namespace Yarab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class LoanForm : public System::Windows::Forms::Form
	{
	public:
		LoanForm(void)
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
		~LoanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoanForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 127);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Repay ";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoanForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(17, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Amount To Repay ";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(21, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 23);
			this->textBox1->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, -5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(227, 418);
			this->panel1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(3, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(221, 132);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Enquiry";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoanForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(215, -5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(418, 421);
			this->panel3->TabIndex = 4;
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
			this->button6->Location = System::Drawing::Point(388, 16);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 30;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LoanForm::button6_Click);
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
			this->button4->Location = System::Drawing::Point(357, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 25);
			this->button4->TabIndex = 29;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &LoanForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(220, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 23);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(3, 273);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(221, 143);
			this->button3->TabIndex = 32;
			this->button3->Text = L"History";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LoanForm::button3_Click_1);
			// 
			// LoanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(630, 413);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoanForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &LoanForm::LoanForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		string input_Money = marshal_as<string>(textBox1->Text);
	
		if (input_Money.size() <= 0)
		{
			MessageBox::Show("Please Make Sure You Entered Valid Number");
		}
		else
		{
			double Money = stod(input_Money);
			if (Money == 0)
			{
				MessageBox::Show("Please Make Sure You Entered Valid Number");
				return;
			}
			double amount;
			if (ve::loanMap[ve::current_acc].balance + Money >
				ve::loanMap[ve::current_acc].principalAmount)
			{
				MessageBox::Show("Reminder " + (ve::loanMap[ve::current_acc].balance + Money -
					ve::loanMap[ve::current_acc].principalAmount).ToString());
				amount = ve::loanMap[ve::current_acc].principalAmount - ve::loanMap[ve::current_acc].balance;
				ve::loanMap[ve::current_acc].deposit(amount);

			}
			else
			{
				amount = Money;
				ve::loanMap[ve::current_acc].deposit(Money);
				MessageBox::Show("Operation Done");
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
			string type = "Deposit";
			Operation op(id, ve::current_id, type, amount, ve::current_acc, date);
			ve::userOpMap[ve::current_id][id] = op;

		}
	}
private: System::Void LoanForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Your Balance =" + ve::loanMap[ve::current_acc].balance.ToString ()+"\n" + "Your Dept = " + ve::loanMap[ve::current_acc].principalAmount.ToString());
		
		
}
private: System::Void with_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void historyButton_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Yarab::Report rep;
	rep.ShowDialog();
}
};
}