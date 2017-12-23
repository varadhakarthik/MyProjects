#pragma once
#include <iostream>
#include <cstring>


namespace TestP {

	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for FormUser
	/// </summary>

	public ref class FormUser : public System::Windows::Forms::Form
	{
	public:
		FormUser(void)
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
		~FormUser()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pBLogo;
	private: System::Windows::Forms::Button^  bt_Login;
	private: System::Windows::Forms::Panel^  pnLoginSuc;
	private: System::Windows::Forms::Label^  labelWelc;
	private: System::Windows::Forms::Label^  lableuser;


	private: System::Windows::Forms::Button^  pnLogout;
	private: System::Windows::Forms::Panel^  pnLogin;
	public: System::Windows::Forms::GroupBox^  groupBox1;
	private:

	private:

	public: System::Windows::Forms::TextBox^  tB_UserName;
	private: System::Windows::Forms::TextBox^  tB_Password;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormUser::typeid));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pBLogo = (gcnew System::Windows::Forms::PictureBox());
			this->bt_Login = (gcnew System::Windows::Forms::Button());
			this->pnLoginSuc = (gcnew System::Windows::Forms::Panel());
			this->labelWelc = (gcnew System::Windows::Forms::Label());
			this->lableuser = (gcnew System::Windows::Forms::Label());
			this->pnLogout = (gcnew System::Windows::Forms::Button());
			this->pnLogin = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Password = (gcnew System::Windows::Forms::TextBox());
			this->tB_UserName = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBLogo))->BeginInit();
			this->pnLoginSuc->SuspendLayout();
			this->pnLogin->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 55);
			this->label1->TabIndex = 7;
			this->label1->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 55);
			this->label2->TabIndex = 10;
			this->label2->Text = L"PassWord";
			// 
			// pBLogo
			// 
			this->pBLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pBLogo.BackgroundImage")));
			this->pBLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pBLogo->Location = System::Drawing::Point(762, 47);
			this->pBLogo->Name = L"pBLogo";
			this->pBLogo->Size = System::Drawing::Size(1019, 445);
			this->pBLogo->TabIndex = 11;
			this->pBLogo->TabStop = false;
			// 
			// bt_Login
			// 
			this->bt_Login->BackColor = System::Drawing::Color::AliceBlue;
			this->bt_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_Login->Location = System::Drawing::Point(344, 438);
			this->bt_Login->Name = L"bt_Login";
			this->bt_Login->Size = System::Drawing::Size(406, 88);
			this->bt_Login->TabIndex = 12;
			this->bt_Login->Text = L"Login";
			this->bt_Login->UseVisualStyleBackColor = false;
			this->bt_Login->Click += gcnew System::EventHandler(this, &FormUser::bt_Login_Click_1);
			// 
			// pnLoginSuc
			// 
			this->pnLoginSuc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pnLoginSuc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pnLoginSuc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnLoginSuc->Controls->Add(this->groupBox4);
			this->pnLoginSuc->Controls->Add(this->groupBox3);
			this->pnLoginSuc->Controls->Add(this->groupBox2);
			this->pnLoginSuc->Controls->Add(this->labelWelc);
			this->pnLoginSuc->Controls->Add(this->lableuser);
			this->pnLoginSuc->Controls->Add(this->pnLogout);
			this->pnLoginSuc->Location = System::Drawing::Point(3, 3);
			this->pnLoginSuc->Margin = System::Windows::Forms::Padding(22);
			this->pnLoginSuc->Name = L"pnLoginSuc";
			this->pnLoginSuc->Size = System::Drawing::Size(2831, 1281);
			this->pnLoginSuc->TabIndex = 13;
			this->pnLoginSuc->Visible = false;
			this->pnLoginSuc->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormUser::pnLoginSuc_Paint);
			// 
			// labelWelc
			// 
			this->labelWelc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelWelc->AutoSize = true;
			this->labelWelc->BackColor = System::Drawing::Color::AliceBlue;
			this->labelWelc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelWelc->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWelc->ForeColor = System::Drawing::Color::DarkRed;
			this->labelWelc->Location = System::Drawing::Point(1691, 57);
			this->labelWelc->Name = L"labelWelc";
			this->labelWelc->Size = System::Drawing::Size(273, 56);
			this->labelWelc->TabIndex = 4;
			this->labelWelc->Text = L"Welcome!";
			// 
			// lableuser
			// 
			this->lableuser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lableuser->AutoSize = true;
			this->lableuser->BackColor = System::Drawing::Color::AliceBlue;
			this->lableuser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lableuser->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lableuser->ForeColor = System::Drawing::Color::DarkRed;
			this->lableuser->Location = System::Drawing::Point(1984, 57);
			this->lableuser->Name = L"lableuser";
			this->lableuser->Size = System::Drawing::Size(191, 56);
			this->lableuser->TabIndex = 3;
			this->lableuser->Text = L"Admin";
			// 
			// pnLogout
			// 
			this->pnLogout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pnLogout->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnLogout->ForeColor = System::Drawing::Color::DarkRed;
			this->pnLogout->Location = System::Drawing::Point(2237, 42);
			this->pnLogout->Name = L"pnLogout";
			this->pnLogout->Size = System::Drawing::Size(470, 87);
			this->pnLogout->TabIndex = 1;
			this->pnLogout->Text = L"Logout";
			this->pnLogout->UseVisualStyleBackColor = true;
			this->pnLogout->Click += gcnew System::EventHandler(this, &FormUser::pnLogout_Click);
			// 
			// pnLogin
			// 
			this->pnLogin->Controls->Add(this->pnLoginSuc);
			this->pnLogin->Controls->Add(this->pBLogo);
			this->pnLogin->Controls->Add(this->groupBox1);
			this->pnLogin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnLogin->ImeMode = System::Windows::Forms::ImeMode::On;
			this->pnLogin->Location = System::Drawing::Point(0, 0);
			this->pnLogin->Name = L"pnLogin";
			this->pnLogin->Size = System::Drawing::Size(2837, 1296);
			this->pnLogin->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tB_Password);
			this->groupBox1->Controls->Add(this->tB_UserName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->bt_Login);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Blue;
			this->groupBox1->Location = System::Drawing::Point(698, 533);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1142, 534);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign IN";
			// 
			// tB_Password
			// 
			this->tB_Password->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tB_Password->Location = System::Drawing::Point(344, 293);
			this->tB_Password->MaxLength = 10;
			this->tB_Password->Multiline = true;
			this->tB_Password->Name = L"tB_Password";
			this->tB_Password->PasswordChar = '*';
			this->tB_Password->Size = System::Drawing::Size(747, 73);
			this->tB_Password->TabIndex = 17;
			// 
			// tB_UserName
			// 
			this->tB_UserName->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tB_UserName->Location = System::Drawing::Point(344, 133);
			this->tB_UserName->MaxLength = 10;
			this->tB_UserName->Multiline = true;
			this->tB_UserName->Name = L"tB_UserName";
			this->tB_UserName->Size = System::Drawing::Size(747, 73);
			this->tB_UserName->TabIndex = 16;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Location = System::Drawing::Point(76, 135);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(2681, 134);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AllowDrop = true;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Teal;
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Cambria", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(327, 42);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(9);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->RightToLeftLayout = true;
			this->dateTimePicker1->ShowCheckBox = true;
			this->dateTimePicker1->Size = System::Drawing::Size(803, 54);
			this->dateTimePicker1->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 40);
			this->label3->Margin = System::Windows::Forms::Padding(6);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(3);
			this->label3->Size = System::Drawing::Size(257, 53);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Posting Date";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(87, 297);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(664, 924);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Location = System::Drawing::Point(802, 316);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1933, 905);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			// 
			// FormUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2837, 1296);
			this->Controls->Add(this->pnLogin);
			this->Name = L"FormUser";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"FormUser";
			this->TransparencyKey = System::Drawing::Color::Aqua;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBLogo))->EndInit();
			this->pnLoginSuc->ResumeLayout(false);
			this->pnLoginSuc->PerformLayout();
			this->pnLogin->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		

		

		//login button
private: System::Void bt_Login_Click_1(System::Object^  sender, System::EventArgs^  e) {

		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=test";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ username = tB_UserName->Text;
		String^ password = tB_Password->Text;
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from logindetails where username='"+username+"'and password='"+password+"'", con);
		MySqlDataReader^ dr;
		try{
			con->Open();
			dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read())
			{
				count = count + 1;
			}
			if (count == 1){
				MessageBox::Show("Login Successful!");
				this->groupBox1->Visible = false;
				this->pnLoginSuc->Visible = true;
			}
			else{
				MessageBox::Show("Login UnSuccessful!");
			}
		}
	catch (Exception^ ex){
		MessageBox::Show(ex->Message);
	}
	
}
		 //logout button
private: System::Void pnLogout_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pnLoginSuc->Visible = false;
	this->pnLogin->Visible = true;
	this->groupBox1->Visible = true;
}

private: System::Void pnLoginSuc_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//lableuser->Text = tB_UserName;
}
};
}
