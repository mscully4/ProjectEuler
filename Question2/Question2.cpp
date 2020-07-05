#include <iostream>

int main() {
	using namespace std;

	int first = 1, second = 2, fib = 0, sum = 2;
	while (fib < 4000000) {
		fib = first + second;
		if (fib % 2 == 0) {
			sum += fib;
		}
		first = second;
		second = fib;
	}
	cout << sum << endl;
	return 0;
}
