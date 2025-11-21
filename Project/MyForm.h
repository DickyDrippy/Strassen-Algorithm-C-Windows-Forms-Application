#pragma once
#include <Windows.h>
#include "header.h"
#include "MyForm1.h"
#include "MyForm2.h"
namespace Project {
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;
	using namespace System::Data;
	using namespace System::Windows::Forms;
	using namespace Project;
	using namespace System;
	using namespace System::Globalization;
	using namespace System::Text;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void) {
			InitializeComponent();
			{
			}
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ формаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шрифтToolStripMenuItem;
	private:
	bool slidingOut;
	System::Windows::Forms::Timer^ slideTimer;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ інструкціяКористувачаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПЗToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ алгоритмШтрассенаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ колірToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ формиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ текстуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ текстуToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ полейToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фОToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ полейToolStripMenuItem1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ розмірШрифтуToolStripMenuItem;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::ComponentModel::IContainer^ components;
	private:
		void OnEditingControlShowing(Object^ sender, DataGridViewEditingControlShowingEventArgs^ e) {
			TextBox^ tb = dynamic_cast<TextBox^>(e->Control);
			if (tb == nullptr) return;
			tb->KeyPress -= gcnew KeyPressEventHandler(this, &MyForm::Cell_KeyPress);
			tb->KeyPress += gcnew KeyPressEventHandler(this, &MyForm::Cell_KeyPress);
		}
		void Cell_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			TextBox^ tb = safe_cast<TextBox^>(sender);
			if (!Char::IsDigit(e->KeyChar)
				&& e->KeyChar != '.'
				&& e->KeyChar != '\b')
			{
				e->Handled = true;
				return;
			}
			if (e->KeyChar == '.' && tb->Text->Contains(".")) {
				e->Handled = true;
				return;
			}
		}
	private:
		void Шрифт_Click(Object^, EventArgs^) {
			FontDialog^ dlg = gcnew FontDialog();
			dlg->Font = this->Font;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				this->Font = dlg->Font;
		}
		void ШрифтФорм_Click(Object^, EventArgs^) {
			Шрифт_Click(nullptr, nullptr);
		}
		void ШрифтПолів_Click(Object^, EventArgs^) {
			FontDialog^ dlg = gcnew FontDialog();
			dlg->Font = dataGridView1->DefaultCellStyle->Font;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK) {
				for each(auto dg in gcnew array<DataGridView^> { dataGridView1, dataGridView2, dataGridView3 })
					dg->DefaultCellStyle->Font = dlg->Font;
			}
		}
		void Колір_Click(Object^, EventArgs^) {
			ColorDialog^ dlg = gcnew ColorDialog();
			dlg->Color = this->BackColor;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				this->BackColor = dlg->Color;
		}
		void КолірКнопок_Click(Object^, EventArgs^) {
			ColorDialog^ dlg = gcnew ColorDialog();
			dlg->Color = button1->BackColor;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				for each(auto btn in gcnew array<Button^> { button1, button2, button3, button4,
					button5, button6, button7, button8, button9 })
					btn->BackColor = dlg->Color;
		}
		void КолірФорми_Click(Object^, EventArgs^) {
			Колір_Click(nullptr, nullptr);
		}
		void КолірТексту_Click(Object^, EventArgs^) {
			ColorDialog^ dlg = gcnew ColorDialog();
			dlg->Color = label1->ForeColor;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK) {
				for each(auto ctrl in this->Controls)
					if (dynamic_cast<Label^>(ctrl) != nullptr)
						(safe_cast<Label^>(ctrl))->ForeColor = dlg->Color;
			}
		}
		void КолірТаблиць_Click(Object^, EventArgs^) {
			ColorDialog^ dlg = gcnew ColorDialog();
			dlg->Color = dataGridView1->ColumnHeadersDefaultCellStyle->BackColor;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK) {
				for each(auto dg in gcnew array<DataGridView^> { dataGridView1, dataGridView2, dataGridView3 })
					dg->ColumnHeadersDefaultCellStyle->BackColor = dlg->Color;
			}
		}
		void РозмірШрифту_Click(Object^, EventArgs^) {
			FontDialog^ dlg = gcnew FontDialog();
			dlg->Font = this->Font;
			dlg->ShowColor = false;
			dlg->FontMustExist = true;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				this->Font = gcnew System::Drawing::Font(this->Font->FontFamily, dlg->Font->Size);
		}
	private:
		const int width_timer = 500;
		void OnSlideTick(Object^, EventArgs^) {
			const int step = 20;
			int cur = splitContainer1->SplitterDistance + step;
			if (cur >= width_timer) {
				slideTimer->Stop();
				splitContainer1->SplitterDistance = width_timer;
				slidingOut = false;
			}
			else {
				splitContainer1->SplitterDistance = cur;
				this->Width += step;
			}
		}
	private:
		System::Void OnColorTablesText_Click(Object^, EventArgs^) {
			ColorDialog^ dlg = gcnew ColorDialog();
			dlg->Color = dataGridView1->DefaultCellStyle->ForeColor;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK) {
				for each(DataGridView ^ dg in gcnew array<DataGridView^> {
					dataGridView1, dataGridView2, dataGridView3 })
				{
					dg->DefaultCellStyle->ForeColor = dlg->Color;
				}
			}
		}
		System::Void OnColorTablesCells_Click(Object^, EventArgs^) {
			ColorDialog^ dlg = gcnew ColorDialog();
			dlg->Color = dataGridView1->DefaultCellStyle->BackColor;
			if (dlg->ShowDialog() == Windows::Forms::DialogResult::OK) {
				for each(DataGridView ^ dg in gcnew array<DataGridView^> {
					dataGridView1, dataGridView2, dataGridView3 })
				{
					dg->DefaultCellStyle->BackColor = dlg->Color;
				}
			}
		}
	private:
		void OnClearA(System::Object^ sender, System::EventArgs^ e);
		void OnClearB(System::Object^ sender, System::EventArgs^ e);
		void OnClearC(System::Object^ sender, System::EventArgs^ e);
		void ClearGrid(System::Windows::Forms::DataGridView^ g);
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->формаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фОToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->полейToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->формиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->текстуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->текстуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->полейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розмірШрифтуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інструкціяКористувачаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПЗToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->алгоритмШтрассенаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->SuspendLayout();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->формаToolStripMenuItem,
					this->довідкаToolStripMenuItem, this->алгоритмШтрассенаToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(482, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->формаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->шрифтToolStripMenuItem,
					this->колірToolStripMenuItem, this->розмірШрифтуToolStripMenuItem
			});
			this->формаToolStripMenuItem->Name = L"формаToolStripMenuItem";
			this->формаToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->формаToolStripMenuItem->Text = L"Налаштування";
			this->шрифтToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->фОToolStripMenuItem,
					this->полейToolStripMenuItem1
			});
			this->шрифтToolStripMenuItem->Name = L"шрифтToolStripMenuItem";
			this->шрифтToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->шрифтToolStripMenuItem->Text = L"Шрифт";
			this->фОToolStripMenuItem->Name = L"фОToolStripMenuItem";
			this->фОToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->фОToolStripMenuItem->Text = L"Форми";
			this->полейToolStripMenuItem1->Name = L"полейToolStripMenuItem1";
			this->полейToolStripMenuItem1->Size = System::Drawing::Size(113, 22);
			this->полейToolStripMenuItem1->Text = L"Полей";
			this->колірToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->формиToolStripMenuItem, this->текстуToolStripMenuItem, this->таблицьToolStripMenuItem
			});
			this->колірToolStripMenuItem->Name = L"колірToolStripMenuItem";
			this->колірToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->колірToolStripMenuItem->Text = L"Колір";
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->toolStripMenuItem1->Text = L"Кнопок";
			this->формиToolStripMenuItem->Name = L"формиToolStripMenuItem";
			this->формиToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->формиToolStripMenuItem->Text = L"Форми";
			this->текстуToolStripMenuItem->Name = L"текстуToolStripMenuItem";
			this->текстуToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->текстуToolStripMenuItem->Text = L"Тексту";
			this->таблицьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->текстуToolStripMenuItem1,
					this->полейToolStripMenuItem
			});
			this->таблицьToolStripMenuItem->Name = L"таблицьToolStripMenuItem";
			this->таблицьToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->таблицьToolStripMenuItem->Text = L"Таблиць";
			this->текстуToolStripMenuItem1->Name = L"текстуToolStripMenuItem1";
			this->текстуToolStripMenuItem1->Size = System::Drawing::Size(110, 22);
			this->текстуToolStripMenuItem1->Text = L"Тексту";
			this->полейToolStripMenuItem->Name = L"полейToolStripMenuItem";
			this->полейToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->полейToolStripMenuItem->Text = L"Полей";
			this->розмірШрифтуToolStripMenuItem->Name = L"розмірШрифтуToolStripMenuItem";
			this->розмірШрифтуToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->розмірШрифтуToolStripMenuItem->Text = L"Розмір шрифту";
			this->довідкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->інструкціяКористувачаToolStripMenuItem,
					this->проПЗToolStripMenuItem
			});
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			this->інструкціяКористувачаToolStripMenuItem->Name = L"інструкціяКористувачаToolStripMenuItem";
			this->інструкціяКористувачаToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->інструкціяКористувачаToolStripMenuItem->Text = L"Інструкція користувача";
			this->інструкціяКористувачаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::інструкціяКористувачаToolStripMenuItem_Click);
			this->проПЗToolStripMenuItem->Name = L"проПЗToolStripMenuItem";
			this->проПЗToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->проПЗToolStripMenuItem->Text = L"Про ПЗ";
			this->проПЗToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПЗToolStripMenuItem_Click);
			this->алгоритмШтрассенаToolStripMenuItem->Name = L"алгоритмШтрассенаToolStripMenuItem";
			this->алгоритмШтрассенаToolStripMenuItem->Size = System::Drawing::Size(137, 20);
			this->алгоритмШтрассенаToolStripMenuItem->Text = L"Алгоритм Штрассена";
			this->алгоритмШтрассенаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::алгоритмШтрассенаToolStripMenuItem_Click);
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Panel1->Controls->Add(this->toolStripContainer1);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView3);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->numericUpDown2);
			this->splitContainer1->Panel1->Controls->Add(this->numericUpDown1);
			this->splitContainer1->Panel1->Controls->Add(this->button4);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView1);
			this->splitContainer1->Panel2->Controls->Add(this->button9);
			this->splitContainer1->Panel2->Controls->Add(this->label6);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDown4);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDown3);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Panel2->Controls->Add(this->label4);
			this->splitContainer1->Panel2->Controls->Add(this->button8);
			this->splitContainer1->Panel2->Controls->Add(this->button7);
			this->splitContainer1->Panel2->Controls->Add(this->button6);
			this->splitContainer1->Panel2->Controls->Add(this->button5);
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView2);
			this->splitContainer1->Size = System::Drawing::Size(482, 440);
			this->splitContainer1->SplitterDistance = 452;
			this->splitContainer1->TabIndex = 1;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(330, 267);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Результат множення";
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(102, 287);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(374, 128);
			this->dataGridView3->TabIndex = 10;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(98, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введіть m:";
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(98, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Введіть n:";
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(136, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Перша матриця";
			this->numericUpDown2->Location = System::Drawing::Point(191, 250);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 6;
			this->numericUpDown1->Location = System::Drawing::Point(191, 224);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 5;
			this->button4->Location = System::Drawing::Point(3, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Заповнити випадково";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button3->Location = System::Drawing::Point(3, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Заповнити таблицю";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button2->Location = System::Drawing::Point(3, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Зберегти матрицю";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button1->Location = System::Drawing::Point(3, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Завантажити з файлу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(452, 176);
			this->dataGridView1->TabIndex = 0;
			this->button9->Location = System::Drawing::Point(317, 221);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(122, 34);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Множити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(176, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Друга матриця";
			this->numericUpDown4->Location = System::Drawing::Point(191, 250);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 8;
			this->numericUpDown3->Location = System::Drawing::Point(191, 221);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 7;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(98, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Введіть m:";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(98, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Введіть n:";
			this->button8->Location = System::Drawing::Point(3, 341);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(89, 34);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Заповнити випадково";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			this->button7->Location = System::Drawing::Point(3, 301);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(89, 34);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Зберегти матрицю";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->button6->Location = System::Drawing::Point(3, 261);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 34);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Заповнити таблицю";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->button5->Location = System::Drawing::Point(3, 221);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 34);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Завантажити з файлу";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(26, 176);
			this->dataGridView2->TabIndex = 0;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {
				this->toolStripStatusLabel1,
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 442);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(482, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(8, 0);
			this->toolStripContainer1->Location = System::Drawing::Point(370, 236);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(8, 8);
			this->toolStripContainer1->TabIndex = 3;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 464);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Множення матриць";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			dataGridView1->EditingControlShowing += gcnew DataGridViewEditingControlShowingEventHandler(this, &MyForm::OnEditingControlShowing);
			dataGridView2->EditingControlShowing += gcnew DataGridViewEditingControlShowingEventHandler(this, &MyForm::OnEditingControlShowing);
			slidingOut = false;
			slideTimer = gcnew System::Windows::Forms::Timer();
			slideTimer->Interval = 15;
			slideTimer->Tick += gcnew EventHandler(this, &MyForm::OnSlideTick);
			this->ClientSize = System::Drawing::Size(700, 500);
			this->menuStrip1->Size = System::Drawing::Size(700, 24);
			this->splitContainer1->Panel2Collapsed = true;
			this->фОToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::ШрифтФорм_Click);
			this->полейToolStripMenuItem1->Click += gcnew EventHandler(this, &MyForm::ШрифтПолів_Click);
			this->toolStripMenuItem1->Click += gcnew EventHandler(this, &MyForm::КолірКнопок_Click);
			this->формиToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::КолірФорми_Click);
			this->текстуToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::КолірТексту_Click);
			this->таблицьToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::КолірТаблиць_Click);
			this->розмірШрифтуToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::РозмірШрифту_Click);
			this->текстуToolStripMenuItem1->Click +=
				gcnew System::EventHandler(this, &MyForm::OnColorTablesText_Click);
			this->полейToolStripMenuItem->Click +=
				gcnew System::EventHandler(this, &MyForm::OnColorTablesCells_Click);
			auto miSaveCsv = gcnew ToolStripMenuItem("Зберегти результат у CSV");
			miSaveCsv->Click += gcnew EventHandler(this, &MyForm::OnSaveResultCsv);
			menuStrip1->Items->Add(miSaveCsv);
			void OnSaveResultCsv(System::Object ^ sender, System::EventArgs ^ e);
			auto miClear = gcnew ToolStripMenuItem("Очистити");
			auto miClearA = gcnew ToolStripMenuItem("Очистити таблицю 1");
			miClearA->Click += gcnew EventHandler(this, &MyForm::OnClearA);
			miClear->DropDownItems->Add(miClearA);
			auto miClearB = gcnew ToolStripMenuItem("Очистити таблицю 2");
			miClearB->Click += gcnew EventHandler(this, &MyForm::OnClearB);
			miClear->DropDownItems->Add(miClearB);
			auto miClearC = gcnew ToolStripMenuItem("Очистити таблицю 3");
			miClearC->Click += gcnew EventHandler(this, &MyForm::OnClearC);
			miClear->DropDownItems->Add(miClearC);
			menuStrip1->Items->Add(miClear);
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToAddRows = false;
			dataGridView1->EditingControlShowing +=
				gcnew DataGridViewEditingControlShowingEventHandler(this, &MyForm::OnEditingControlShowing);
			dataGridView2->EditingControlShowing +=
				gcnew DataGridViewEditingControlShowingEventHandler(this, &MyForm::OnEditingControlShowing);
			dataGridView3->EditingControlShowing +=
				gcnew DataGridViewEditingControlShowingEventHandler(this, &MyForm::OnEditingControlShowing);
			numericUpDown4->Maximum = Decimal::MaxValue;
			numericUpDown3->Maximum = Decimal::MaxValue;
			numericUpDown1->Maximum = Decimal::MaxValue;
			numericUpDown2->Maximum = Decimal::MaxValue;
		}
#pragma endregion
	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void алгоритмШтрассенаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->splitContainer1->Panel2Collapsed) {
			this->splitContainer1->Panel2Collapsed = false;
			slidingOut = true;
			this->splitContainer1->SplitterDistance = 0;
			slideTimer->Start();
		}
	}
	private: System::Void інструкціяКористувачаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("dovidka.chm");
	}
	private: System::Void проПЗToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Project::MyForm1^ about = gcnew Project::MyForm1();
		about->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog dlg;
		dlg.Filter = "CSV|*.csv|All|*.*";
		if (dlg.ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		auto lines = IO::File::ReadAllLines(dlg.FileName);
		int r = lines->Length, c = lines[0]->Split(',')->Length;
		dataGridView1->Rows->Clear();  dataGridView1->Columns->Clear();
		dataGridView1->RowCount = r;    dataGridView1->ColumnCount = c;
		for (int i = 0; i < r; i++) {
			auto vals = lines[i]->Split(',');
			for (int j = 0; j < c; j++)
				dataGridView1[j, i]->Value = vals[j];
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = (int)numericUpDown1->Value;
		int m = (int)numericUpDown2->Value;
		if (n < 1 || m < 1) {
			MessageBox::Show("Число стовпців та рядків >=1", "Невірний розмір");
			return;
		}
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = m;
		this->dataGridView3->AllowUserToAddRows = false;
		this->dataGridView1->AllowUserToAddRows = false;
		this->dataGridView2->AllowUserToAddRows = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int dataRows = 0;
		for each(DataGridViewRow ^ row in dataGridView1->Rows)
			if (!row->IsNewRow)
				++dataRows;
		if (dataRows == 0) {
			MessageBox::Show(
				"Немає даних у першій матриці для збереження",
				"Увага",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning
			);
			return;
		}
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "CSV|*.csv|All|*.*";
		if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;
		auto w = gcnew System::IO::StreamWriter(dlg->FileName, false, System::Text::Encoding::UTF8);
		int cols = dataGridView1->Columns->Count;
		for each(DataGridViewRow ^ row in dataGridView1->Rows) {
			if (row->IsNewRow) continue;
			auto vals = gcnew System::Collections::Generic::List<String^>();
			for (int c = 0; c < cols; ++c) {
				String^ s = row->Cells[c]->Value == nullptr
					? ""
					: row->Cells[c]->Value->ToString();
				s = s->Replace("\"", "\"\"");
				if (s->Contains(","))
					s = "\"" + s + "\"";
				vals->Add(s);
			}
			w->WriteLine(String::Join(",", vals));
		}
		w->Close();
		toolStripStatusLabel1->Text = "Перша матриця збережена в CSV";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random();
		for (int i = 0; i < dataGridView1->RowCount; i++)
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
				dataGridView1[j, i]->Value = rnd->Next(-100, 100);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog dlg;
		dlg.Filter = "CSV|*.csv|All|*.*";
		if (dlg.ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		auto lines = IO::File::ReadAllLines(dlg.FileName);
		int r = lines->Length, c = lines[0]->Split(',')->Length;
		dataGridView2->Rows->Clear();  dataGridView2->Columns->Clear();
		dataGridView2->RowCount = r;    dataGridView2->ColumnCount = c;
		for (int i = 0; i < r; i++) {
			auto vals = lines[i]->Split(',');
			for (int j = 0; j < c; j++)
				dataGridView2[j, i]->Value = vals[j];
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = (int)numericUpDown3->Value;
		int m = (int)numericUpDown4->Value;
		if (n < 1 || m < 1) {
			MessageBox::Show("Число стовпців та рядків >=1", "Невірний розмір");
			return;
		}
		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView2->RowCount = n;
		dataGridView2->ColumnCount = m;
		this->dataGridView3->AllowUserToAddRows = false;
		this->dataGridView1->AllowUserToAddRows = false;
		this->dataGridView2->AllowUserToAddRows = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		int dataRows = 0;
		for each(DataGridViewRow ^ row in dataGridView2->Rows)
			if (!row->IsNewRow)
				++dataRows;
		if (dataRows == 0) {
			MessageBox::Show(
				"Немає даних у другій матриці для збереження",
				"Увага",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning
			);
			return;
		}
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "CSV|*.csv|All|*.*";
		if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;
		auto w = gcnew System::IO::StreamWriter(dlg->FileName, false, System::Text::Encoding::UTF8);
		int cols = dataGridView2->Columns->Count;
		for each(DataGridViewRow ^ row in dataGridView2->Rows) {
			if (row->IsNewRow) continue;
			auto vals = gcnew System::Collections::Generic::List<String^>();
			for (int c = 0; c < cols; ++c) {
				String^ s = row->Cells[c]->Value == nullptr
					? ""
					: row->Cells[c]->Value->ToString();
				s = s->Replace("\"", "\"\"");
				if (s->Contains(","))
					s = "\"" + s + "\"";
				vals->Add(s);
			}
			w->WriteLine(String::Join(",", vals));
		}
		w->Close();
		toolStripStatusLabel1->Text = "Друга матриця збережена в CSV";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random();
		for (int i = 0; i < dataGridView2->RowCount; i++)
			for (int j = 0; j < dataGridView2->ColumnCount; j++)
				dataGridView2[j, i]->Value = rnd->Next(-100, 100);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		WPadding(
			dataGridView1,
			dataGridView2,
			dataGridView3,
			numericUpDown1,
			numericUpDown2,
			numericUpDown3,
			numericUpDown4,
			toolStripStatusLabel1);
	}
	private:
		void MyForm::OnSaveResultCsv(System::Object^, System::EventArgs^)
		{
			int dataRows = 0;
		for each(DataGridViewRow^ row in dataGridView3->Rows)
			if (!row->IsNewRow)
				++dataRows;
		if (dataRows == 0) {
			MessageBox::Show(
				"Немає даних для збереження",
				"Увага",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning
			);
			return;
		}
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "CSV|*.csv|All|*.*";
		if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;
		auto w = gcnew System::IO::StreamWriter(dlg->FileName, false, System::Text::Encoding::UTF8);
		int cols = dataGridView3->Columns->Count;
		for each(DataGridViewRow^ row in dataGridView3->Rows) {
			if (row->IsNewRow) continue;
			auto vals = gcnew System::Collections::Generic::List<String^>();
			for (int c = 0; c < cols; ++c) {
				String^ s = row->Cells[c]->Value == nullptr
					? ""
					: row->Cells[c]->Value->ToString();
				s = s->Replace("\"", "\"\"");
				if (s->Contains(","))
					s = "\"" + s + "\"";
				vals->Add(s);
			}
			w->WriteLine(String::Join(",", vals));
		}
		w->Close();
		toolStripStatusLabel1->Text = "Результат збережено в CSV";
	}
};
}