#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int answer;
	int largest = 0;
	for (int i = 0; i < 1000000; ++i) {
		unsigned long long z = i;
		int count = 1;
		while (z > 1) {
			count += 1;
			if (z % 2 == 0) {
				z /= 2;
			} else {
				z = 1 + (3 * z);
			}
		}
		if (count > largest) {
			largest = count;
			answer = i;
		}
	}
	cout << answer << endl;
}
