#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_max(int a, int b, int c) {
	return a > b ? a : b;
}

int find_min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		vector<int> s;
		for (int j = 0; j < 3; j++) {
			int a;
			cin >> a;
			s.push_back(a);
		}
		sort(s.begin(), s.end());
		cout << "Case " << (i + 1) << ": " << s[1] << endl;
	}

	return 0;
}

