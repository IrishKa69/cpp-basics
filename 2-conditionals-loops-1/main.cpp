#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	double x1, x2, dx, a, b, c, f;
	const double EPS = 1e-15;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter dx: ";
	cin >> dx;

	if (dx > 0) {
		cout << string(36, '-') << endl;
		cout << "|" << setw(9) << "X" << setw(9) << "|" << setw(9) << "F" << setw(9) << "|\n";
		cout << string(36, '-') << endl;

		while (x1 <= x2) {

			if (x1 < 0.6 && abs(b + c) > EPS) {
				f = a * pow(x1, 3) + pow(b, 2) + c;
			}
			else {
				if (x1 > 0.6 && abs(b + c) < EPS) {
					f = (x1 - a) / (x1 - c);
				}
				else {
					if (abs(c) > EPS && abs(a) > EPS) {
						f = x1 / c + x1 / a;
					}
					else {
						cout << "|" << setw(11) << x1 << setw(7);
						cout << "|" << "  division by 0  |\n";
						x1 += dx;
						continue;
					}
				}
			}

			if ((((int)a | (int)b) & (int)c) == 0) {

				cout << "|" << setw(9) << x1 << setw(9) << "|" << setw(9) << (int)f << setw(9) << "|\n";
				cout << string(36, '-') << endl;

			}

			else {
				cout << "|" << setw(9) << x1 << setw(9) << "|" << setw(9) << f << setw(9) << "|\n";
				cout << string(36, '-') << endl;
			}
			x1 += dx;
		}
	}
	else {
		cout << "Error dx";
	}
	return 0;
}

