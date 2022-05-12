#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{
	int d, m, y;
	setlocale(LC_ALL, "Russian_Russia.1251");
	cout << "¬ведите день: "; cin >> d;
	cout << "¬ведите мес€ц (число): "; cin >> m;
	cout << "¬ведите год: "; cin >> y;
	if (d > 32 || d < 1)
		exit(0);
	if (m < 1 || m>12)
		exit(0);
	if (y <= 0)
		exit(0);
	if (d == 31)
		d = 1, m = (m + 1);
	if (m == 13)
		m = 1, y = (y + 1);
	cout <<"ƒата следущего дн€: " << d+1 << "." << m << "." << y << endl;
	return 0;
}