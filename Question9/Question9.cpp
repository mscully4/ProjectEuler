#include <iostream>
#include <cmath>

int main () {
	using namespace std;
	int product = 0;
	for (int i = 1; i < 500; i++) {
		for (int z = 1; z < 500; z++) {
			for (int x = 1; x < 500; x++) {
				if (pow(i, 2) + pow(z, 2) == pow(x, 2)) {
					if (i + z + x == 1000) {
						cout << i * z * x << endl;
						break;
					}
				}
			}
		}
	}
}
