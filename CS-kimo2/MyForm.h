#pragma once
#include<fstream>
#include<string>
#include<vector>
#include<iostream>

namespace CS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//MyForm(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}

		std::ifstream& GotoLine(std::ifstream& file, unsigned int num) {
			file.seekg(std::ios::beg);
			for (int i = 0; i < (num - 1); ++i) {
				file.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			}
			return file;
		}



		MyForm(int i)
		{
			acc_names = new std::vector<std::string>{ "admin.txt" , "student1.txt" , "student2.txt" };

			acc = new std::ifstream();
			acc->open(((*acc_names)[i]));
			GotoLine(*acc, 4);

			name = new std::string();
			id = new std::string();
			gpa = new std::string();
			ch_done = new std::string();
			year = new std::string();
			semester = new std::string();

			std::getline((*acc), (*name));
			std::getline((*acc), (*id));
			std::getline((*acc), (*gpa));
			std::getline((*acc), (*ch_done));
			std::getline((*acc), (*year));
			std::getline((*acc), (*semester));

			Name = gcnew String(name->data());
			Id = gcnew String(id->data());
			Gpa = gcnew String(gpa->data());
			Ch_done = gcnew String(ch_done->data());
			Year = gcnew String(year->data());
			Semester = gcnew String(semester->data());

			//courses = new std::vector<std::string>{"math.txt", "ethics.txt", "itp.txt", "phys.txt"};
			stud_enroll_files = new std::vector<std::string>{"0" , "student1_courses_enrolled.txt", "student2_courses_enrolled.txt"};
			stud_done_files = new std::vector<std::string>{"0" , "student1_courses_done.txt" , "student2_courses_done.txt"};

			InitializeComponent();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}

			delete acc_names;

			delete acc;
			delete name;
			delete id;
			delete gpa;
			delete ch_done;
			delete year;
			delete semester;

			//delete courses;
			delete stud_enroll_files;
			delete stud_done_files;

			delete Name;
			delete Id;
			delete Gpa;
			delete Ch_done;
			delete Year;
			delete Semester;
		}
	private: System::Windows::Forms::Panel^ pa_title;


	protected:

	protected:

	protected:

	public: int acc_logged_num_stud; // this is the account number in the list use to get file and read info from

	private: 
		std::vector<std::string>* acc_names;
		std::ifstream* acc;
		std::string* name;
		std::string* id;
		std::string* gpa;
		std::string* ch_done;
		std::string* year;
		std::string* semester;

		//std::vector<std::string>* courses;
		std::vector<std::string>* stud_enroll_files;
		std::vector<std::string>* stud_done_files;

	private: 
		String^ Name;
		String^ Id;
		String^ Gpa;
		String^ Ch_done;
		String^ Year;
		String^ Semester;
	

	private: System::Windows::Forms::Panel^ pa_navi;
	private: System::Windows::Forms::Panel^ pa_con;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_Home;



	private: System::Windows::Forms::Button^ btn_stu;
	private: System::Windows::Forms::Button^ btn_sched;
	private: System::Windows::Forms::Button^ btn_log;





	private: System::Windows::Forms::Panel^ pn_shedule;



















































private: System::Windows::Forms::Panel^ panel1;

private: System::Windows::Forms::Panel^ pn_info;
private: System::Windows::Forms::PictureBox^ pictureBox12;















































private: System::Windows::Forms::Panel^ panel12;




private: System::Windows::Forms::Label^ label10;











private: System::Windows::Forms::Panel^ pn_Student;


























private: System::Windows::Forms::Panel^ pn_home;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label_home;
private: System::Windows::Forms::Button^ button8;

private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Button^ button18;
	   bool dragging;
	   Point offset;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ math_lb;
private: System::Windows::Forms::Button^ math_btn;


private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ phyis_lb;
private: System::Windows::Forms::Button^ phyis_btn;


private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ itp_lb;
private: System::Windows::Forms::Button^ itp_btn;


private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ Ethics_lb;
private: System::Windows::Forms::Button^ Ethics_btn;



private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ ps_btn;

private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ DM_lb;
private: System::Windows::Forms::Button^ DM_btn;


private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ DLD_lb;
private: System::Windows::Forms::Button^ DLD_btn;


private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ cp_ps_lb;
private: System::Windows::Forms::Button^ cp_ps_btn;




private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ inovate_lb;
private: System::Windows::Forms::Button^ inovate_btn;


private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ ds_a_lb;
private: System::Windows::Forms::Button^ ds_a_btn;


private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ dms_lb;
private: System::Windows::Forms::Button^ dms_btn;


private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Label^ oop_lb;
private: System::Windows::Forms::Button^ oop_btn;


private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ co_lb;
private: System::Windows::Forms::Button^ co_btn;





































































































































































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pa_title = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pa_navi = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_Home = (gcnew System::Windows::Forms::Button());
			this->btn_stu = (gcnew System::Windows::Forms::Button());
			this->btn_sched = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pn_info = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pa_con = (gcnew System::Windows::Forms::Panel());
			this->pn_Student = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->math_lb = (gcnew System::Windows::Forms::Label());
			this->math_btn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->phyis_lb = (gcnew System::Windows::Forms::Label());
			this->phyis_btn = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->itp_lb = (gcnew System::Windows::Forms::Label());
			this->itp_btn = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->Ethics_lb = (gcnew System::Windows::Forms::Label());
			this->Ethics_btn = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ps_btn = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->DM_lb = (gcnew System::Windows::Forms::Label());
			this->DM_btn = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->DLD_lb = (gcnew System::Windows::Forms::Label());
			this->DLD_btn = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->cp_ps_lb = (gcnew System::Windows::Forms::Label());
			this->cp_ps_btn = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->inovate_lb = (gcnew System::Windows::Forms::Label());
			this->inovate_btn = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->ds_a_lb = (gcnew System::Windows::Forms::Label());
			this->ds_a_btn = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->dms_lb = (gcnew System::Windows::Forms::Label());
			this->dms_btn = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->oop_lb = (gcnew System::Windows::Forms::Label());
			this->oop_btn = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->co_lb = (gcnew System::Windows::Forms::Label());
			this->co_btn = (gcnew System::Windows::Forms::Button());
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->label_home = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pn_shedule = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pa_title->SuspendLayout();
			this->pa_navi->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pn_info->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->pa_con->SuspendLayout();
			this->pn_Student->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->pn_home->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->pn_shedule->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pa_title
			// 
			this->pa_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pa_title->Controls->Add(this->label1);
			this->pa_title->Controls->Add(this->button3);
			this->pa_title->Controls->Add(this->button2);
			this->pa_title->Controls->Add(this->button1);
			this->pa_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->pa_title->Location = System::Drawing::Point(0, 0);
			this->pa_title->Name = L"pa_title";
			this->pa_title->Size = System::Drawing::Size(1159, 49);
			this->pa_title->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(538, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"MIU";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(1012, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 31);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1059, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 31);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1106, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 31);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pa_navi
			// 
			this->pa_navi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pa_navi->Controls->Add(this->flowLayoutPanel1);
			this->pa_navi->Controls->Add(this->panel1);
			this->pa_navi->Dock = System::Windows::Forms::DockStyle::Left;
			this->pa_navi->Location = System::Drawing::Point(0, 49);
			this->pa_navi->Name = L"pa_navi";
			this->pa_navi->Size = System::Drawing::Size(180, 571);
			this->pa_navi->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->flowLayoutPanel1->Controls->Add(this->label10);
			this->flowLayoutPanel1->Controls->Add(this->btn_Home);
			this->flowLayoutPanel1->Controls->Add(this->btn_stu);
			this->flowLayoutPanel1->Controls->Add(this->btn_sched);
			this->flowLayoutPanel1->Controls->Add(this->btn_log);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 100);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(180, 471);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 29);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Student";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// btn_Home
			// 
			this->btn_Home->FlatAppearance->BorderSize = 0;
			this->btn_Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Home->ForeColor = System::Drawing::Color::Red;
			this->btn_Home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Home.Image")));
			this->btn_Home->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Home->Location = System::Drawing::Point(3, 36);
			this->btn_Home->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->btn_Home->Name = L"btn_Home";
			this->btn_Home->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_Home->Size = System::Drawing::Size(177, 56);
			this->btn_Home->TabIndex = 0;
			this->btn_Home->Text = L"Home";
			this->btn_Home->UseVisualStyleBackColor = true;
			this->btn_Home->Click += gcnew System::EventHandler(this, &MyForm::btn_Home_Click);
			// 
			// btn_stu
			// 
			this->btn_stu->FlatAppearance->BorderSize = 0;
			this->btn_stu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_stu->ForeColor = System::Drawing::Color::Red;
			this->btn_stu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_stu.Image")));
			this->btn_stu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_stu->Location = System::Drawing::Point(3, 102);
			this->btn_stu->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->btn_stu->Name = L"btn_stu";
			this->btn_stu->Size = System::Drawing::Size(177, 56);
			this->btn_stu->TabIndex = 1;
			this->btn_stu->Text = L"Student";
			this->btn_stu->UseVisualStyleBackColor = true;
			this->btn_stu->Click += gcnew System::EventHandler(this, &MyForm::btn_stu_Click);
			// 
			// btn_sched
			// 
			this->btn_sched->FlatAppearance->BorderSize = 0;
			this->btn_sched->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sched->ForeColor = System::Drawing::Color::Red;
			this->btn_sched->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sched.Image")));
			this->btn_sched->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_sched->Location = System::Drawing::Point(3, 168);
			this->btn_sched->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->btn_sched->Name = L"btn_sched";
			this->btn_sched->Size = System::Drawing::Size(177, 56);
			this->btn_sched->TabIndex = 2;
			this->btn_sched->Text = L"    schedules ";
			this->btn_sched->UseVisualStyleBackColor = true;
			this->btn_sched->Click += gcnew System::EventHandler(this, &MyForm::btn_sched_Click);
			// 
			// btn_log
			// 
			this->btn_log->FlatAppearance->BorderSize = 0;
			this->btn_log->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_log->ForeColor = System::Drawing::Color::Red;
			this->btn_log->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_log.Image")));
			this->btn_log->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_log->Location = System::Drawing::Point(3, 234);
			this->btn_log->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(177, 56);
			this->btn_log->TabIndex = 3;
			this->btn_log->Text = L"LogOut";
			this->btn_log->UseVisualStyleBackColor = true;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel1->Controls->Add(this->pn_info);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(180, 100);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// pn_info
			// 
			this->pn_info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pn_info->Controls->Add(this->button8);
			this->pn_info->Controls->Add(this->pictureBox12);
			this->pn_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_info->Location = System::Drawing::Point(0, 0);
			this->pn_info->Name = L"pn_info";
			this->pn_info->Size = System::Drawing::Size(180, 100);
			this->pn_info->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(133, 6);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 31);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(3, 3);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 94);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 2;
			this->pictureBox12->TabStop = false;
			// 
			// pa_con
			// 
			this->pa_con->Controls->Add(this->pn_Student);
			this->pa_con->Controls->Add(this->pn_home);
			this->pa_con->Controls->Add(this->pn_shedule);
			this->pa_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pa_con->Location = System::Drawing::Point(180, 49);
			this->pa_con->Name = L"pa_con";
			this->pa_con->Size = System::Drawing::Size(979, 571);
			this->pa_con->TabIndex = 3;
			this->pa_con->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pa_con_Paint);
			// 
			// pn_Student
			// 
			this->pn_Student->BackColor = System::Drawing::Color::White;
			this->pn_Student->Controls->Add(this->flowLayoutPanel2);
			this->pn_Student->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_Student->Location = System::Drawing::Point(0, 0);
			this->pn_Student->Name = L"pn_Student";
			this->pn_Student->Size = System::Drawing::Size(979, 571);
			this->pn_Student->TabIndex = 1;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->Controls->Add(this->panel4);
			this->flowLayoutPanel2->Controls->Add(this->panel3);
			this->flowLayoutPanel2->Controls->Add(this->panel5);
			this->flowLayoutPanel2->Controls->Add(this->panel6);
			this->flowLayoutPanel2->Controls->Add(this->panel7);
			this->flowLayoutPanel2->Controls->Add(this->panel8);
			this->flowLayoutPanel2->Controls->Add(this->panel9);
			this->flowLayoutPanel2->Controls->Add(this->panel11);
			this->flowLayoutPanel2->Controls->Add(this->panel13);
			this->flowLayoutPanel2->Controls->Add(this->panel14);
			this->flowLayoutPanel2->Controls->Add(this->panel15);
			this->flowLayoutPanel2->Controls->Add(this->panel16);
			this->flowLayoutPanel2->Controls->Add(this->panel17);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(979, 571);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Controls->Add(this->math_lb);
			this->panel4->Controls->Add(this->math_btn);
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(304, 202);
			this->panel4->TabIndex = 1;
			// 
			// math_lb
			// 
			this->math_lb->BackColor = System::Drawing::Color::Transparent;
			this->math_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->math_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->math_lb->Location = System::Drawing::Point(0, 0);
			this->math_lb->Name = L"math_lb";
			this->math_lb->Size = System::Drawing::Size(301, 56);
			this->math_lb->TabIndex = 1;
			this->math_lb->Text = L"math = 3ch";
			this->math_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// math_btn
			// 
			this->math_btn->Location = System::Drawing::Point(0, 160);
			this->math_btn->Name = L"math_btn";
			this->math_btn->Size = System::Drawing::Size(301, 39);
			this->math_btn->TabIndex = 0;
			this->math_btn->Text = L"Enroll";
			this->math_btn->UseVisualStyleBackColor = true;
			this->math_btn->Click += gcnew System::EventHandler(this, &MyForm::math_btn_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Controls->Add(this->phyis_lb);
			this->panel3->Controls->Add(this->phyis_btn);
			this->panel3->Location = System::Drawing::Point(313, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(304, 202);
			this->panel3->TabIndex = 2;
			// 
			// phyis_lb
			// 
			this->phyis_lb->BackColor = System::Drawing::Color::Transparent;
			this->phyis_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phyis_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->phyis_lb->Location = System::Drawing::Point(0, 0);
			this->phyis_lb->Name = L"phyis_lb";
			this->phyis_lb->Size = System::Drawing::Size(304, 56);
			this->phyis_lb->TabIndex = 1;
			this->phyis_lb->Text = L"phys = 4ch";
			this->phyis_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// phyis_btn
			// 
			this->phyis_btn->Location = System::Drawing::Point(0, 160);
			this->phyis_btn->Name = L"phyis_btn";
			this->phyis_btn->Size = System::Drawing::Size(301, 39);
			this->phyis_btn->TabIndex = 0;
			this->phyis_btn->Text = L"Enroll";
			this->phyis_btn->UseVisualStyleBackColor = true;
			this->phyis_btn->Click += gcnew System::EventHandler(this, &MyForm::phyis_btn_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Controls->Add(this->itp_lb);
			this->panel5->Controls->Add(this->itp_btn);
			this->panel5->Location = System::Drawing::Point(623, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(304, 202);
			this->panel5->TabIndex = 3;
			// 
			// itp_lb
			// 
			this->itp_lb->BackColor = System::Drawing::Color::Transparent;
			this->itp_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itp_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->itp_lb->Location = System::Drawing::Point(0, 0);
			this->itp_lb->Name = L"itp_lb";
			this->itp_lb->Size = System::Drawing::Size(301, 56);
			this->itp_lb->TabIndex = 1;
			this->itp_lb->Text = L"itp = 4";
			this->itp_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// itp_btn
			// 
			this->itp_btn->Location = System::Drawing::Point(0, 160);
			this->itp_btn->Name = L"itp_btn";
			this->itp_btn->Size = System::Drawing::Size(301, 39);
			this->itp_btn->TabIndex = 0;
			this->itp_btn->Text = L"Enroll";
			this->itp_btn->UseVisualStyleBackColor = true;
			this->itp_btn->Click += gcnew System::EventHandler(this, &MyForm::itp_btn_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Controls->Add(this->Ethics_lb);
			this->panel6->Controls->Add(this->Ethics_btn);
			this->panel6->Location = System::Drawing::Point(3, 211);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(304, 202);
			this->panel6->TabIndex = 4;
			// 
			// Ethics_lb
			// 
			this->Ethics_lb->BackColor = System::Drawing::Color::Transparent;
			this->Ethics_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ethics_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Ethics_lb->Location = System::Drawing::Point(0, 0);
			this->Ethics_lb->Name = L"Ethics_lb";
			this->Ethics_lb->Size = System::Drawing::Size(301, 56);
			this->Ethics_lb->TabIndex = 1;
			this->Ethics_lb->Text = L"ethics = 3ch";
			this->Ethics_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Ethics_btn
			// 
			this->Ethics_btn->Location = System::Drawing::Point(0, 160);
			this->Ethics_btn->Name = L"Ethics_btn";
			this->Ethics_btn->Size = System::Drawing::Size(301, 39);
			this->Ethics_btn->TabIndex = 0;
			this->Ethics_btn->Text = L"Enroll";
			this->Ethics_btn->UseVisualStyleBackColor = true;
			this->Ethics_btn->Click += gcnew System::EventHandler(this, &MyForm::Ethics_btn_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->ps_btn);
			this->panel7->Location = System::Drawing::Point(313, 211);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(304, 202);
			this->panel7->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(301, 56);
			this->label8->TabIndex = 1;
			this->label8->Text = L"ps = 3ch";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ps_btn
			// 
			this->ps_btn->Location = System::Drawing::Point(0, 160);
			this->ps_btn->Name = L"ps_btn";
			this->ps_btn->Size = System::Drawing::Size(301, 39);
			this->ps_btn->TabIndex = 0;
			this->ps_btn->Text = L"Enroll";
			this->ps_btn->UseVisualStyleBackColor = true;
			this->ps_btn->Click += gcnew System::EventHandler(this, &MyForm::ps_btn_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Controls->Add(this->DM_lb);
			this->panel8->Controls->Add(this->DM_btn);
			this->panel8->Location = System::Drawing::Point(623, 211);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(304, 202);
			this->panel8->TabIndex = 6;
			// 
			// DM_lb
			// 
			this->DM_lb->BackColor = System::Drawing::Color::Transparent;
			this->DM_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DM_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DM_lb->Location = System::Drawing::Point(0, 0);
			this->DM_lb->Name = L"DM_lb";
			this->DM_lb->Size = System::Drawing::Size(301, 56);
			this->DM_lb->TabIndex = 1;
			this->DM_lb->Text = L"DM = 3ch";
			this->DM_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DM_btn
			// 
			this->DM_btn->Location = System::Drawing::Point(0, 160);
			this->DM_btn->Name = L"DM_btn";
			this->DM_btn->Size = System::Drawing::Size(301, 39);
			this->DM_btn->TabIndex = 0;
			this->DM_btn->Text = L"Enroll";
			this->DM_btn->UseVisualStyleBackColor = true;
			this->DM_btn->Click += gcnew System::EventHandler(this, &MyForm::DM_btn_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Black;
			this->panel9->Controls->Add(this->DLD_lb);
			this->panel9->Controls->Add(this->DLD_btn);
			this->panel9->Location = System::Drawing::Point(3, 419);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(304, 202);
			this->panel9->TabIndex = 7;
			// 
			// DLD_lb
			// 
			this->DLD_lb->BackColor = System::Drawing::Color::Transparent;
			this->DLD_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DLD_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DLD_lb->Location = System::Drawing::Point(0, 0);
			this->DLD_lb->Name = L"DLD_lb";
			this->DLD_lb->Size = System::Drawing::Size(301, 56);
			this->DLD_lb->TabIndex = 1;
			this->DLD_lb->Text = L"DLD = 3ch";
			this->DLD_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DLD_btn
			// 
			this->DLD_btn->Location = System::Drawing::Point(0, 160);
			this->DLD_btn->Name = L"DLD_btn";
			this->DLD_btn->Size = System::Drawing::Size(301, 39);
			this->DLD_btn->TabIndex = 0;
			this->DLD_btn->Text = L"Enroll";
			this->DLD_btn->UseVisualStyleBackColor = true;
			this->DLD_btn->Click += gcnew System::EventHandler(this, &MyForm::DLD_btn_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->Controls->Add(this->cp_ps_lb);
			this->panel11->Controls->Add(this->cp_ps_btn);
			this->panel11->Location = System::Drawing::Point(313, 419);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(304, 202);
			this->panel11->TabIndex = 8;
			// 
			// cp_ps_lb
			// 
			this->cp_ps_lb->BackColor = System::Drawing::Color::Transparent;
			this->cp_ps_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cp_ps_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cp_ps_lb->Location = System::Drawing::Point(0, 0);
			this->cp_ps_lb->Name = L"cp_ps_lb";
			this->cp_ps_lb->Size = System::Drawing::Size(301, 56);
			this->cp_ps_lb->TabIndex = 1;
			this->cp_ps_lb->Text = L"cp and ps= 4ch";
			this->cp_ps_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// cp_ps_btn
			// 
			this->cp_ps_btn->Location = System::Drawing::Point(0, 160);
			this->cp_ps_btn->Name = L"cp_ps_btn";
			this->cp_ps_btn->Size = System::Drawing::Size(301, 39);
			this->cp_ps_btn->TabIndex = 0;
			this->cp_ps_btn->Text = L"Enroll";
			this->cp_ps_btn->UseVisualStyleBackColor = true;
			this->cp_ps_btn->Click += gcnew System::EventHandler(this, &MyForm::cp_ps_btn_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Black;
			this->panel13->Controls->Add(this->inovate_lb);
			this->panel13->Controls->Add(this->inovate_btn);
			this->panel13->Location = System::Drawing::Point(623, 419);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(304, 202);
			this->panel13->TabIndex = 9;
			// 
			// inovate_lb
			// 
			this->inovate_lb->BackColor = System::Drawing::Color::Transparent;
			this->inovate_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inovate_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->inovate_lb->Location = System::Drawing::Point(0, 0);
			this->inovate_lb->Name = L"inovate_lb";
			this->inovate_lb->Size = System::Drawing::Size(301, 56);
			this->inovate_lb->TabIndex = 1;
			this->inovate_lb->Text = L"inovate = 3ch";
			this->inovate_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// inovate_btn
			// 
			this->inovate_btn->Location = System::Drawing::Point(0, 160);
			this->inovate_btn->Name = L"inovate_btn";
			this->inovate_btn->Size = System::Drawing::Size(301, 39);
			this->inovate_btn->TabIndex = 0;
			this->inovate_btn->Text = L"Enroll";
			this->inovate_btn->UseVisualStyleBackColor = true;
			this->inovate_btn->Click += gcnew System::EventHandler(this, &MyForm::inovate_btn_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Black;
			this->panel14->Controls->Add(this->ds_a_lb);
			this->panel14->Controls->Add(this->ds_a_btn);
			this->panel14->Location = System::Drawing::Point(3, 627);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(304, 202);
			this->panel14->TabIndex = 10;
			// 
			// ds_a_lb
			// 
			this->ds_a_lb->BackColor = System::Drawing::Color::Transparent;
			this->ds_a_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ds_a_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ds_a_lb->Location = System::Drawing::Point(0, 0);
			this->ds_a_lb->Name = L"ds_a_lb";
			this->ds_a_lb->Size = System::Drawing::Size(301, 56);
			this->ds_a_lb->TabIndex = 1;
			this->ds_a_lb->Text = L"DS_A= 4ch";
			this->ds_a_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ds_a_btn
			// 
			this->ds_a_btn->Location = System::Drawing::Point(0, 160);
			this->ds_a_btn->Name = L"ds_a_btn";
			this->ds_a_btn->Size = System::Drawing::Size(301, 39);
			this->ds_a_btn->TabIndex = 0;
			this->ds_a_btn->Text = L"Enroll";
			this->ds_a_btn->UseVisualStyleBackColor = true;
			this->ds_a_btn->Click += gcnew System::EventHandler(this, &MyForm::ds_a_btn_Click);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Black;
			this->panel15->Controls->Add(this->dms_lb);
			this->panel15->Controls->Add(this->dms_btn);
			this->panel15->Location = System::Drawing::Point(313, 627);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(304, 202);
			this->panel15->TabIndex = 11;
			// 
			// dms_lb
			// 
			this->dms_lb->BackColor = System::Drawing::Color::Transparent;
			this->dms_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dms_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dms_lb->Location = System::Drawing::Point(0, 0);
			this->dms_lb->Name = L"dms_lb";
			this->dms_lb->Size = System::Drawing::Size(301, 56);
			this->dms_lb->TabIndex = 1;
			this->dms_lb->Text = L"DMS = 4ch";
			this->dms_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dms_btn
			// 
			this->dms_btn->Location = System::Drawing::Point(0, 160);
			this->dms_btn->Name = L"dms_btn";
			this->dms_btn->Size = System::Drawing::Size(301, 39);
			this->dms_btn->TabIndex = 0;
			this->dms_btn->Text = L"Enroll";
			this->dms_btn->UseVisualStyleBackColor = true;
			this->dms_btn->Click += gcnew System::EventHandler(this, &MyForm::dms_btn_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Black;
			this->panel16->Controls->Add(this->oop_lb);
			this->panel16->Controls->Add(this->oop_btn);
			this->panel16->Location = System::Drawing::Point(623, 627);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(304, 202);
			this->panel16->TabIndex = 12;
			// 
			// oop_lb
			// 
			this->oop_lb->BackColor = System::Drawing::Color::Transparent;
			this->oop_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oop_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->oop_lb->Location = System::Drawing::Point(0, 0);
			this->oop_lb->Name = L"oop_lb";
			this->oop_lb->Size = System::Drawing::Size(301, 56);
			this->oop_lb->TabIndex = 1;
			this->oop_lb->Text = L"OOP = 4ch";
			this->oop_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// oop_btn
			// 
			this->oop_btn->Location = System::Drawing::Point(0, 160);
			this->oop_btn->Name = L"oop_btn";
			this->oop_btn->Size = System::Drawing::Size(301, 39);
			this->oop_btn->TabIndex = 0;
			this->oop_btn->Text = L"Enroll";
			this->oop_btn->UseVisualStyleBackColor = true;
			this->oop_btn->Click += gcnew System::EventHandler(this, &MyForm::oop_btn_Click);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Black;
			this->panel17->Controls->Add(this->co_lb);
			this->panel17->Controls->Add(this->co_btn);
			this->panel17->Location = System::Drawing::Point(3, 835);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(304, 202);
			this->panel17->TabIndex = 13;
			// 
			// co_lb
			// 
			this->co_lb->BackColor = System::Drawing::Color::Transparent;
			this->co_lb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->co_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->co_lb->Location = System::Drawing::Point(0, 0);
			this->co_lb->Name = L"co_lb";
			this->co_lb->Size = System::Drawing::Size(301, 56);
			this->co_lb->TabIndex = 1;
			this->co_lb->Text = L"Co= 3ch";
			this->co_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// co_btn
			// 
			this->co_btn->Location = System::Drawing::Point(0, 160);
			this->co_btn->Name = L"co_btn";
			this->co_btn->Size = System::Drawing::Size(301, 39);
			this->co_btn->TabIndex = 0;
			this->co_btn->Text = L"Enroll";
			this->co_btn->UseVisualStyleBackColor = true;
			this->co_btn->Click += gcnew System::EventHandler(this, &MyForm::co_btn_Click);
			// 
			// pn_home
			// 
			this->pn_home->BackColor = System::Drawing::Color::White;
			this->pn_home->Controls->Add(this->label_home);
			this->pn_home->Controls->Add(this->pictureBox3);
			this->pn_home->Controls->Add(this->panel2);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(979, 571);
			this->pn_home->TabIndex = 0;
			this->pn_home->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_home_Paint);
			// 
			// label_home
			// 
			this->label_home->AutoSize = true;
			this->label_home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_home->Location = System::Drawing::Point(165, 96);
			this->label_home->Name = L"label_home";
			this->label_home->Size = System::Drawing::Size(82, 29);
			this->label_home->TabIndex = 13;
			this->label_home->Text = L"Home";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(43, 78);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(112, 58);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Location = System::Drawing::Point(43, 143);
			this->panel2->Margin = System::Windows::Forms::Padding(10);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(859, 237);
			this->panel2->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(31, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Computer Science";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(29, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(31, 124);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 20);
			this->label11->TabIndex = 1;
			this->label11->Text = L"MyForm";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(20, 151);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(192, 29);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Student Faculty";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(20, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(178, 29);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Student Name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(20, 16);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(190, 29);
			this->label23->TabIndex = 1;
			this->label23->Text = L"stundents code";
			// 
			// pn_shedule
			// 
			this->pn_shedule->BackColor = System::Drawing::Color::White;
			this->pn_shedule->Controls->Add(this->panel12);
			this->pn_shedule->Controls->Add(this->panel10);
			this->pn_shedule->Controls->Add(this->button14);
			this->pn_shedule->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_shedule->Location = System::Drawing::Point(0, 0);
			this->pn_shedule->Name = L"pn_shedule";
			this->pn_shedule->Size = System::Drawing::Size(979, 571);
			this->pn_shedule->TabIndex = 2;
			this->pn_shedule->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_shedule_Paint);
			// 
			// panel12
			// 
			this->panel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel12->Location = System::Drawing::Point(0, 484);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(979, 87);
			this->panel12->TabIndex = 6;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Red;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label3);
			this->panel10->Controls->Add(this->pictureBox7);
			this->panel10->Controls->Add(this->button18);
			this->panel10->Location = System::Drawing::Point(21, 86);
			this->panel10->Margin = System::Windows::Forms::Padding(10);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(238, 175);
			this->panel10->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label3->Location = System::Drawing::Point(45, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 1;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(68, 9);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 96);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// button18
			// 
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button18->Location = System::Drawing::Point(3, 115);
			this->button18->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->button18->Name = L"button18";
			this->button18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button18->Size = System::Drawing::Size(230, 56);
			this->button18->TabIndex = 4;
			this->button18->Text = L"Click Here";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Red;
			this->button14->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button14->Location = System::Drawing::Point(0, 7);
			this->button14->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->button14->Name = L"button14";
			this->button14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button14->Size = System::Drawing::Size(377, 56);
			this->button14->TabIndex = 5;
			this->button14->Text = L"display your schedule:";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1159, 620);
			this->Controls->Add(this->pa_con);
			this->Controls->Add(this->pa_navi);
			this->Controls->Add(this->pa_title);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pa_title->ResumeLayout(false);
			this->pa_title->PerformLayout();
			this->pa_navi->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->pn_info->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->pa_con->ResumeLayout(false);
			this->pn_Student->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->pn_home->ResumeLayout(false);
			this->pn_home->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->pn_shedule->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		


	private: System::Void pa_con_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState==FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Normal;
	}
	else
	{
		this->WindowState = FormWindowState::Maximized;
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_stu_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_Student->BringToFront();
}
private: System::Void btn_Home_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_home->BringToFront();
}
private: System::Void btn_sched_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_shedule->BringToFront();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private:
	bool label10Visible = true;	

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label10Visible) {
		label10->Visible = false;
		label10Visible = false;
	}
	else {
		label10->Visible = true;
		label10Visible = true;
	}
	if (pa_navi->Width == 180)
	{
		pa_navi->Width = 55;
		pn_info->Visible = false;
		button8->Location = System::Drawing::Point(3, 3);
		button8->BringToFront();

	}
	else
	{
		pa_navi->Width = 180;
		pn_info->Visible = true;
		button8->Location = System::Drawing::Point(136, 3);
		button8->BringToFront();
	}
	if (pn_info->Parent->Controls->GetChildIndex(pn_info) != pn_info->Parent->Controls->Count - 1) {
		// Send pn_info to the back
		pn_info->Parent->Controls->SetChildIndex(pn_info, pn_info->Parent->Controls->Count - 1);
	}
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pn_shedule_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_home_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel13_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
 





private: System::Void math_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream math("courses\\math.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(math, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(math, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a
		
		courses_enrolled << "math.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i <= stud_done.size(); i++) {
			for (int j = 0; j <= pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "math") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "math.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "math") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "math.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void phyis_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream phys("courses\\phys.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(phys, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(phys, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "phys.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i <= stud_done.size(); i++) {
			for (int j = 0; j <= pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "phys") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "phys.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "phys") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "phys.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void itp_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream itp("courses\\itp.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(itp, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(itp, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "itp.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i <= stud_done.size(); i++) {
			for (int j = 0; j <= pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "itp") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "itp.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "itp") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "itp.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void Ethics_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream ethics("courses\\ethics.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(ethics, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(ethics, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "ethics.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i <= stud_done.size(); i++) {
			for (int j = 0; j <= pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "ethics") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "ethics.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "ethics") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "ethics.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void ps_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream ps("courses\\ps.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(ps, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(ps, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "ps.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i <= stud_done.size(); i++) {
			for (int j = 0; j <= pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "ps") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "ps.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "ps") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "ps.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void DM_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream dm("courses\\dm.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(dm, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(dm, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "dm.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "dm") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "dm.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "dm") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "dm.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}

	
}
private: System::Void DLD_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream dld("courses\\dld.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(dld, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(dld, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "dld.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "dld") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "dld.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "dld") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "dld.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void cp_ps_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream cp_ps("courses\\cp_ps.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(cp_ps, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(cp_ps, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "cp_ps.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "cp_ps") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "cp_ps.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "cp_ps") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "cp_ps.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}

}
private: System::Void inovate_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream inovate("courses\\inovate.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(inovate, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(inovate, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "inovate.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i <= stud_done.size(); i++) {
			for (int j = 0; j <= pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "inovate") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "inovate.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "math") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "inovate.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}

}
private: System::Void ds_a_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream ds_a("courses\\ds_a.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(ds_a, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(ds_a, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "ds_a.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "math") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "ds_a.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "ds_a") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "ds_a.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}

}
private: System::Void dms_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream dms("courses\\dms.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(dms, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(dms, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "dms.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "dms") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "dms.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "dms") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "dms.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}

}
private: System::Void oop_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream oop("courses\\oop.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(oop, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(oop, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "oop.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "oop") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "oop.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "oop") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "oop.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}


}
private: System::Void co_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream courses_enrolled((*stud_enroll_files)[acc_logged_num_stud], std::ios::app);


	std::ifstream co("courses\\co.txt");
	std::vector<std::string> pre_req;
	std::string curr_line;
	std::string pre_num;
	std::getline(co, pre_num);
	for (int i = 0; i < stoi(pre_num); i++) {
		std::getline(co, curr_line);
		pre_req.push_back(curr_line);
	}


	std::ifstream courses_done((*stud_done_files)[acc_logged_num_stud]);
	std::vector<std::string> stud_done;
	std::string curr_line_stud;
	std::string done_num;
	std::getline(courses_done, done_num);
	for (int i = 0; i < stoi(done_num); i++) {
		std::getline(courses_done, curr_line_stud);
		stud_done.push_back(curr_line_stud);
	}




	if (pre_req.size() == 0 && stud_done.size() == 0) { //a

		courses_enrolled << "co.txt\n";
		MessageBox::Show("both are 0 , and added");
		courses_enrolled.close();

	}
	else if (pre_req.size() != 0 && stud_done.size() != 0) { // b
		std::vector<std::string> count_stud_match;

		for (int i = 0; i < stud_done.size(); i++) {
			for (int j = 0; j < pre_req.size(); j++) {
				if (stud_done[i] == pre_req[j]) {
					count_stud_match.push_back(pre_req[j]);
				}

				if (count_stud_match.size() == pre_req.size()) {
					bool already_done;
					for (int k = 0; k < stud_done.size(); k++) {
						if (stud_done[k] == "co") {
							already_done = true;
							break;
						}
						else {
							already_done = false;
						}
					}
					if (!already_done) {
						courses_enrolled << "co.txt\n";
						MessageBox::Show("added");
						courses_enrolled.close();
						break;
					}
					else {
						MessageBox::Show("course already done");
					}

				}
			}
			if (count_stud_match.size() == pre_req.size()) {
				break;
			}


		}
		if (count_stud_match.size() != pre_req.size()) {
			MessageBox::Show("you dont have all the requiered courses");
		}
	}
	else if (pre_req.size() != 0 && stud_done.size() == 0) { // c


		MessageBox::Show("you havnt finished any courses yet, you cant take this course");
	}
	else if (pre_req.size() == 0 && stud_done.size() != 0) { // d

		bool already_done;
		for (int k = 0; k < stud_done.size(); k++) {
			if (stud_done[k] == "co") {
				already_done = true;
				break;
			}
			else {
				already_done = false;
			}
		}
		if (!already_done) {
			courses_enrolled << "co.txt\n";
			MessageBox::Show("no pre_req, added");
			courses_enrolled.close();
		}
		else {
			MessageBox::Show("course already done");
		}
	}
}
};
}
