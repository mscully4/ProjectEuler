#include <iostream>

int main() {
	using namespace std;
	//we will start at 3, adding 1 to the count for 2
	bool isPrime=true;
	int i = 3, count = 1;
	while (count < 10001) {
		for (int z=3; z<i; z++) {
			if (i % z == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			count += 1;
		}

		if (count == 10001) {
			cout << i << endl;
		}

		//Even numbers cant be prime
		i += 2;
		isPrime = true;
	}
}
