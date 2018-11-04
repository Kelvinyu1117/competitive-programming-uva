#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;

	while (cin >> n && !cin.eof()) {
		vector<int> prices;
		int target;
		for (int i = 0; i < n; i++) {
			int price;
			cin >> price;
			prices.push_back(price);
		}
		cin >> target;

		sort(prices.begin(), prices.end());

		int min = 0;
		int x, y;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (prices[i] + prices[j] == target && min == 0) {
					min = prices[j] - prices[i];
					x = i;
					y = j;
				}
				else if (prices[i] + prices[j] == target && prices[j] - prices[i] < min) {
					x = i;
					y = j;
				}
			}
		}

		cout << "Peter should buy books whose prices are " << prices[x] << " and " << prices[y] << "." << endl;

		cout << endl;
	}