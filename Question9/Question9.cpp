#include <iostream>
#include <cmath>

int main () {
	using namespace std;
	for (int a = 1; a < 500; a++) {
		for (int b = a; b < 500; b++) {
			for (int c = b; c < 500; c++) {
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
					if (a + b + c == 1000) {
						cout << a << " " << b << " " << c << " " << a * b * c << endl;
						return 1;
					}
				}
			}
		}
	}
}
