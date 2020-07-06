#include <iostream>
#include <vector>
#include <cmath>

int main () {
	using namespace std;
	unsigned long sum = 2;
	double root;
	bool prime;
	for (int i = 3; i < 2000000; i += 2) {
		prime = true;
		root = sqrt(i);
		//If the number has a clean square root, it obviously isn't prime
		if (root != (int)root) {
			for (int x = 2; x < root; x++) {
				if (i % x == 0) {
					prime = false;
				}
			}
			//if nothing divides cleanly into the number, then add it to the sum
			if (prime) {
				sum += i;
			}
		}
	}
	cout << sum << endl;
}
