#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;

	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			vector<int> digit(10, 0);
			for (int i = 1; i <= num; i++) {
				if (i < 10) {
					digit[i]++;
				}else {
					int j = i;
					while (j != 0) {
						digit[j % 10]++;
						j /= 10;
					}
				}
			}
			for (int i = 0; i < 10; i++) {
				if (i == 9) {
					cout << digit[i];
				}else {
					cout << digit[i] << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}
