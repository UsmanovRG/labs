#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
double ab(double a, double b, double k);
double factory(double k);
void main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	double u, v, n, k = 2, a, b, sum, factory2, e = 0;
	cout << "¬ведите числа " << endl;
	cout << "¬ведите u: "; cin >> u;
	cout << "¬ведите v: "; cin >> v;
	cout << "¬ведите n: "; cin >> n;
	a = u, b = v;
	while (k < n)
	{
		e += ab(a, b, k)/ factory(k);
		k += 1;
	}
	cout << e;
}
double ab(double a, double b, double k)
{
	double umn;
	return umn = (2 * b + a) * (pow(a, 2) * 2 + b);
}
double factory(double k)
{
	double factory2;
	while (k > 1)
	{
		factory2 = k * (k - 1);
		k -= 1;
	}
	return factory2;
}