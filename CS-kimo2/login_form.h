#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "MyForm.h"
#include <vector>
#include <Cstring>

namespace CS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Summary for login_form
	/// </summary>
	public ref class login_form : public System::Windows::Forms::Form
	{
	public:
		bool c_exist = false;
		login_form(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancel_btn;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ pass_tb;
	public: System::Windows::Forms::TextBox^ email_tb;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pass_tb = (gcnew System::Windows::Forms::TextBox());
			this->email_tb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Cancel_btn
			// 
			this->Cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancel_btn->Location = System::Drawing::Point(542, 287);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(197, 39);
			this->Cancel_btn->TabIndex = 8;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = true;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &login_form::Cancel_btn_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(268, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 39);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login_form::button1_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(127, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(127, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(770, 63);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pass_tb
			// 
			this->pass_tb->Location = System::Drawing::Point(268, 221);
			this->pass_tb->Multiline = true;
			this->pass_tb->Name = L"pass_tb";
			this->pass_tb->Size = System::Drawing::Size(471, 31);
			this->pass_tb->TabIndex = 3;
			// 
			// email_tb
			// 
			this->email_tb->Location = System::Drawing::Point(268, 148);
			this->email_tb->Multiline = true;
			this->email_tb->Name = L"email_tb";
			this->email_tb->Size = System::Drawing::Size(471, 31);
			this->email_tb->TabIndex = 4;
			// 
			// login_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 402);
			this->Controls->Add(this->Cancel_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pass_tb);
			this->Controls->Add(this->email_tb);
			this->Name = L"login_form";
			this->Text = L"login_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int acc_logged;
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		vector<string> account_names;
		account_names.push_back("admin.txt");
		account_names.push_back("student1.txt");
		account_names.push_back("student2.txt");

		for (int i = 0; i < 3; i++) {

			ifstream curr_file(account_names[i]);
			string email;
			string pass;
			getline(curr_file, email);
			getline(curr_file, pass);

			char read_email_chars[50] = { 0 };
			sprintf(read_email_chars, "%s", (email_tb->Text));
			string read_email(read_email_chars);

			char read_pass_chars[50] = { 0 };
			sprintf(read_pass_chars, "%s", (pass_tb->Text));
			string read_pass(read_pass_chars);

			curr_file.close();

			if (read_email == email && read_pass == pass) {
				c_exist = true;
				acc_logged = i;
				this->Close();
			}
		}
	}
	private: System::Void Cancel_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();


	}
	};
}
