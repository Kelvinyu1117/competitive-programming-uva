#include <iostream>

using namespace std;
int main() {
	int k;
	while (cin >> k && k != 0) {
		int x, y;
		cin >> x >> y;

		for (int i = 0; i < k; i++) {
			int q_X, q_Y;
			cin >> q_X >> q_Y;

			if (q_X == x || q_Y == y) {
				cout << "divisa" << endl;
			}else if (q_X > x && q_Y > y) {
				cout << "NE" << endl;
			}else if (q_X > x && q_Y < y) {
				cout << "SE" << endl;
			}else if (q_X < x && q_Y > y) {
				cout << "NO" << endl;
			}else if (q_X < x && q_Y < y) {
				cout << "SO" << endl;
			}
		}
	}
	return 0;
}