#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	int sum = 0;
	int square = 0;
	for (int i = 1; i <= 100; i++) {
		sum += pow(i, 2);
	}
	
	for (int z = 0; z <= 100; z ++) {
		square += z;
	}
	square = pow(square, 2);
	cout << square - sum << endl;
}
