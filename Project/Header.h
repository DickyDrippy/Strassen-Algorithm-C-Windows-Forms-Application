#pragma once
using namespace System;
using namespace System::Windows::Forms;
int  NextPow2(int n);
static void Add(array<long long, 2>^ A,
    array<long long, 2>^ B,
    array<long long, 2>^ C,
    int k);
static void Sub(array<long long, 2>^ A,
    array<long long, 2>^ B,
    array<long long, 2>^ C,
    int k);
array<long long, 2>^ Strassen(array<long long, 2>^ A,
    array<long long, 2>^ B,
    int n);
static void EnsureSize(DataGridView^ g, int rows, int cols);
void WPadding(
    DataGridView^, DataGridView^, DataGridView^,
    NumericUpDown^, NumericUpDown^, NumericUpDown^, NumericUpDown^,
    ToolStripStatusLabel^
);
array<double, 2>^ Strassen(array<double, 2>^, array<double, 2>^, int);