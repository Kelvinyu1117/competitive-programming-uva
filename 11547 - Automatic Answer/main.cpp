#include <iostream>
using namespace std;

int main()
{
	int t;

	while (cin >> t) {
		while (t--) {
			int n;
			cin >> n;
			int ans = (((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10) % 10;
			if (ans < 0) {
				cout << ans * -1 << endl;
			}
			else {
				cout << ans << endl;
			}
		}
	}

	return 0;
}