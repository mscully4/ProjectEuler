#include <iostream>

int main() {
	using namespace std;
	int i = 2;
	int count = 0;
	bool run = true;
	while (true) {
		for (int z = 2; z < i; z++) {
			if (i % z == 0) {
				run = false;
				break;
			}
		}
		if (run) {
		count += 1;
			if (count == 10001) {
				cout << i << endl;
				break;
			}
		}
		i += 1;
		run = true;
		}
	}
