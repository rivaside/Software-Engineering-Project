#pragma once
#include "student.h"

namespace cs3321Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentHome
	/// </summary>
	public ref class StudentHome : public System::Windows::Forms::Form
	{
	public:
		StudentHome(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			STUDENT ONLY_STUDENT;

			String^ crs1 = gcnew String(ONLY_STUDENT.getCourse(1).c_str());
			String^ crs2 = gcnew String(ONLY_STUDENT.getCourse(2).c_str());
			String^ crs3 = gcnew String(ONLY_STUDENT.getCourse(3).c_str());
			String^ crs4 = gcnew String(ONLY_STUDENT.getCourse(4).c_str());

			lblCourse1->Text = crs1;
			lblCourse2->Text = crs2;
			lblCourse3->Text = crs3;
			lblCourse4->Text = crs4;


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentHome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lblCourse1;
	private: System::Windows::Forms::Label^  lblCourse4;

	private: System::Windows::Forms::Label^  lblCourse3;

	private: System::Windows::Forms::Label^  lblCourse2;




	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnGrade1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentHome::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnGrade1 = (gcnew System::Windows::Forms::Button());
			this->lblCourse4 = (gcnew System::Windows::Forms::Label());
			this->lblCourse3 = (gcnew System::Windows::Forms::Label());
			this->lblCourse2 = (gcnew System::Windows::Forms::Label());
			this->lblCourse1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(604, 696);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(179, 70);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &StudentHome::btnExit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->btnGrade1);
			this->groupBox1->Controls->Add(this->lblCourse4);
			this->groupBox1->Controls->Add(this->lblCourse3);
			this->groupBox1->Controls->Add(this->lblCourse2);
			this->groupBox1->Controls->Add(this->lblCourse1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Location = System::Drawing::Point(42, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(322, 452);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Courses";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(138, 357);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 60);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Grades";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(138, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 60);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Grades";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 60);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grades";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnGrade1
			// 
			this->btnGrade1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnGrade1->Location = System::Drawing::Point(138, 70);
			this->btnGrade1->Name = L"btnGrade1";
			this->btnGrade1->Size = System::Drawing::Size(150, 60);
			this->btnGrade1->TabIndex = 4;
			this->btnGrade1->Text = L"Grades";
			this->btnGrade1->UseVisualStyleBackColor = true;
			// 
			// lblCourse4
			// 
			this->lblCourse4->AutoSize = true;
			this->lblCourse4->Location = System::Drawing::Point(28, 365);
			this->lblCourse4->Name = L"lblCourse4";
			this->lblCourse4->Size = System::Drawing::Size(93, 32);
			this->lblCourse4->TabIndex = 3;
			this->lblCourse4->Text = L"label4";
			// 
			// lblCourse3
			// 
			this->lblCourse3->AutoSize = true;
			this->lblCourse3->Location = System::Drawing::Point(28, 265);
			this->lblCourse3->Name = L"lblCourse3";
			this->lblCourse3->Size = System::Drawing::Size(93, 32);
			this->lblCourse3->TabIndex = 2;
			this->lblCourse3->Text = L"label3";
			// 
			// lblCourse2
			// 
			this->lblCourse2->AutoSize = true;
			this->lblCourse2->Location = System::Drawing::Point(28, 169);
			this->lblCourse2->Name = L"lblCourse2";
			this->lblCourse2->Size = System::Drawing::Size(93, 32);
			this->lblCourse2->TabIndex = 1;
			this->lblCourse2->Text = L"label2";
			// 
			// lblCourse1
			// 
			this->lblCourse1->AutoSize = true;
			this->lblCourse1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCourse1->Location = System::Drawing::Point(28, 78);
			this->lblCourse1->Name = L"lblCourse1";
			this->lblCourse1->Size = System::Drawing::Size(93, 32);
			this->lblCourse1->TabIndex = 0;
			this->lblCourse1->Text = L"label1";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Enroll", L"Drop" });
			this->comboBox1->Location = System::Drawing::Point(42, 564);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(250, 39);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Edit Schedule";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1100, 150);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Matura MT Script Capitals", 20.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(456, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(665, 90);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Student Information";
			// 
			// StudentHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1524, 888);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnExit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"StudentHome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentHome";
			this->Load += gcnew System::EventHandler(this, &StudentHome::StudentHome_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Exit();
	}
	private: System::Void StudentHome_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
