#include "Header.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;
int NextPow2(int n) {
    int p = 1;
    while (p < n) p <<= 1;
    return p;
}
static void Add(array<double, 2>^ A, array<double, 2>^ B, array<double, 2>^ C, int k) {
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < k; ++j)
            C[i, j] = A[i, j] + B[i, j];
}
static void Sub(array<double, 2>^ A, array<double, 2>^ B, array<double, 2>^ C, int k) {
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < k; ++j)
            C[i, j] = A[i, j] - B[i, j];
}
array<double, 2>^ Strassen(array<double, 2>^ A, array<double, 2>^ B, int n) {
    if (n == 1) {
        auto C = gcnew array<double, 2>(1, 1);
        C[0, 0] = A[0, 0] * B[0, 0];
        return C;
    }
    int k = n >> 1;
    auto A11 = gcnew array<double, 2>(k, k);
    auto A12 = gcnew array<double, 2>(k, k);
    auto A21 = gcnew array<double, 2>(k, k);
    auto A22 = gcnew array<double, 2>(k, k);
    auto B11 = gcnew array<double, 2>(k, k);
    auto B12 = gcnew array<double, 2>(k, k);
    auto B21 = gcnew array<double, 2>(k, k);
    auto B22 = gcnew array<double, 2>(k, k);
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < k; ++j) {
            A11[i, j] = A[i, j];
            A12[i, j] = A[i, j + k];
            A21[i, j] = A[i + k, j];
            A22[i, j] = A[i + k, j + k];
            B11[i, j] = B[i, j];
            B12[i, j] = B[i, j + k];
            B21[i, j] = B[i + k, j];
            B22[i, j] = B[i + k, j + k];
        }
    auto T1 = gcnew array<double, 2>(k, k);
    auto T2 = gcnew array<double, 2>(k, k);
    auto C11 = gcnew array<double, 2>(k, k);
    auto C12 = gcnew array<double, 2>(k, k);
    auto C21 = gcnew array<double, 2>(k, k);
    auto C22 = gcnew array<double, 2>(k, k);
    Add(A11, A22, T1, k); Add(B11, B22, T2, k); auto M1 = Strassen(T1, T2, k);
    Add(A21, A22, T1, k);                            auto M2 = Strassen(T1, B11, k);
    Sub(B12, B22, T2, k);                            auto M3 = Strassen(A11, T2, k);
    Sub(B21, B11, T2, k);                            auto M4 = Strassen(A22, T2, k);
    Add(A11, A12, T1, k);                            auto M5 = Strassen(T1, B22, k);
    Sub(A21, A11, T1, k); Add(B11, B12, T2, k); auto M6 = Strassen(T1, T2, k);
    Sub(A12, A22, T1, k); Add(B21, B22, T2, k); auto M7 = Strassen(T1, T2, k);
    Add(M1, M4, T1, k);
    Add(M1, M4, T1, k);
    Sub(T1, M5, T1, k);
    Add(T1, M7, C11, k);
    Add(M3, M5, C12, k);
    Add(M2, M4, C21, k);
    Add(M1, M3, T1, k);
    Sub(T1, M2, T1, k);
    Add(T1, M6, C22, k);
    auto C = gcnew array<double, 2>(n, n);
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < k; ++j) {
            C[i, j] = C11[i, j];
            C[i, j + k] = C12[i, j];
            C[i + k, j] = C21[i, j];
            C[i + k, j + k] = C22[i, j];
        }
    return C;
}
static void EnsureSize(DataGridView^ g, int rows, int cols) {
    if (g->ColumnCount < cols) g->ColumnCount = cols;
    if (g->RowCount < rows) g->RowCount = rows;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (g[j, i]->Value == nullptr || g[j, i]->Value->ToString()->Length == 0)
                g[j, i]->Value = "0";
}
void WPadding(
    DataGridView^ dgA,
    DataGridView^ dgB,
    DataGridView^ dgC,
    NumericUpDown^ upN1,
    NumericUpDown^ upM1,
    NumericUpDown^ upN2,
    NumericUpDown^ upM2,
    ToolStripStatusLabel^ status
) {
    dgA->AllowUserToAddRows = false;
    dgB->AllowUserToAddRows = false;
    int need_n1 = Decimal::ToInt32(upN1->Value);
    int need_m1 = Decimal::ToInt32(upM1->Value);
    int need_n2 = Decimal::ToInt32(upN2->Value);
    int need_m2 = Decimal::ToInt32(upM2->Value);
    EnsureSize(dgA, need_n1, need_m1);
    EnsureSize(dgB, need_n2, need_m2);
    int n1 = dgA->RowCount, m1 = dgA->ColumnCount;
    int n2 = dgB->RowCount, m2 = dgB->ColumnCount;
    if (m1 != n2) {
        status->Text = "Некоректні розміри (m1 ≠ n2)";
        return;
    }
    int maxDim = Math::Max(Math::Max(n1, m1), m2);
    int N = NextPow2(maxDim);
    auto A2 = gcnew array<double, 2>(N, N);
    auto B2 = gcnew array<double, 2>(N, N);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            if (i < n1 && j < m1) {
                double v;
                if (Double::TryParse(dgA[j, i]->Value->ToString(), NumberStyles::Any,
                    CultureInfo::InvariantCulture, v))
                    A2[i, j] = v;
                else
                    A2[i, j] = 0.0;
            }
            else A2[i, j] = 0.0;
            if (i < n2 && j < m2) {
                double v;
                if (Double::TryParse(dgB[j, i]->Value->ToString(), NumberStyles::Any,
                    CultureInfo::InvariantCulture, v))
                    B2[i, j] = v;
                else
                    B2[i, j] = 0.0;
            }
            else B2[i, j] = 0.0;
        }
    auto C2 = Strassen(A2, B2, N);
    dgC->SuspendLayout();
    dgC->RowCount = need_n1;
    dgC->ColumnCount = need_m2;
    for (int i = 0; i < need_n1; ++i)
        for (int j = 0; j < need_m2; ++j)
            dgC[j, i]->Value = C2[i, j];
    dgC->ResumeLayout();
    if (N != n1 || N != m1 || N != n2 || N != m2)
        status->Text = String::Format("Доповнено нулями до {0} на {0}", N);
    else
        status->Text = String::Format("Множення виконано: {0} на {0}", need_n1, need_m2);
}