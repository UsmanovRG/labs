#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int N, k, t = 0;
    cout << "������� ����������� �������: " << endl;
    cout << "N = ";
    cin >> N;
    int* A = new int[N];
    cout << "������� ������:" << endl;
    for (int i = t; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    cout << "��������� ������ ���������:" << endl;
    k = t = 0;
    for (int i = t; i < N; i++)
    {
        if (A[i] == A[i + 1])
        {
            k++;
        }
        else
        {
            t = k;
            k = 0;
            if (t > 0)
            {
                cout << A[i] << ": " << t + 1 << endl;
            }
        }
    }
    delete[] A;
    system("pause");
}