#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n = 0, p = 0;
	cout << "n = "; cin >> n;
	p = 2 * n;
	do {
		if (p % 10 == 3) {
			cout << "3 is included ";
			return 0;
		}
		p /= 10;
	} while (p > 0);
	cout << "3 is not included ";
	return 0;
}