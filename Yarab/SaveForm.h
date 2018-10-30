#pragma once
#include "Vector.h"
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
	public ref class SaveForm : public System::Windows::Forms::Form
	{
	public:
		SaveForm(void)
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
		~SaveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  money;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SaveForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->money = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 115);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Deposit";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SaveForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 119);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(272, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Withdraw";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SaveForm::button2_Click);
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
			this->button3->Location = System::Drawing::Point(0, 223);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(275, 98);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Balance Enquiry";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SaveForm::button3_Click);
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
			this->button4->Location = System::Drawing::Point(3, 328);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(269, 97);
			this->button4->TabIndex = 3;
			this->button4->Text = L"History";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SaveForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(273, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 28);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Withdraw/deposit";
			this->label1->Click += gcnew System::EventHandler(this, &SaveForm::label1_Click);
			// 
			// money
			// 
			this->money->BackColor = System::Drawing::Color::White;
			this->money->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->money->Location = System::Drawing::Point(278, 157);
			this->money->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->money->Name = L"money";
			this->money->Size = System::Drawing::Size(221, 33);
			this->money->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(-2, -9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(275, 451);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->money);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(273, -6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(553, 447);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SaveForm::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(505, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(45, 33);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button6->Location = System::Drawing::Point(503, 18);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 25);
			this->button6->TabIndex = 26;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &SaveForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button5->Location = System::Drawing::Point(472, 18);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 25);
			this->button5->TabIndex = 25;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SaveForm::button5_Click);
			// 
			// SaveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(822, 439);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SaveForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &SaveForm::SaveForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		string s = marshal_as<string>(money->Text);
		if (s != "")
		{
			double x = stod(s);
			ve::saveMap[ve::current_acc].deposit(x);
			MessageBox::Show("Done");

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
			Operation op(id, ve::current_id, type, x, ve::current_acc, date);
			ve::userOpMap[ve::current_id][id] = op;
		}
		else MessageBox::Show("Enter amount to add");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		string s = marshal_as<string>(money->Text);
		if (s.size() <= 0)
		{
			MessageBox::Show("Please Enter The Value");
		}
		else
		{
			if (s != "")
			{
				double x = stod(s);
				if (ve::saveMap[ve::current_acc].withdraw(x) == false)
					MessageBox::Show("Check your Balnce");
				else
				{
					MessageBox::Show("Done");

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
			}
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		MessageBox::Show(marshal_as<String^>(to_string(ve::saveMap[ve::current_acc].balanceEnquiry())));
	}
	private: System::Void SaveForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Yarab::Report rep;
	rep.ShowDialog();
}
};
}
