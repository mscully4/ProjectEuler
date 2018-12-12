#include <iostream>

int main() {
	using namespace std;
	long long number = 600851475143;
	while (true) {
		cout << "LOOP" << endl;
		for (int i=1; i < number; i++) {
			if (number % i == 0) {
				number /= i;
			}
		}
		break;
}
	cout << number << endl;
	return 0;
}
