#pragma once
#include "StudentHome.h"

namespace cs3321Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtUsername;
	protected:
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;

	private: System::Windows::Forms::Button^  btnLogin;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(158, 287);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(400, 38);
			this->txtUsername->TabIndex = 0;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtUsername_TextChanged);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lblUsername->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(150, 220);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(204, 47);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"Username";
			this->lblUsername->Click += gcnew System::EventHandler(this, &LoginForm::lblUsername_Click);
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(150, 373);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(195, 47);
			this->lblPassword->TabIndex = 2;
			this->lblPassword->Text = L"Password";
			this->lblPassword->Click += gcnew System::EventHandler(this, &LoginForm::lblPassword_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(158, 444);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(400, 38);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtPassword_TextChanged);
			// 
			// btnLogin
			// 
			this->btnLogin->AutoSize = true;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(267, 542);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(111, 49);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(69, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1524, 888);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->txtUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UHD Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void lblUsername_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void lblPassword_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {

	try
	{
		if (txtUsername->Text == "student" && txtPassword->Text == "student")
		{
			// code to go to next form goes here if username and password is correct
			this->Hide();

			StudentHome^ s_home = gcnew StudentHome;
			s_home->ShowDialog();

			this->Close();

		}
		else
		{
			MessageBox::Show("Incorrect Username or Password. ");
		}



	}
	catch (...)
	{
		MessageBox::Show("There was an error ");
	}



	}
private: System::Void txtUsername_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
