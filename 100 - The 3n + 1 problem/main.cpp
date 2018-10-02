#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_cycle_length(long long n) {
	unsigned count = 1;
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
	long long i, j;

	while (cin >> i >> j) {
		vector<int> nums;
		int index = (i <= j) ? i : j;
		int end = (i >= j) ? i : j;
		for (; index <= end; index++) {
			nums.push_back(find_cycle_length(index));
		}
		cout << i << " " << j << " " << *max_element(nums.begin(), nums.end()) << endl;
	}

	return 0;
}