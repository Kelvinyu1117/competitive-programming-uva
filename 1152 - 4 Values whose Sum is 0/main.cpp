#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int k;
			int counter = 0;
			cin >> k;
			vector<int> a_v;
			vector<int> b_v;
			vector<int> c_v;
			vector<int> d_v;
			vector<int> ab_v;
			vector<int> cd_v;

			for (int j = 0; j < k; j++) {
				int a, b, c, d;
				cin >> a >> b >> c >> d;
				a_v.push_back(a);
				b_v.push_back(b);
				c_v.push_back(c);
				d_v.push_back(d);
			}

			for (int j = 0; j < k; j++) {
				for (int l = 0; l < k; l++) {
					ab_v.push_back(a_v[j] + b_v[l]);
					cd_v.push_back(c_v[j] + d_v[l]);
				}
			}

			sort(ab_v.begin(), ab_v.end());
			sort(cd_v.begin(), cd_v.end());

			for (int j = 0; j < ab_v.size(); j++) {
				counter += upper_bound(cd_v.begin(), cd_v.end(), -(ab_v[j])) - lower_bound(cd_v.begin(), cd_v.end(), -(ab_v[j]));
			}

			cout << counter << endl;

			if (i != n - 1)
				cout << endl;
		}
	}

	return 0;
}