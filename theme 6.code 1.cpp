# include <iostream>
# include <conio.h>
# include <cstdlib>
using namespace std;
void vvod(int a[], int n);
void vivod(int a[], int n);
void minumum(int a[], int n);
int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int a[20];
    int n, k;
    cout << "������� ����������� �������: "; cin >> n;
    do
    {
        cout << "1. ���� ������� a " << endl;
        cout << "2. ����� ������� a " << endl;
        cout << "3. ����������� ������� " << endl;
        cout << "4. ���������� ������ ";
        cin >> k;
        switch (k)
        {
        case 1: vvod(a, n);
            break;
        case 2: vivod(a, n);
            break;
        case 3: minumum(a, n);
            break;
        case 4: cout << "���������� ������" << endl;
            break;
        default: cout << "����� �����������";
        }
        if (k == 4) break;
    } while (true);
}
void vvod(int a[], int n)
{
    cout << "������� �������� �������: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void vivod(int a[], int n)
{
    cout << "������ a: " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << endl;
}
void minumum(int a[], int n)
{
    int m = 200000;
    for (int i = 0; i < n; i++) {
        if (a[i] > m);
        m = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0)
            a[i] = m;
    }
    cout << "����������� �������: " << m << endl;
}