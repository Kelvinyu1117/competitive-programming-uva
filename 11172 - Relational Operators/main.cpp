#include <iostream>

using namespace std;
int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			cout << ">" << endl;
		}
		else if (a < b) {
			cout << "<" << endl;
		}
		else {
			cout << "=" << endl;
		}
	}
	return 0;
}