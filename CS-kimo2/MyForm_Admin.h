#pragma once

namespace CS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm_Admin
	/// </summary>
	public ref class MyForm_Admin : public System::Windows::Forms::Form
	{
	public:
		MyForm_Admin(void)
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
		~MyForm_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pa_title;
	private: System::Windows::Forms::Panel^ pa_cont;
	private: System::Windows::Forms::Panel^ pa_info;

	private: System::Windows::Forms::Panel^ pa_navi;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_minim;
	private: System::Windows::Forms::Button^ btn_hide;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btn_Home;

	private: System::Windows::Forms::Button^ btn_sched;
	private: System::Windows::Forms::Button^ btn_log;
	private: System::Windows::Forms::Button^ button_collabs;


	private: System::Windows::Forms::Panel^ pn_home;





	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;









	private: System::Windows::Forms::Panel^ pn_scedule;





















	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Panel^ panel15;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
















		   bool dragging;
		   Point offset;
private: System::Windows::Forms::Label^ label_home;








private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Panel^ timer_input_pn;
private: System::Windows::Forms::ComboBox^ comboBox1;
















































































































	private: System::ComponentModel::IContainer^ components;
































	protected:







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_Admin::typeid));
			this->pa_title = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_hide = (gcnew System::Windows::Forms::Button());
			this->btn_minim = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->pa_cont = (gcnew System::Windows::Forms::Panel());
			this->pn_scedule = (gcnew System::Windows::Forms::Panel());
			this->timer_input_pn = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label_home = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pa_info = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pa_navi = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_Home = (gcnew System::Windows::Forms::Button());
			this->btn_sched = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_collabs = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pa_title->SuspendLayout();
			this->pa_cont->SuspendLayout();
			this->pn_scedule->SuspendLayout();
			this->timer_input_pn->SuspendLayout();
			this->pn_home->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->pa_info->SuspendLayout();
			this->pa_navi->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->SuspendLayout();
			// 
			// pa_title
			// 
			this->pa_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pa_title->Controls->Add(this->label1);
			this->pa_title->Controls->Add(this->btn_hide);
			this->pa_title->Controls->Add(this->btn_minim);
			this->pa_title->Controls->Add(this->btn_exit);
			this->pa_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->pa_title->Location = System::Drawing::Point(0, 0);
			this->pa_title->Name = L"pa_title";
			this->pa_title->Size = System::Drawing::Size(960, 49);
			this->pa_title->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(439, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"MIU";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_hide
			// 
			this->btn_hide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_hide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_hide.BackgroundImage")));
			this->btn_hide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_hide->FlatAppearance->BorderSize = 0;
			this->btn_hide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_hide->Location = System::Drawing::Point(809, 5);
			this->btn_hide->Name = L"btn_hide";
			this->btn_hide->Size = System::Drawing::Size(45, 38);
			this->btn_hide->TabIndex = 3;
			this->btn_hide->UseVisualStyleBackColor = true;
			this->btn_hide->Click += gcnew System::EventHandler(this, &MyForm_Admin::btn_hide_Click);
			// 
			// btn_minim
			// 
			this->btn_minim->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_minim->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_minim.BackgroundImage")));
			this->btn_minim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_minim->FlatAppearance->BorderSize = 0;
			this->btn_minim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minim->Location = System::Drawing::Point(860, 6);
			this->btn_minim->Name = L"btn_minim";
			this->btn_minim->Size = System::Drawing::Size(41, 35);
			this->btn_minim->TabIndex = 2;
			this->btn_minim->UseVisualStyleBackColor = true;
			this->btn_minim->Click += gcnew System::EventHandler(this, &MyForm_Admin::btn_minim_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_exit.BackgroundImage")));
			this->btn_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_exit->FlatAppearance->BorderSize = 0;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Location = System::Drawing::Point(907, 3);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(41, 40);
			this->btn_exit->TabIndex = 1;
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm_Admin::button1_Click_1);
			// 
			// pa_cont
			// 
			this->pa_cont->Controls->Add(this->pn_scedule);
			this->pa_cont->Controls->Add(this->pn_home);
			this->pa_cont->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pa_cont->Location = System::Drawing::Point(0, 49);
			this->pa_cont->Name = L"pa_cont";
			this->pa_cont->Size = System::Drawing::Size(960, 488);
			this->pa_cont->TabIndex = 1;
			// 
			// pn_scedule
			// 
			this->pn_scedule->Controls->Add(this->timer_input_pn);
			this->pn_scedule->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_scedule->Location = System::Drawing::Point(0, 0);
			this->pn_scedule->Name = L"pn_scedule";
			this->pn_scedule->Size = System::Drawing::Size(960, 488);
			this->pn_scedule->TabIndex = 2;
			// 
			// timer_input_pn
			// 
			this->timer_input_pn->Controls->Add(this->comboBox1);
			this->timer_input_pn->Dock = System::Windows::Forms::DockStyle::Right;
			this->timer_input_pn->Location = System::Drawing::Point(180, 0);
			this->timer_input_pn->Name = L"timer_input_pn";
			this->timer_input_pn->Size = System::Drawing::Size(780, 488);
			this->timer_input_pn->TabIndex = 25;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"math", L"phys", L"itp", L"ethics", L"ps", L"dm",
					L"dld", L"cp_ps", L"inovate", L"ds_a", L"dms", L"oop", L"co"
			});
			this->comboBox1->Location = System::Drawing::Point(77, 9);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(538, 25);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm_Admin::comboBox1_SelectedIndexChanged);
			// 
			// pn_home
			// 
			this->pn_home->Controls->Add(this->panel15);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(960, 488);
			this->pn_home->TabIndex = 0;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::White;
			this->panel15->Controls->Add(this->label8);
			this->panel15->Controls->Add(this->label_home);
			this->panel15->Controls->Add(this->pictureBox6);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(960, 488);
			this->panel15->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(198, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 51);
			this->label8->TabIndex = 14;
			this->label8->Text = L"admin";
			// 
			// label_home
			// 
			this->label_home->AutoSize = true;
			this->label_home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_home->Location = System::Drawing::Point(319, 98);
			this->label_home->Name = L"label_home";
			this->label_home->Size = System::Drawing::Size(82, 29);
			this->label_home->TabIndex = 13;
			this->label_home->Text = L"Home";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(197, 80);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(112, 58);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// pa_info
			// 
			this->pa_info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pa_info->Controls->Add(this->button9);
			this->pa_info->Controls->Add(this->button7);
			this->pa_info->Controls->Add(this->button6);
			this->pa_info->Controls->Add(this->button5);
			this->pa_info->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pa_info->Location = System::Drawing::Point(0, 453);
			this->pa_info->Name = L"pa_info";
			this->pa_info->Size = System::Drawing::Size(960, 84);
			this->pa_info->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->ForeColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(679, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(116, 74);
			this->button9->TabIndex = 4;
			this->button9->Text = L"edit";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(543, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(116, 74);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(406, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 74);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Edit";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(273, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 74);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Details";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// pa_navi
			// 
			this->pa_navi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pa_navi->Controls->Add(this->flowLayoutPanel1);
			this->pa_navi->Controls->Add(this->panel1);
			this->pa_navi->Dock = System::Windows::Forms::DockStyle::Left;
			this->pa_navi->Location = System::Drawing::Point(0, 49);
			this->pa_navi->Name = L"pa_navi";
			this->pa_navi->Size = System::Drawing::Size(177, 404);
			this->pa_navi->TabIndex = 1;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label10);
			this->flowLayoutPanel1->Controls->Add(this->btn_Home);
			this->flowLayoutPanel1->Controls->Add(this->btn_sched);
			this->flowLayoutPanel1->Controls->Add(this->btn_log);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 101);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(177, 303);
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
			this->label10->Size = System::Drawing::Size(86, 29);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Admin";
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
			this->btn_Home->TabIndex = 4;
			this->btn_Home->Text = L"Home";
			this->btn_Home->UseVisualStyleBackColor = true;
			// 
			// btn_sched
			// 
			this->btn_sched->FlatAppearance->BorderSize = 0;
			this->btn_sched->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sched->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sched->ForeColor = System::Drawing::Color::Red;
			this->btn_sched->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sched.Image")));
			this->btn_sched->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_sched->Location = System::Drawing::Point(3, 102);
			this->btn_sched->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->btn_sched->Name = L"btn_sched";
			this->btn_sched->Size = System::Drawing::Size(214, 56);
			this->btn_sched->TabIndex = 7;
			this->btn_sched->Text = L"  customize schedules ";
			this->btn_sched->UseVisualStyleBackColor = true;
			// 
			// btn_log
			// 
			this->btn_log->FlatAppearance->BorderSize = 0;
			this->btn_log->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_log->ForeColor = System::Drawing::Color::Red;
			this->btn_log->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_log.Image")));
			this->btn_log->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_log->Location = System::Drawing::Point(3, 168);
			this->btn_log->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(177, 56);
			this->btn_log->TabIndex = 8;
			this->btn_log->Text = L"LogOut";
			this->btn_log->UseVisualStyleBackColor = true;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm_Admin::btn_log_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button_collabs);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(177, 101);
			this->panel1->TabIndex = 0;
			// 
			// button_collabs
			// 
			this->button_collabs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_collabs->BackColor = System::Drawing::Color::Silver;
			this->button_collabs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_collabs.BackgroundImage")));
			this->button_collabs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_collabs->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_collabs->FlatAppearance->BorderSize = 0;
			this->button_collabs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_collabs->Location = System::Drawing::Point(133, 3);
			this->button_collabs->Name = L"button_collabs";
			this->button_collabs->Size = System::Drawing::Size(41, 31);
			this->button_collabs->TabIndex = 4;
			this->button_collabs->UseVisualStyleBackColor = false;
			this->button_collabs->Click += gcnew System::EventHandler(this, &MyForm_Admin::button_collabs_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(0, 0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 100);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 3;
			this->pictureBox12->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// MyForm_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(960, 537);
			this->Controls->Add(this->pa_navi);
			this->Controls->Add(this->pa_info);
			this->Controls->Add(this->pa_cont);
			this->Controls->Add(this->pa_title);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm_Admin";
			this->Text = L"MyForm_Admin";
			this->pa_title->ResumeLayout(false);
			this->pa_title->PerformLayout();
			this->pa_cont->ResumeLayout(false);
			this->pn_scedule->ResumeLayout(false);
			this->timer_input_pn->ResumeLayout(false);
			this->pn_home->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->pa_info->ResumeLayout(false);
			this->pa_navi->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_Home_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_stu_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_sched_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btn_stu_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void pn_home_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_collabs_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pa_navi->Width == 177)
	{
		pa_navi->Width = 55;
		

	}
	else
	{
		pa_navi->Width = 177;
	}
}
private: System::Void btn_hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void btn_minim_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Normal;
	}
	else
	{
		this->WindowState = FormWindowState::Maximized;
	}
}


private: System::Void btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void math_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void math_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

