#include "MyForm.h"
#include"login_form.h"
#include"MyForm_Admin.h"
#include<string>
#include<vector>
#include<fstream>


using namespace System;
using namespace System::Windows::Forms;
using namespace std;

fstream& GotoLine(fstream& file, unsigned int num) {
	file.seekg(ios::beg);
	for (int i = 0; i < (num - 1); ++i) {
		file.ignore(numeric_limits < streamsize>::max(), '\n');
	}
	return file;
}

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CS::login_form form;
	CS::MyForm_Admin form3;

	int acc_logged_main;

	vector<string> acc_names_main;
	acc_names_main.push_back("admin.txt");
	acc_names_main.push_back("student1.txt");
	acc_names_main.push_back("student2.txt");

	while (true) {
		if (form.c_exist == false) {
			Application::Run(% form);
			acc_logged_main = form.acc_logged;
			
		}
		else if (form.c_exist == true) {
			fstream logged_acc(acc_names_main[acc_logged_main]);
			GotoLine(logged_acc, 3);
			string admin_stat;
			getline(logged_acc, admin_stat);

			if (admin_stat == "false") {
				CS::MyForm form2(acc_logged_main);
				form2.acc_logged_num_stud = acc_logged_main;
				Application::Run(% form2);
				
			}
			else if(admin_stat == "true"){
				Application::Run(% form3);
			}
		}
	}




}