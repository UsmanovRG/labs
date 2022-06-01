#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	int n, k = 0;
	double number = 0, max = 0, sum = 0;
	cout << "n = "; cin >> n;
	while (k < n)
	{
		k += 1;
		if (max < number) 
		{
			max = number;
		}
		number = k * exp(pow(sin(k + 1), 2));
		cout << "number = " << number << endl;
		sum += number;
	}
	cout << "maximal number: " << max << endl;
	cout << "number sum: " << sum << endl;
	return(0);
}