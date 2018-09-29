#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, z1, z2;
	cout << "Vvedite a" << endl << "a = ";
	cin >> a;

	cout << "\nz1 = sin(4*" << a << ") / (1 + cos(4*" << a << "))";
	cout << " * cos(2*" << a << ") / (1 + cos(2*" << a << "))" << endl;
	cout << "z2 = ctg(3/2 * pi - " << a << ")\n" << endl;

	z1 = sin(4 * a) / (1 + cos(4 * a)) * cos(2 * a) / (1 + cos(2 * a));
	z2 = 1 / tan(3 / 2 * M_PI - a);

	if (z1 = z2)
	{
		cout << "z1 = " << z1 << endl;
		cout << "z2 = " << z2 << endl;
	}
	else
		cout << "Resheno ne pravilno" << endl;

	return 0;
}