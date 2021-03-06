#include <iostream>
#include<vector>
int main() {
	using namespace std;
	int count = 2520;
	bool run = true;
	//Any number divisible by these numbers is divisible by 1-10 also
	vector<int> factors = {20,19,18,17,16,15,14,13,12,11};
	while (run) {
		for (auto const& value : factors) {
			if (count % value != 0) {
				run = false;
				break;
			}
		}

		if (run) {
			cout << count << endl;
			break;
		} else {
			++count;
			run = true;
		}
	}
}
