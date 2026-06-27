#pragma once

namespace LanguageSchoolApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CoursesForm
	/// </summary>
	public ref class CoursesForm : public System::Windows::Forms::Form
	{
	public:
		CoursesForm(void)
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
		~CoursesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxAge;
	public: System::Windows::Forms::ComboBox^ comboBoxLang;
	private:



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ RegPanel;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::TextBox^ textBoxName;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ lblSelectedLang;
	private: System::Windows::Forms::Label^ lblSelectedAge;
	private: System::Windows::Forms::MaskedTextBox^ textBoxPhone;
	public: System::Windows::Forms::Button^ btnDelete;
	private:

	public: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Panel^ AdminAddPanel;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::ComboBox^ comboBoxTeachers;
	private: System::Windows::Forms::Label^ lblTeacherOnPanel;
	public:
	private: System::Windows::Forms::Label^ label19;
	private:
	public:
	private:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CoursesForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAge = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxLang = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->RegPanel = (gcnew System::Windows::Forms::Panel());
			this->textBoxPhone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lblSelectedAge = (gcnew System::Windows::Forms::Label());
			this->lblSelectedLang = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->AdminAddPanel = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTeachers = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lblTeacherOnPanel = (gcnew System::Windows::Forms::Label());
			this->RegPanel->SuspendLayout();
			this->AdminAddPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(29, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Оберіть вік дитини:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Brown;
			this->label2->Location = System::Drawing::Point(397, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Оберіть мову:";
			// 
			// comboBoxAge
			// 
			this->comboBoxAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxAge->FormattingEnabled = true;
			this->comboBoxAge->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"5-8", L"9-12", L"13-16", L"16-18" });
			this->comboBoxAge->Location = System::Drawing::Point(229, 43);
			this->comboBoxAge->Name = L"comboBoxAge";
			this->comboBoxAge->Size = System::Drawing::Size(132, 33);
			this->comboBoxAge->TabIndex = 2;
			this->comboBoxAge->SelectedIndexChanged += gcnew System::EventHandler(this, &CoursesForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBoxLang
			// 
			this->comboBoxLang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxLang->FormattingEnabled = true;
			this->comboBoxLang->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Англійська", L"Німецька", L"Польська", L"Китайська",
					L"Італійська"
			});
			this->comboBoxLang->Location = System::Drawing::Point(547, 40);
			this->comboBoxLang->Name = L"comboBoxLang";
			this->comboBoxLang->Size = System::Drawing::Size(133, 33);
			this->comboBoxLang->TabIndex = 3;
			this->comboBoxLang->SelectedIndexChanged += gcnew System::EventHandler(this, &CoursesForm::comboBoxLang_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(28, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Англійська";
			this->label3->Click += gcnew System::EventHandler(this, &CoursesForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(28, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Польська";
			this->label4->Click += gcnew System::EventHandler(this, &CoursesForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(28, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 32);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Німецька";
			this->label5->Click += gcnew System::EventHandler(this, &CoursesForm::label5_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label6->Location = System::Drawing::Point(214, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(837, 101);
			this->label6->TabIndex = 15;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label7->Location = System::Drawing::Point(214, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(858, 97);
			this->label7->TabIndex = 16;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label8->Location = System::Drawing::Point(224, 351);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(858, 152);
			this->label8->TabIndex = 17;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// RegPanel
			// 
			this->RegPanel->BackColor = System::Drawing::SystemColors::Info;
			this->RegPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->RegPanel->Controls->Add(this->lblTeacherOnPanel);
			this->RegPanel->Controls->Add(this->label19);
			this->RegPanel->Controls->Add(this->textBoxPhone);
			this->RegPanel->Controls->Add(this->lblSelectedAge);
			this->RegPanel->Controls->Add(this->lblSelectedLang);
			this->RegPanel->Controls->Add(this->label14);
			this->RegPanel->Controls->Add(this->textBoxName);
			this->RegPanel->Controls->Add(this->button1);
			this->RegPanel->Controls->Add(this->label13);
			this->RegPanel->Controls->Add(this->label12);
			this->RegPanel->Controls->Add(this->label11);
			this->RegPanel->Controls->Add(this->label10);
			this->RegPanel->Controls->Add(this->label9);
			this->RegPanel->Location = System::Drawing::Point(34, 102);
			this->RegPanel->Name = L"RegPanel";
			this->RegPanel->Size = System::Drawing::Size(678, 287);
			this->RegPanel->TabIndex = 18;
			this->RegPanel->Visible = false;
			this->RegPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CoursesForm::RegPanel_Paint);
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPhone->Location = System::Drawing::Point(221, 183);
			this->textBoxPhone->Mask = L"(+380) 00- 000-00-00";
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(211, 30);
			this->textBoxPhone->TabIndex = 31;
			// 
			// lblSelectedAge
			// 
			this->lblSelectedAge->AutoSize = true;
			this->lblSelectedAge->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblSelectedAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSelectedAge->Location = System::Drawing::Point(216, 65);
			this->lblSelectedAge->Name = L"lblSelectedAge";
			this->lblSelectedAge->Size = System::Drawing::Size(17, 25);
			this->lblSelectedAge->TabIndex = 30;
			this->lblSelectedAge->Text = L".";
			// 
			// lblSelectedLang
			// 
			this->lblSelectedLang->AutoSize = true;
			this->lblSelectedLang->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblSelectedLang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSelectedLang->Location = System::Drawing::Point(470, 19);
			this->lblSelectedLang->Name = L"lblSelectedLang";
			this->lblSelectedLang->Size = System::Drawing::Size(17, 25);
			this->lblSelectedLang->TabIndex = 29;
			this->lblSelectedLang->Text = L".";
			this->lblSelectedLang->Click += gcnew System::EventHandler(this, &CoursesForm::lblSelectedLang_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label14->Location = System::Drawing::Point(650, 5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 25);
			this->label14->TabIndex = 28;
			this->label14->Text = L"X";
			this->label14->Click += gcnew System::EventHandler(this, &CoursesForm::label14_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(221, 138);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(211, 30);
			this->textBoxName->TabIndex = 26;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &CoursesForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FloralWhite;
			this->button1->Location = System::Drawing::Point(249, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 43);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Записатись";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CoursesForm::button1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label13->Location = System::Drawing::Point(19, 188);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(182, 25);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Номер телефону:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label12->Location = System::Drawing::Point(399, 19);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Мова:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label11->Location = System::Drawing::Point(157, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Вік:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label10->Location = System::Drawing::Point(73, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Ім\'я дитини:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Brown;
			this->label9->Location = System::Drawing::Point(19, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(356, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Реєстрація на пробний обраний урок:";
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDelete->ForeColor = System::Drawing::Color::FloralWhite;
			this->btnDelete->Location = System::Drawing::Point(21, 516);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(155, 43);
			this->btnDelete->TabIndex = 32;
			this->btnDelete->Text = L"Видалення";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Visible = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CoursesForm::button2_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->ForeColor = System::Drawing::Color::FloralWhite;
			this->btnAdd->Location = System::Drawing::Point(206, 516);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(155, 43);
			this->btnAdd->TabIndex = 33;
			this->btnAdd->Text = L"Додати +";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Visible = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CoursesForm::btnAdd_Click);
			// 
			// AdminAddPanel
			// 
			this->AdminAddPanel->BackColor = System::Drawing::Color::MistyRose;
			this->AdminAddPanel->Controls->Add(this->textBox2);
			this->AdminAddPanel->Controls->Add(this->textBox1);
			this->AdminAddPanel->Controls->Add(this->button2);
			this->AdminAddPanel->Controls->Add(this->label18);
			this->AdminAddPanel->Controls->Add(this->label17);
			this->AdminAddPanel->Controls->Add(this->label16);
			this->AdminAddPanel->Controls->Add(this->label15);
			this->AdminAddPanel->Location = System::Drawing::Point(480, 320);
			this->AdminAddPanel->Name = L"AdminAddPanel";
			this->AdminAddPanel->Size = System::Drawing::Size(571, 193);
			this->AdminAddPanel->TabIndex = 34;
			this->AdminAddPanel->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(299, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 30);
			this->textBox2->TabIndex = 35;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(299, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 30);
			this->textBox1->TabIndex = 32;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::FloralWhite;
			this->button2->Location = System::Drawing::Point(412, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 43);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Зберегти";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CoursesForm::button2_Click_1);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Brown;
			this->label18->Location = System::Drawing::Point(17, 17);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(242, 25);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Додавання нового курсу:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(91, 97);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(194, 25);
			this->label17->TabIndex = 33;
			this->label17->Text = L"Вкажіть викладача:";
			this->label17->Click += gcnew System::EventHandler(this, &CoursesForm::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(15, 56);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(270, 25);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Вкажіть назву нового курсу:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label15->Location = System::Drawing::Point(542, 6);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 25);
			this->label15->TabIndex = 32;
			this->label15->Text = L"X";
			this->label15->Click += gcnew System::EventHandler(this, &CoursesForm::label15_Click);
			// 
			// comboBoxTeachers
			// 
			this->comboBoxTeachers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxTeachers->FormattingEnabled = true;
			this->comboBoxTeachers->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Олена (Ms. Helen)", L"Максим (Herr Max)",
					L"Катерина (Pani Kasia)", L"Лілія (Lili Laoshi)", L"Марко (Maestro Marco)"
			});
			this->comboBoxTeachers->Location = System::Drawing::Point(763, 40);
			this->comboBoxTeachers->Name = L"comboBoxTeachers";
			this->comboBoxTeachers->Size = System::Drawing::Size(121, 33);
			this->comboBoxTeachers->TabIndex = 35;
			this->comboBoxTeachers->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label19->Location = System::Drawing::Point(95, 99);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 25);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Викладач:";
			// 
			// lblTeacherOnPanel
			// 
			this->lblTeacherOnPanel->AutoSize = true;
			this->lblTeacherOnPanel->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblTeacherOnPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTeacherOnPanel->Location = System::Drawing::Point(216, 99);
			this->lblTeacherOnPanel->Name = L"lblTeacherOnPanel";
			this->lblTeacherOnPanel->Size = System::Drawing::Size(17, 25);
			this->lblTeacherOnPanel->TabIndex = 33;
			this->lblTeacherOnPanel->Text = L".";
			// 
			// CoursesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1102, 590);
			this->Controls->Add(this->comboBoxTeachers);
			this->Controls->Add(this->AdminAddPanel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->RegPanel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxLang);
			this->Controls->Add(this->comboBoxAge);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CoursesForm";
			this->Text = L"CoursesForm";
			this->RegPanel->ResumeLayout(false);
			this->RegPanel->PerformLayout();
			this->AdminAddPanel->ResumeLayout(false);
			this->AdminAddPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	RegPanel->Visible = false;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	lblSelectedLang->Text = "Англійська";
	RegPanel->Visible = true;
	RegPanel->BringToFront();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	lblSelectedLang->Text = "Польська";
	RegPanel->Visible = true;
	RegPanel->BringToFront();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	lblSelectedLang->Text = "Німецька";
	RegPanel->Visible = true;
	RegPanel->BringToFront();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxAge->SelectedIndex != -1 && comboBoxLang->SelectedIndex != -1) {
		
		lblSelectedLang->Text = comboBoxLang->SelectedItem->ToString();
		lblSelectedAge->Text = comboBoxAge->SelectedItem->ToString();

		int courseIndex = comboBoxLang->SelectedIndex; 
		lblTeacherOnPanel->Text = comboBoxTeachers->Items[courseIndex]->ToString();
		
		RegPanel->Visible = true;
		RegPanel->BringToFront();
		
		RegPanel->Visible = true;
		RegPanel->BringToFront();
	}
}
private: System::Void comboBoxLang_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxAge->SelectedIndex != -1 && comboBoxLang->SelectedIndex != -1) {

		lblSelectedLang->Text = comboBoxLang->SelectedItem->ToString();
		lblSelectedAge->Text = comboBoxAge->SelectedItem->ToString();

		int courseIndex = comboBoxLang->SelectedIndex; 
		lblTeacherOnPanel->Text = comboBoxTeachers->Items[courseIndex]->ToString();
		
		RegPanel->Visible = true;
		RegPanel->BringToFront();

		RegPanel->Visible = true;
		RegPanel->BringToFront();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBoxName->Text == "" || textBoxPhone->Text == "") {
			MessageBox::Show("Введіть ім'я та телефон!", "Увага");
			return;
			if (textBoxPhone->MaskFull) {
				MessageBox::Show("Введіть номер телефону повністю!", "Помилка");
				return;
			}
		}

		String^ name = textBoxName->Text;
		String^ phone = textBoxPhone->Text;
		String^ lang = lblSelectedLang->Text;
		String^ age = lblSelectedAge->Text;

		String^ fileName = "Запис_" + name + ".txt";

		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(fileName);
		sw->WriteLine("========== ВАШ ТАЛОН НА НАВЧАННЯ ==========");
		sw->WriteLine("Студент: " + name);
		sw->WriteLine("Телефон: " + phone);
		sw->WriteLine("Обраний курс: " + lang);
		sw->WriteLine("Вікова група: " + age);
		sw->WriteLine("-------------------------------------------");

		int courseIndex = comboBoxLang->SelectedIndex;
		String^ assignedTeacher = comboBoxTeachers->Items[courseIndex]->ToString();

		sw->WriteLine("Вчитель: " + assignedTeacher);

		sw->WriteLine("Адреса: м. Львів, вул. Героїв УПА 46");
		sw->WriteLine("Дата запису: " + System::DateTime::Now.ToString());
		sw->WriteLine("-------------------------------------------");
		sw->WriteLine("Чекаємо на вас!\n Детальну інформацію стосовно вашого уроку \n ми вам повідомимо за вашим контактним номером.");
		sw->Close();

		MessageBox::Show("Вас записано! Талон збережено у файл: " + fileName, "Успіх!");

		textBoxName->Clear();
		textBoxPhone->Clear();
		RegPanel->Visible = false;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Помилка збереження: " + ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxLang->SelectedIndex != -1) {
		int selectedIndex = comboBoxLang->SelectedIndex; 
		String^ deletedCourse = comboBoxLang->SelectedItem->ToString();

		comboBoxLang->Items->RemoveAt(selectedIndex);
		comboBoxTeachers->Items->RemoveAt(selectedIndex);

		comboBoxLang->Text = "";
		MessageBox::Show("Курс '" + deletedCourse + "' успішно видалено!", "Режим Адміна");
	}
	else {
		MessageBox::Show("Спочатку оберіть мову в списку!", "Увага");
	}
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminAddPanel->Visible = false;
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminAddPanel->Visible = true;
	AdminAddPanel->BringToFront();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "") {
		MessageBox::Show("Будь ласка, заповніть усі поля!", "Помилка");
		return;
	}

	try {
		String^ newLanguage = textBox1->Text;
		String^ newTeacher = textBox2->Text;

		comboBoxLang->Items->Add(newLanguage);
		comboBoxTeachers->Items->Add(newTeacher);

		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("База_Курсів.txt", true);
		sw->WriteLine("Мова: " + newLanguage + " | Викладач: " + newTeacher);
		sw->Close();

		MessageBox::Show("Новий курс '" + newLanguage + "' успішно додано до системи!", "Успіх");

		textBox1->Clear();
		textBox2->Clear();
		AdminAddPanel->Visible = false;

	}
	catch (Exception^ ex) {
		MessageBox::Show("Помилка при збереженні: " + ex->Message);
	}
}
private: System::Void RegPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void lblSelectedLang_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
