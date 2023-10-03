//// Lab_03_3.cpp
// < Любіжанін Софія>
// Лабораторна робота 3.3
// Розгалуження, задане графіком функції.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x;
	double R;
	double y;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	if (x <= R)
		y = x + R;
	else
		if (x > R && x <= 0)
			y = sqrt(pow(R, 2) - pow(x, 2));
		else
			if (x > 0 && x <= 6)
				y = 0;
			else
				if (x > 6)
					y = x - 6;
	cout << "y = " << y << endl;
	
	cin.get();
	return 0;
}