#pragma once
#include "LoginForm.h"
#include "CoursesForm.h"
namespace LanguageSchoolApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MainPanel;
	private: System::Windows::Forms::Button^ Menu;
	private: System::Windows::Forms::Label^ lblAboutUs;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lblTeachers;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btnEditCourses;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ ContactPanel;

	private: System::Windows::Forms::MaskedTextBox^ textBoxPhone;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label14;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->ContactPanel = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxPhone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btnEditCourses = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lblTeachers = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblAboutUs = (gcnew System::Windows::Forms::Label());
			this->Menu = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MainPanel->SuspendLayout();
			this->ContactPanel->SuspendLayout();
			this->MenuPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->AutoScroll = true;
			this->MainPanel->AutoScrollMinSize = System::Drawing::Size(0, 2000);
			this->MainPanel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->MainPanel->Controls->Add(this->ContactPanel);
			this->MainPanel->Controls->Add(this->label6);
			this->MainPanel->Controls->Add(this->button15);
			this->MainPanel->Controls->Add(this->MenuPanel);
			this->MainPanel->Controls->Add(this->label5);
			this->MainPanel->Controls->Add(this->label4);
			this->MainPanel->Controls->Add(this->label1);
			this->MainPanel->Controls->Add(this->label3);
			this->MainPanel->Controls->Add(this->button13);
			this->MainPanel->Controls->Add(this->button12);
			this->MainPanel->Controls->Add(this->textBox1);
			this->MainPanel->Controls->Add(this->button11);
			this->MainPanel->Controls->Add(this->button10);
			this->MainPanel->Controls->Add(this->button9);
			this->MainPanel->Controls->Add(this->button8);
			this->MainPanel->Controls->Add(this->lblTeachers);
			this->MainPanel->Controls->Add(this->label2);
			this->MainPanel->Controls->Add(this->pictureBox3);
			this->MainPanel->Controls->Add(this->button7);
			this->MainPanel->Controls->Add(this->button6);
			this->MainPanel->Controls->Add(this->button5);
			this->MainPanel->Controls->Add(this->button4);
			this->MainPanel->Controls->Add(this->button3);
			this->MainPanel->Controls->Add(this->button2);
			this->MainPanel->Controls->Add(this->button1);
			this->MainPanel->Controls->Add(this->lblAboutUs);
			this->MainPanel->Controls->Add(this->Menu);
			this->MainPanel->Controls->Add(this->pictureBox2);
			this->MainPanel->Controls->Add(this->pictureBox5);
			this->MainPanel->Controls->Add(this->pictureBox4);
			this->MainPanel->Controls->Add(this->pictureBox1);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->Location = System::Drawing::Point(0, 0);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1260, 492);
			this->MainPanel->TabIndex = 0;
			// 
			// ContactPanel
			// 
			this->ContactPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ContactPanel->Controls->Add(this->label14);
			this->ContactPanel->Controls->Add(this->textBoxPhone);
			this->ContactPanel->Controls->Add(this->textBoxName);
			this->ContactPanel->Controls->Add(this->button18);
			this->ContactPanel->Controls->Add(this->label13);
			this->ContactPanel->Controls->Add(this->label10);
			this->ContactPanel->Location = System::Drawing::Point(737, 1594);
			this->ContactPanel->Name = L"ContactPanel";
			this->ContactPanel->Size = System::Drawing::Size(430, 180);
			this->ContactPanel->TabIndex = 33;
			this->ContactPanel->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label14->Location = System::Drawing::Point(404, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 25);
			this->label14->TabIndex = 37;
			this->label14->Text = L"X";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPhone->Location = System::Drawing::Point(188, 77);
			this->textBoxPhone->Mask = L"(+380) 00- 000-00-00";
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(211, 30);
			this->textBoxPhone->TabIndex = 36;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(188, 42);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(211, 30);
			this->textBoxName->TabIndex = 35;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::FloralWhite;
			this->button18->Location = System::Drawing::Point(147, 125);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(155, 43);
			this->button18->TabIndex = 34;
			this->button18->Text = L"Залишити ";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label13->Location = System::Drawing::Point(3, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(182, 25);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Номер телефону:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label10->Location = System::Drawing::Point(54, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 25);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Ім\'я дитини:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Crimson;
			this->label6->Location = System::Drawing::Point(3, 1397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 37);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Наші топ курси:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Control;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->Location = System::Drawing::Point(617, 1397);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(185, 36);
			this->button15->TabIndex = 31;
			this->button15->Text = L"Переглянути всі ";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MenuPanel->Controls->Add(this->textBox2);
			this->MenuPanel->Controls->Add(this->button17);
			this->MenuPanel->Controls->Add(this->button16);
			this->MenuPanel->Controls->Add(this->btnEditCourses);
			this->MenuPanel->Controls->Add(this->button14);
			this->MenuPanel->Location = System::Drawing::Point(76, 12);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(300, 223);
			this->MenuPanel->TabIndex = 30;
			this->MenuPanel->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(116, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 30);
			this->textBox2->TabIndex = 35;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightCyan;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(3, 32);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(107, 38);
			this->button17->TabIndex = 34;
			this->button17->Text = L"Пошук 🔍";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Location = System::Drawing::Point(37, 85);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(229, 38);
			this->button16->TabIndex = 33;
			this->button16->Text = L"Переглянути всі курси";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// btnEditCourses
			// 
			this->btnEditCourses->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnEditCourses->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditCourses->FlatAppearance->BorderSize = 0;
			this->btnEditCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditCourses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditCourses->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEditCourses->Location = System::Drawing::Point(47, 173);
			this->btnEditCourses->Name = L"btnEditCourses";
			this->btnEditCourses->Size = System::Drawing::Size(207, 38);
			this->btnEditCourses->TabIndex = 32;
			this->btnEditCourses->Text = L"Редагувати курс";
			this->btnEditCourses->UseVisualStyleBackColor = false;
			this->btnEditCourses->Visible = false;
			this->btnEditCourses->Click += gcnew System::EventHandler(this, &MyForm::btnEditCourses_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightCyan;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(47, 129);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(207, 38);
			this->button14->TabIndex = 31;
			this->button14->Text = L"Вхід адмін";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(614, 1329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 16);
			this->label5->TabIndex = 29;
			this->label5->Text = L".";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(936, 1501);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 16);
			this->label4->TabIndex = 28;
			this->label4->Text = L".";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(310, 832);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(897, 207);
			this->label1->TabIndex = 11;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1184, 1989);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 16);
			this->label3->TabIndex = 27;
			this->label3->Text = L".";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(211, 1645);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(495, 43);
			this->button13->TabIndex = 26;
			this->button13->Text = L"Залиш свій контакт для детальної консультації";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(211, 1708);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(480, 45);
			this->button12->TabIndex = 25;
			this->button12->Text = L"Записатись на обраний курс";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(629, 1558);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 30);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(297, 1439);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(163, 55);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Польська";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(506, 1439);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(170, 55);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Німецька";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(91, 1439);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(163, 55);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Англійська ";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(200, 1062);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(476, 67);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Записатись на пробне заняття";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// lblTeachers
			// 
			this->lblTeachers->AutoSize = true;
			this->lblTeachers->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeachers->ForeColor = System::Drawing::Color::Crimson;
			this->lblTeachers->Location = System::Drawing::Point(308, 795);
			this->lblTeachers->Name = L"lblTeachers";
			this->lblTeachers->Size = System::Drawing::Size(226, 37);
			this->lblTeachers->TabIndex = 13;
			this->lblTeachers->Text = L"Наші викладачі:";
			this->lblTeachers->Click += gcnew System::EventHandler(this, &MyForm::lblTeachers_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(3, 557);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(914, 98);
			this->label2->TabIndex = 14;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-48, 647);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(421, 392);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(592, 400);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(440, 51);
			this->button7->TabIndex = 9;
			this->button7->Text = L"🖋️ Записатись на пробне заняття";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(820, 334);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(264, 51);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Пошук курсу 🔍";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(539, 334);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(263, 51);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Залиш свій контакт";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(837, 264);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(231, 51);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Обери свій курс";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(560, 264);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(227, 51);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Контакти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(837, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 51);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Наші викладачі";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(572, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Про нас";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblAboutUs
			// 
			this->lblAboutUs->AutoSize = true;
			this->lblAboutUs->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAboutUs->ForeColor = System::Drawing::Color::Crimson;
			this->lblAboutUs->Location = System::Drawing::Point(3, 520);
			this->lblAboutUs->Name = L"lblAboutUs";
			this->lblAboutUs->Size = System::Drawing::Size(129, 37);
			this->lblAboutUs->TabIndex = 2;
			this->lblAboutUs->Text = L"Про нас:";
			this->lblAboutUs->Click += gcnew System::EventHandler(this, &MyForm::lblAboutUs_Click);
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::HotPink;
			this->Menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Menu->FlatAppearance->BorderSize = 0;
			this->Menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Menu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Menu->Location = System::Drawing::Point(3, 3);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(98, 35);
			this->Menu->TabIndex = 0;
			this->Menu->Text = L"Menu";
			this->Menu->UseVisualStyleBackColor = false;
			this->Menu->Click += gcnew System::EventHandler(this, &MyForm::Menu_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(916, 470);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(291, 359);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-229, 1042);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(1632, 979);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 19;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(72, 671);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1176, 418);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(200, -15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(868, 739);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1260, 492);
			this->Controls->Add(this->MainPanel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->MainPanel->ResumeLayout(false);
			this->MainPanel->PerformLayout();
			this->ContactPanel->ResumeLayout(false);
			this->ContactPanel->PerformLayout();
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MainPanel->ScrollControlIntoView(label3);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->ScrollControlIntoView(lblAboutUs);
	MainPanel->ScrollControlIntoView(label2);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblAboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblTeachers_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->ScrollControlIntoView(lblTeachers);
	MainPanel->ScrollControlIntoView(label1);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();

	courses->comboBoxLang->SelectedItem = "Польська";

	courses->ShowDialog();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();
	courses->ShowDialog();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->ScrollControlIntoView(label4);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->ScrollControlIntoView(label3);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->ScrollControlIntoView(button13);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->ScrollControlIntoView(label5);
}
private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MenuPanel->Visible == false) {
		MenuPanel->Visible = true;
		MenuPanel->BringToFront(); 
	}
	else {
		MenuPanel->Visible = false;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ login = gcnew LoginForm();

	if (login->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		btnEditCourses->Visible = true;

		MessageBox::Show("Administrator mode is activated. Now you can edit the data.", "System", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();
	courses->ShowDialog();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();
	courses->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();

	courses->comboBoxLang->SelectedItem = "Англійська";

	courses->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();

	courses->comboBoxLang->SelectedItem = "Німецька";

	courses->ShowDialog();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchRequest = textBox2->Text->Trim();

	if (searchRequest == "") return;

	CoursesForm^ courses = gcnew CoursesForm();
	bool isFound = false;

	for (int i = 0; i < courses->comboBoxLang->Items->Count; i++) {
		if (courses->comboBoxLang->Items[i]->ToString()->ToLower()->Contains(searchRequest->ToLower())) {
			courses->comboBoxLang->SelectedIndex = i;
			isFound = true;
			break;
		}
	}

	if (isFound) {
		courses->ShowDialog();
	}
	else {
		MessageBox::Show("На жаль, курсу з мови '" + searchRequest + "' поки що немає. Спробуйте іншу!", "Пошук");
		delete courses;
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	ContactPanel->Location = System::Drawing::Point(250, 150);

	ContactPanel->Visible = true;
	ContactPanel->BringToFront();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxName->Text == "") {
		MessageBox::Show("Будь ласка, введіть ім'я дитини!", "Увага");
		return; 
	}
	if (textBoxPhone->MaskCompleted == false) {
		MessageBox::Show("Будь ласка, введіть номер телефону повністю!", "Увага");
		return; 
	}

	try {
		String^ name = textBoxName->Text;
		String^ phone = textBoxPhone->Text;

		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("Контакти_Клієнтів.txt", true);
		sw->WriteLine("Ім'я: " + name + " | Тел: " + phone);
		sw->Close();

		MessageBox::Show("Дякуємо! Ми зателефонуємо вам найближчим часом.", "Успіх");

		textBoxName->Clear();
		textBoxPhone->Clear();
		ContactPanel->Visible = false;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Помилка: " + ex->Message);
	}
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		e->SuppressKeyPress = true; 

		String^ searchRequest = textBox1->Text->Trim(); 
		if (searchRequest == "") return;

		CoursesForm^ courses = gcnew CoursesForm();
		bool isFound = false;

		for (int i = 0; i < courses->comboBoxLang->Items->Count; i++) {
			if (courses->comboBoxLang->Items[i]->ToString()->ToLower()->Contains(searchRequest->ToLower())) {
				courses->comboBoxLang->SelectedIndex = i;
				isFound = true;
				break;
			}
		}

		if (isFound) {
			courses->ShowDialog();
		}
		else {
			MessageBox::Show("На жаль, курсу з мови '" + searchRequest + "' поки що немає.", "Пошук");
			delete courses;
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();
	courses->ShowDialog();
}
private: System::Void btnEditCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesForm^ courses = gcnew CoursesForm();

	courses->btnAdd->Visible = true;
	courses->btnDelete->Visible = true;

	courses->Text = "Режим Адміністратора - Редагування курсів";

	courses->ShowDialog();
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	ContactPanel->Visible = false;
}
};
}
