#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int search(vector<int> &num, int key) {

	for (int i = 0; i < num.size(); i++) {
		if (num[i] == key) {
			return i + 1;
		}
	}

	return -1;
}

int main() {
	int n, m;
	int counter = 1;
	while (cin >> n >> m && n != 0 && m != 0) {
		vector<int> nums;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			nums.push_back(x);
		}

		sort(nums.begin(), nums.end());

		cout << "CASE# " << counter << ":" << endl;

		for (int i = 0; i < m; i++) {
			int key, position;
			cin >> key;
			position = binary_search(nums, key);
			if (position == -1) {
				cout << key << " not found" << endl;
			}
			else {
				cout << key << " found at " << position + 1 << endl;
			}
		}

		counter++;
	}
	return 0;
}