#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	int number = 1;
	int divisors = 0;
	for (int z = 2; divisors < 500; z++) {
		number += z;
		divisors = 0;
		float root = sqrt(number);
		if (root == (int) root) {
			divisors++;
			for (int i = 1; i < (int) root; i++) {
				if (number % i == 0) {
					divisors += 2;
				}
			}
		} else {
			for (int x = 1; x <= (int) root; x++) {
				if (number % x == 0) {
					divisors += 2;
				}
			}
		}
	}
	cout << number << " " << divisors << endl;
}
