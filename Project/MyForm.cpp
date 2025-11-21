#include "MyForm.h"
#include <Windows.h>
#include "header.h"
#include "MyForm2.h"
using namespace Project;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	auto splash = gcnew MyForm2();
	splash->Opacity = 0;
	splash->Show();
	splash->Refresh();
	for (int i = 0; i <= 100; i += 5) {
		if (splash->IsDisposed) break;
		splash->Opacity = i / 100.0;
		Thread::Sleep(20);
		Application::DoEvents();
	}
	int counter = 0;
	while (counter < 4000 && !splash->IsDisposed) {
		Thread::Sleep(100);
		Application::DoEvents();
		counter += 100;
	}
	for (int i = 100; i >= 0; i -= 5) {
		if (splash->IsDisposed) break;
		splash->Opacity = i / 100.0;
		Thread::Sleep(20);
		Application::DoEvents();
	}
	if (!splash->IsDisposed) {
		splash->Close();
	}
	splash = nullptr;
	Application::Run(gcnew MyForm());
	return 0;
}
[STAThreadAttribute]
int main(array<String^>^)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
}
void MyForm::ClearGrid(DataGridView^ g)
{
	g->Columns->Clear();
	g->Rows->Clear();
	g->AllowUserToAddRows = true;
}
void MyForm::OnClearA(Object^, EventArgs^)
{
	System::Windows::Forms::DialogResult dlg =
		System::Windows::Forms::MessageBox::Show(
			"Стерти першу матрицю?",
			"Очистити",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question
		);
	if (dlg != System::Windows::Forms::DialogResult::Yes)
		return;
	ClearGrid(dataGridView1);
	toolStripStatusLabel1->Text = "Перша матриця очищена";
}
void MyForm::OnClearB(Object^, EventArgs^)
{
	System::Windows::Forms::DialogResult dlg =
		System::Windows::Forms::MessageBox::Show(
			"Стерти другу матрицю?",
			"Очистити",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question
		);
	if (dlg != System::Windows::Forms::DialogResult::Yes)
		return;
	ClearGrid(dataGridView2);
	toolStripStatusLabel1->Text = "Друга матриця очищена";
}
void MyForm::OnClearC(Object^, EventArgs^)
{
	System::Windows::Forms::DialogResult dlg =
		System::Windows::Forms::MessageBox::Show(
			"Стерти матрицю з результатом?",
			"Очистити",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question
		);
	if (dlg != System::Windows::Forms::DialogResult::Yes)
		return;
	ClearGrid(dataGridView3);
	toolStripStatusLabel1->Text = "Матриця з результатом очищена";
}