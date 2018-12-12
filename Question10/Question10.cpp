#include <iostream>
#include <vector>
#include <cmath>

int main () {
	using namespace std;
	unsigned long sum = 2;
	double root;
	bool prime;
	for (int i = 3; i < 2000000; i += 2) {
		bool prime = true;
		root = sqrt(i);
		if (root != (int)root) {
			for (int x = 2; x < root; x++) {
				if (i % x == 0) {
					prime = false;
				}
			}
			if (prime) {
				sum += i;
			}
		}
	}
	cout << sum << endl;
}
