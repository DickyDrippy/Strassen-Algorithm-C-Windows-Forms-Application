#pragma once
#include "MyForm1.h"
namespace Project {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	public ref class Osnovna : public System::Windows::Forms::Form
	{
	public:
		Osnovna(void)
		{

			InitializeComponent();
		}
	protected:
		~Osnovna()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::GroupBox^ groupBox1;
		int режим;
		const int Strassen = 1;
		DataGridView^ dataGridViewResult;
		DataGridView^ dgvStrResult;
		DataGridView^ dgvA;
		DataGridView^ dgvC;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ алгоритмШтрассенаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартнеМноженняМатрицьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиФайлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиРезультатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ алгоритмШтрассенаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартнеМноженняМатрицьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ інструкціяКористувачаToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;




	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ToolStripMenuItem^ додатокToolStripMenuItem;
	private: System::Windows::Forms::Button^ button10;
	private:
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void зберегтиРезультатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void алгоритмШтрассенаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void стандартнеМноженняМатрицьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void інструкціяКористувачаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void додатокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Osnovna::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->алгоритмШтрассенаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиРезультатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стандартнеМноженняМатрицьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->алгоритмШтрассенаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стандартнеМноженняМатрицьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інструкціяКористувачаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->додатокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Silver;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->алгоритмШтрассенаToolStripMenuItem,
					this->стандартнеМноженняМатрицьToolStripMenuItem, this->довідкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(519, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// алгоритмШтрассенаToolStripMenuItem
			// 
			this->алгоритмШтрассенаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->відкритиФайлToolStripMenuItem,
					this->зберегтиРезультатиToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->алгоритмШтрассенаToolStripMenuItem->Name = L"алгоритмШтрассенаToolStripMenuItem";
			this->алгоритмШтрассенаToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->алгоритмШтрассенаToolStripMenuItem->Text = L"Файл";
			// 
			// відкритиФайлToolStripMenuItem
			// 
			this->відкритиФайлToolStripMenuItem->Name = L"відкритиФайлToolStripMenuItem";
			this->відкритиФайлToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->відкритиФайлToolStripMenuItem->Text = L"Відкрити файл";
			this->відкритиФайлToolStripMenuItem->Click += gcnew System::EventHandler(this, &Osnovna::відкритиФайлToolStripMenuItem_Click);
			// 
			// зберегтиРезультатиToolStripMenuItem
			// 
			this->зберегтиРезультатиToolStripMenuItem->Name = L"зберегтиРезультатиToolStripMenuItem";
			this->зберегтиРезультатиToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->зберегтиРезультатиToolStripMenuItem->Text = L"Зберегти результати";
			this->зберегтиРезультатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Osnovna::зберегтиРезультатиToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &Osnovna::вихідToolStripMenuItem_Click);
			// 
			// стандартнеМноженняМатрицьToolStripMenuItem
			// 
			this->стандартнеМноженняМатрицьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->алгоритмШтрассенаToolStripMenuItem1,
					this->стандартнеМноженняМатрицьToolStripMenuItem1
			});
			this->стандартнеМноженняМатрицьToolStripMenuItem->Name = L"стандартнеМноженняМатрицьToolStripMenuItem";
			this->стандартнеМноженняМатрицьToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->стандартнеМноженняМатрицьToolStripMenuItem->Text = L"Режим";
			// 
			// алгоритмШтрассенаToolStripMenuItem1
			// 
			this->алгоритмШтрассенаToolStripMenuItem1->Name = L"алгоритмШтрассенаToolStripMenuItem1";
			this->алгоритмШтрассенаToolStripMenuItem1->Size = System::Drawing::Size(248, 22);
			this->алгоритмШтрассенаToolStripMenuItem1->Text = L"Алгоритм Штрассена";
			this->алгоритмШтрассенаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Osnovna::алгоритмШтрассенаToolStripMenuItem1_Click);
			// 
			// стандартнеМноженняМатрицьToolStripMenuItem1
			// 
			this->стандартнеМноженняМатрицьToolStripMenuItem1->Name = L"стандартнеМноженняМатрицьToolStripMenuItem1";
			this->стандартнеМноженняМатрицьToolStripMenuItem1->Size = System::Drawing::Size(248, 22);
			this->стандартнеМноженняМатрицьToolStripMenuItem1->Text = L"Стандартне множення матриць";
			this->стандартнеМноженняМатрицьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Osnovna::стандартнеМноженняМатрицьToolStripMenuItem1_Click);
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->проАвтораToolStripMenuItem,
					this->інструкціяКористувачаToolStripMenuItem, this->додатокToolStripMenuItem
			});
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &Osnovna::проАвтораToolStripMenuItem_Click);
			// 
			// інструкціяКористувачаToolStripMenuItem
			// 
			this->інструкціяКористувачаToolStripMenuItem->Name = L"інструкціяКористувачаToolStripMenuItem";
			this->інструкціяКористувачаToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->інструкціяКористувачаToolStripMenuItem->Text = L"Інструкція користувача";
			this->інструкціяКористувачаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Osnovna::інструкціяКористувачаToolStripMenuItem_Click);
			// 
			// додатокToolStripMenuItem
			// 
			this->додатокToolStripMenuItem->Name = L"додатокToolStripMenuItem";
			this->додатокToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->додатокToolStripMenuItem->Text = L"Додаток";
			this->додатокToolStripMenuItem->Click += gcnew System::EventHandler(this, &Osnovna::додатокToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 382);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(519, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				0)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				0)));
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 23);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(520, 367);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->dataGridView4);
			this->panel1->Controls->Add(this->dataGridView3);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1, 361);
			this->panel1->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(421, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(84, 40);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Зберегти результат";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Osnovna::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(340, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 40);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Множити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Osnovna::button9_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(331, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(186, 150);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Введення розміру матриці";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(9, 80);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 3;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(9, 41);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Введіть розмір p:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Введіть розмір m:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(259, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 40);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Очистити";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Osnovna::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(178, 162);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 40);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Випадкова матриця";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Osnovna::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(84, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 40);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Ввести свою матрицю";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Osnovna::button6_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(0, 207);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(253, 151);
			this->dataGridView4->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(252, 207);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(265, 151);
			this->dataGridView3->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(334, 150);
			this->dataGridView2->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 40);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Завантажити з файлу";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->numericUpDown3);
			this->panel2->Controls->Add(this->numericUpDown2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(514, 361);
			this->panel2->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(393, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 35);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Osnovna::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(113, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введіть розмір p:";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Введіть розмір m:";
			this->label2->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(215, 259);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(122, 20);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(215, 233);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(122, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::DarkGray;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(265, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Випадкова матриця";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Osnovna::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::DarkGray;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(137, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ввести свою матрицю";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Osnovna::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(9, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Завантажити з файлу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Osnovna::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(514, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->dataGridView7);
			this->panel3->Controls->Add(this->button16);
			this->panel3->Controls->Add(this->button15);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->dataGridView6);
			this->panel3->Controls->Add(this->dataGridView5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(523, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 361);
			this->panel3->TabIndex = 3;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(252, 207);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(259, 150);
			this->dataGridView7->TabIndex = 9;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(436, 162);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 39);
			this->button16->TabIndex = 8;
			this->button16->Text = L"Зберегти результат";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Osnovna::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(363, 162);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(68, 39);
			this->button15->TabIndex = 7;
			this->button15->Text = L"Множення";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Osnovna::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(275, 162);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(82, 39);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Очистити";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Osnovna::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(184, 162);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 39);
			this->button13->TabIndex = 5;
			this->button13->Text = L"Випадкова матриця";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Osnovna::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(97, 162);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(81, 39);
			this->button12->TabIndex = 4;
			this->button12->Text = L"Ввести свою матрицю";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Osnovna::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(9, 162);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(82, 39);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Завантажити з файлу";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Osnovna::button11_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(337, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(177, 151);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Введення розмірності";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(20, 80);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			this->numericUpDown6->TabIndex = 3;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(20, 41);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Введіть розмір p:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть розмір m:";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(0, 207);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(253, 150);
			this->dataGridView6->TabIndex = 1;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(0, 1);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(337, 150);
			this->dataGridView5->TabIndex = 0;
			// 
			// Osnovna
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 404);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Osnovna";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Множення матриць";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void відкритиФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dlg = gcnew OpenFileDialog();
		dlg->Filter = "CSV (*.csv)|*.csv|All (*.*)|*.*";

		// Зчитуємо всі рядки
		array<String^>^ lines = File::ReadAllLines(dlg->FileName);
		if (lines->Length == 0) {
			MessageBox::Show("Файл порожній", "Помилка");
			return;
		}

		// Парсимо перший рядок
		int rows = lines->Length;
		int cols = lines[0]->Split(',')->Length;

		// Якщо зараз в стандартному режимі
		if (this->Text->Contains("Стандартне")) {
			dataGridView2->Rows->Clear(); dataGridView2->Columns->Clear();
			dataGridView3->Rows->Clear(); dataGridView3->Columns->Clear();
			dataGridView2->RowCount = rows;  dataGridView2->ColumnCount = cols;
			dataGridView3->RowCount = cols;  dataGridView3->ColumnCount = rows;
			for (int i = 0; i < rows; i++) {
				auto vals = lines[i]->Split(',');
				for (int j = 0; j < cols; j++) {
					dataGridView2[j, i]->Value = vals[j];
				}
			}
			toolStripStatusLabel1->Text =
				String::Format("A завантажено {0}×{1}", rows, cols);
		}
		else { // Штрассен
			dataGridView5->Rows->Clear(); dataGridView5->Columns->Clear();
			dataGridView6->Rows->Clear(); dataGridView6->Columns->Clear();
			dataGridView5->RowCount = rows;  dataGridView5->ColumnCount = cols;
			dataGridView6->RowCount = cols;  dataGridView6->ColumnCount = rows;
			for (int i = 0; i < rows; i++) {
				auto vals = lines[i]->Split(',');
				for (int j = 0; j < cols; j++) {
					dataGridView5[j, i]->Value = vals[j];
				}
			}
			toolStripStatusLabel1->Text =
				String::Format("A(Strassen) завантажено {0}×{1}", rows, cols);
		}
	}
	private: System::Void зберегтиРезультатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = "CSV (*.csv)|*.csv|All (*.*)|*.*";
		if (sfd->ShowDialog() != DialogResult::OK) return;
		// Визначаємо, який грід з результатом зараз активний:
		auto dgv = (режим == Strassen) ? dataGridView4 : dataGridViewResult;
	}
	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void алгоритмШтрассенаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Показуємо тільки панель Strassen
		tableLayoutPanel1->ColumnStyles[0]->Width = 350;  // налаштуй ширину лівої панелі
		tableLayoutPanel1->ColumnStyles[1]->Width = 0;
		tableLayoutPanel1->ColumnStyles[2]->Width = 0;
		this->Text = "Множення матриць — Штрассен";
	}
	private: System::Void стандартнеМноженняМатрицьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->ColumnStyles[0]->Width = 0;
		tableLayoutPanel1->ColumnStyles[1]->Width = 350;  // тут твій стандартний блок
		tableLayoutPanel1->ColumnStyles[2]->Width = 0;
		this->Text = "Множення матриць — Стандартне";
	}
	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ f = gcnew MyForm();
		f->ShowDialog();
	}
	private: System::Void інструкціяКористувачаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible;
		numericUpDown1->Visible;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		label2->Visible;
		numericUpDown2->Visible;
		label3->Visible;
		numericUpDown3->Visible;
	}
	private: System::Void додатокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"Якщо матриця не квадратна,\n"
			"вона автоматично доповнюється нулями\n"
			"до найближчого розміру 2^k × 2^k для Штрассена.",
			"Доповнення нулями", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		int m = dataGridView2->RowCount, p = dataGridView2->ColumnCount;
		int n = dataGridView3->ColumnCount;
		int N = NextPowerOfTwo(max(max(m, p), n));
		// статус
		if (N != m || N != p) toolStripStatusLabel1->Text =
			"Не квадратна, доповнення нулями до " + N + "×" + N;
		else toolStripStatusLabel1->Text = "Квадратна матриця, без доповнення";
		auto A2 = gcnew array<long long, 2>(N, N);
		auto B2 = gcnew array<long long, 2>(N, N);
		for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) {
			A2[i, j] = (i < m && j < p) ? Convert::ToInt64(dataGridView2[j, i]->Value) : 0;
			B2[i, j] = (i < p && j < n) ? Convert::ToInt64(dataGridView3[j, i]->Value) : 0;
		}
		auto C2 = StrassenMultiply(A2, B2, N);
		dataGridView4->RowCount = m;  dataGridView4->ColumnCount = n;
		for (int i = 0; i < m; i++) for (int j = 0; j < n; j++)
			dataGridView4[j, i]->Value = C2[i, j];
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "CSV files (*.csv)|*.csv|All files (*.*)|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ w = gcnew StreamWriter(dlg->FileName);
			auto dgv = this->dgvStrResult;
			int rows = dgv->RowCount, cols = dgv->ColumnCount;
			for (int i = 0; i < rows; i++) {
				List<String^>^ row = gcnew List<String^>();
				for (int j = 0; j < cols; j++)
					row->Add(dgv[j, i]->Value->ToString());
				w->WriteLine(String::Join(",", row));
			}
			w->Close();
			toolStripStatusLabel1->Text = "Результат збережено у " + dlg->FileName;
		}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int m = (int)numericUpDown4->Value, p = (int)numericUpDown5->Value;
		dataGridView2->RowCount = m;   dataGridView2->ColumnCount = p;
		dataGridView3->RowCount = p;   dataGridView3->ColumnCount = m;
		toolStripStatusLabel1->Text = "Гріди A(" + m + "×" + p + ") та B(" + p + "×" + m + ") готові";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random();
		int m = dataGridView2->RowCount, p = dataGridView2->ColumnCount;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < p; j++)
				dataGridView2[j, i]->Value = rnd->Next(-10, 11);
		for (int i = 0; i < p; i++)
			for (int j = 0; j < m; j++)
				dataGridView3[j, i]->Value = rnd->Next(-10, 11);
		toolStripStatusLabel1->Text = "Матриця заповнена випадково";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (auto dgv in { dataGridView2, dataGridView3, dataGridView4 }) {
			dgv->Rows->Clear();
			dgv->Columns->Clear();
		}
		toolStripStatusLabel1->Text = "Усе очищено";
	}
		private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
			OpenFileDialog^ dlg = gcnew OpenFileDialog();
			dlg->Filter = "CSV files (*.csv)|*.csv|All files (*.*)|*.*";
			if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
			array<String^>^ lines = System::IO::File::ReadAllLines(dlg->FileName);
			if (lines->Length == 0) {
				MessageBox::Show("Файл порожній", "Помилка");
				return;
			}
			array<String^>^ first = lines[0]->Split(',');
			int rowCount = lines->Length;
			int colCount = first->Length;

			// Налаштовуємо грід
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView1->RowCount = rowCount;
			dataGridView1->ColumnCount = colCount;

			// Заповнюємо
			for (int i = 0; i < rowCount; i++) {
				array<String^>^ vals = lines[i]->Split(',');
				for (int j = 0; j < colCount; j++) {
					dataGridView1[j, i]->Value = vals[j];
				}
			}

			// Оновлюємо поля розмірності напроти
			numericUpDown1->Value = rowCount;   // рядки
			numericUpDown2->Value = colCount;   // стовпці
			toolStripStatusLabel1->Text =
				String::Format("Завантажено матрицю {0}×{1}", rowCount, colCount);
		}
		private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
			int m = (int)numericUpDown1->Value;
			int p = (int)numericUpDown2->Value;
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView1->RowCount = m;
			dataGridView1->ColumnCount = p;
			toolStripStatusLabel1->Text = String::Format("Створено грід {0}×{1}", m, p);
		}
		private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
			if (dataGridView1->RowCount == 0 || dataGridView1->ColumnCount == 0) {
				MessageBox::Show("Спочатку задайте розмір матриці", "Увага");
				return;
			}
			Random^ rnd = gcnew Random();
			int m = dataGridView1->RowCount;
			int p = dataGridView1->ColumnCount;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < p; j++)
					dataGridView1[j, i]->Value = rnd->Next(-10, 11);
			toolStripStatusLabel1->Text = "Матриця заповнена випадковими числами";
		}
		private: System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
			toolStripStatusLabel1->Text = "Матриця очищена";
		}
		private: System::Void button11_Click(System::Object ^ sender, System::EventArgs ^ e) {
			OpenFileDialog^ dlg = gcnew OpenFileDialog();
			dlg->Filter = "CSV (*.csv)|*.csv|All (*.*)|*.*";

			array<String^>^ lines = File::ReadAllLines(dlg->FileName);
			if (lines->Length == 0) {
				MessageBox::Show("Файл порожній", "Помилка");
				return;
			}

			int m = lines->Length;
			int p = lines[0]->Split(',')->Length;

			dgvA->Rows->Clear(); dgvA->Columns->Clear();
			dgvA->RowCount = m; dgvA->ColumnCount = p;
			for (int i = 0; i < m; i++) {
				auto vals = lines[i]->Split(',');
				for (int j = 0; j < p; j++)
					dgvA[j, i]->Value = vals[j];
			}

			numericUpDown1->Value = m;  // m
			numericUpDown2->Value = p;  // p
			toolStripStatusLabel1->Text =
				String::Format("A завантажено: {0}×{1}", m, p);
		}
		private: System::Void button12_Click(System::Object ^ sender, System::EventArgs ^ e) {
			int m = (int)numericUpDown1->Value;
			int p = (int)numericUpDown2->Value;
			dgvA->Rows->Clear(); dgvA->Columns->Clear();
			dgvA->RowCount = m; dgvA->ColumnCount = p;
			toolStripStatusLabel1->Text =
				String::Format("Грід A створено: {0}×{1}", m, p);
		}
		private: System::Void button13_Click(System::Object ^ sender, System::EventArgs ^ e) {
			if (dgvA->RowCount == 0 || dgvA->ColumnCount == 0) {
				MessageBox::Show("Спочатку створіть або завантажте A", "Увага");
				return;
			}
			Random^ rnd = gcnew Random();
			int m = dgvA->RowCount, p = dgvA->ColumnCount;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < p; j++)
					dgvA[j, i]->Value = rnd->Next(-10, 11);
			toolStripStatusLabel1->Text = "A заповнено випадково";
		}
		private: System::Void button14_Click(System::Object ^ sender, System::EventArgs ^ e) {
			for each (auto dgv in gcnew array<DataGridView^>{ dgvA, dgvC }) {
				dgv->Rows->Clear();
				dgv->Columns->Clear();
			}
			toolStripStatusLabel1->Text = "Гріди очищені";
		}
		private: System::Void button15_Click(System::Object ^ sender, System::EventArgs ^ e) {
			int m = dgvA->RowCount, p = dgvA->ColumnCount;
			if (m != p) {
				MessageBox::Show("Для стандартного множення ця версія розрахована\n"
					"лише на квадратні матриці A×A", "Помилка");
				return;
			}
			// Створюємо C
			dgvC->Rows->Clear(); dgvC->Columns->Clear();
			dgvC->RowCount = m; dgvC->ColumnCount = m;

			// Множимо
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					long long sum = 0;
					for (int k = 0; k < m; k++) {
						auto a = Convert::ToInt64(dgvA[k, i]->Value);
						auto b = Convert::ToInt64(dgvA[j, k]->Value);
						sum += a * b;
					}
					dgvC[j, i]->Value = sum;
				}
			}
			toolStripStatusLabel1->Text =
				String::Format("Отримано C ({0}×{0})", m);
		}
		private: System::Void button16_Click(System::Object ^ sender, System::EventArgs ^ e) {
			if (dgvC->RowCount == 0) {
				MessageBox::Show("Немає результату для збереження", "Увага");
				return;
			}
			SaveFileDialog^ dlg = gcnew SaveFileDialog();
			dlg->Filter = "CSV (*.csv)|*.csv|All (*.*)|*.*";

			StreamWriter^ w = gcnew StreamWriter(dlg->FileName);
			for (int i = 0; i < dgvC->RowCount; i++) {
				List<String^>^ row = gcnew List<String^>();
				for (int j = 0; j < dgvC->ColumnCount; j++)
					row->Add(dgvC[j, i]->Value->ToString());
				w->WriteLine(String::Join(",", row));
			}
			w->Close();
			toolStripStatusLabel1->Text = "C збережено у " + dlg->FileName;
		}
		}
};
}