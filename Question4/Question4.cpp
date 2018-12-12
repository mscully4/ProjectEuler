#include <iostream>
#include <string>
#include <algorithm>

int main() {
	using namespace std;
	int largest = 0;
	int product;
	string copy, reversed;
	for (int i=999; i > 100; i--) {
		for (int z=999; z > 100; z--) {
			product = i*z;
			copy = to_string(product);
			reversed = copy;
			reverse(reversed.begin(), reversed.end());
			if (copy == reversed) {
				if (product > largest) {
					largest = product;
				}
			}
		}
	}
	cout << to_string(largest) << endl;
}
