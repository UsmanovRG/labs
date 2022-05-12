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
		cout << "Точка попала в область A" << endl;
	else if (x < 0 && y > 0 && y > 3 - pow(x,x))
		cout << "Точка попала в область B" << endl;
	else if (x < 0 && y < 0 && y < 3 - pow(x, x) && y < x + 1)
		cout << "Точка попала в область C" << endl;
	else if (x < 0 && y < 0 && y < 3 - pow(x, x) && y > x + 1)
		cout << "Точка попала в область D" << endl;
	else if (x < 0 && y>0 && y<3 - pow(x, x) && y>x + 1)
		cout << "Точка попала в область F" << endl;
	else if (x > 0 && y > 0 && y<3 - pow(x, x) && y>x + 1)
		cout << "Точка попала в область G" << endl;
	else if (x > 0 && y > 0 && y < 3 - pow(x, x) && y < x + 1)
		cout << "Точка попала в область H" << endl;
	else if (x < 0 && y>0 && y < 3 - pow(x, x) && y < x + 1)
		cout << "Точка попала в область E" << endl;
	else if (x > 0 && y > 0 && y > 3 - pow(x, x) && y < x + 1)
		cout << "Точка попала в область J" << endl;
	else if (x > 0 && y < 0 && y>3 - pow(x, x))
		cout << "Точка попала в область K" << endl;
	else cout << "Недоступное значение" << endl;
	return 0;
}