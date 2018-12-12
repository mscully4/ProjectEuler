#include<iostream>
using namespace std;
int main() {
	int size = 20;
	unsigned long grid[size+1][size+1];
	for (int i = 0; i < size + 1; ++i) {
		grid[i][0] = 1;
		grid[0][i] = 1;
	}

	for (int r = 1; r < size + 1; ++r) {
		for (int c = 1; c < size + 1; ++c) {
			grid[r][c] = grid[r-1][c] + grid[r][c-1];
		}
	}

	cout << grid[size][size] << endl;
}
