#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{
	double x, y;
	bool v;
	setlocale(LC_ALL, "Russian_Russia.1251");
	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;
	if (x < 0 && y < 0 && x < 3 - x * x && y < x - 1)
		cout << "����� ������ � ������� A" << endl;
	else if (x < 0 && y > 0 && y > 3 - pow(x,x))
		cout << "����� ������ � ������� B" << endl;
	else if (x < 0 && y < 0 && y < 3 - pow(x, x) && y < x + 1)
		cout << "����� ������ � ������� C" << endl;
	else if (x < 0 && y < 0 && y < 3 - pow(x, x) && y > x + 1)
		cout << "����� ������ � ������� D" << endl;
	else if (x < 0 && y>0 && y<3 - pow(x, x) && y>x + 1)
		cout << "����� ������ � ������� F" << endl;
	else if (x > 0 && y > 0 && y<3 - pow(x, x) && y>x + 1)
		cout << "����� ������ � ������� G" << endl;
	else if (x > 0 && y > 0 && y < 3 - pow(x, x) && y < x + 1)
		cout << "����� ������ � ������� H" << endl;
	else if (x < 0 && y>0 && y < 3 - pow(x, x) && y < x + 1)
		cout << "����� ������ � ������� E" << endl;
	else if (x > 0 && y > 0 && y > 3 - pow(x, x) && y < x + 1)
		cout << "����� ������ � ������� J" << endl;
	else if (x > 0 && y < 0 && y>3 - pow(x, x))
		cout << "����� ������ � ������� K" << endl;
	else cout << "����������� ��������" << endl;
	return 0;
}