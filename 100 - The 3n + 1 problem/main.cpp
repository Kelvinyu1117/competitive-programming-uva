#include <iostream>

using namespace std;

int find_cycle_length(int n) {
	int count = 1;
	while (n != 1) {
		count++;
		if (n % 2 != 0) {
			n = 3 * n + 1;
		}else {
			n = n / 2;
		}
	}
	return count;
}


int main() {
	int i, j;
	cout << find_cycle_length(22) << endl;
}