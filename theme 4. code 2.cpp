#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void equa(int n, int k);
int main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int n, k = 1, chi;
	cout << "Введите число: "; cin >> n;
	equa(n, k);
	chi = n * k;
	cout << "Новое число: " << chi  << endl;
	return(0);
}
void equa(int n, int k)
{
	while (n > 10)
	{
		n = n / 10;
		k = k * 10;
	}
}
