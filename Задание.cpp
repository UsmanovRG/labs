#include <cmath>
#include <cstdlib>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	double a, n, b, w, k, m;
	srand((unsigned)time(NULL));
	k = (double)rand() / RAND_MAX * 10 + 5;
	m = (double)rand() / RAND_MAX * 5 + 5;

	b = exp(k);

	n = pow(b * k, 1 / m);

	a = n * pow(sin(m), 4.0);

	w = sqrt(fabs(pow(a, m)) * pow(b, n));

	cout << "w = " << w << endl;
	return 0;
}