#include <iostream>
#include <vector>
using namespace std;

int main() {
	int k;

	while (cin >> k && k != 0) {
		vector<int> s(k);
		bool dir;
		bool preDir;
		int count = 1;
		for (int i = 0; i < k; i++) {
			int num;
			cin >> num;
			s.push_back(num);
		}

		for (int i = 0; i < k - 1; i++){
			if (s[i + 1] - s[i] > 0) {
				preDir = dir;
				dir = true;
			}else if (s[i + 1] - s[i] < 0) {
				preDir = dir;
				dir = false;
			}
			
			if (preDir != dir) {
				count++;
			}
		}

		cout << count << endl;

	}
}