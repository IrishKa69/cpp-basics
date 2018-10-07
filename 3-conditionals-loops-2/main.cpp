#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	double X1, X2, dX;
	const double eps = 1e-15;
	long maxn=1000000;
	cout << fixed;

	cout << "X must be less than -1" << endl;
	cout << "Enter X1: ";
	cin >> X1;
	cout << "Enter X2: ";
	cin >> X2;
	cout << "Enter dX: ";
	cin >> dX;

	if (dX > 0 && X2 < -1) {

		cout << string(75, '-') << endl;
		cout << "|" << setw(7) << "X" << setw(7) << "|" << setw(15) << "arctg(x)"  <<setw(5)<< "|"
			<< setw(15) << "atan(x)"<<setw(5) <<  "|" << setw(15) << "Iterations" <<setw(5) << "|"<<endl;
		cout << string(75, '-') << endl;

		for (double x = X1; x <= X2; x += dX) {

			double arc1 = 0, arc2 = -M_PI_2;

			for (int n = 0; n < maxn; n++) {
				 
				arc1=arc2+pow(-1, n + 1) / ((2 * n + 1)*pow(x, 2 * n + 1));

				if (abs(arc2 - arc1) < eps) {
					cout << "|" << setw(7) << X1 << setw(5) << "|" << setw(15) << arc1<<setw(5) << "|"
						<< setw(15) << atan(x) <<setw(5)<< "|" << setw(15) << n <<setw(5)<< "|" << endl;;
					break;
				}
				if (maxn - n < 2) {
					cout << "Error!";
					return 2;
				}
			}
		}
		cout << string(75, '-');
	}
	else {
		cout << "Invalid values";
	}
	return 0;
}