#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int n, k, m;
	string a;
	cin >> n;

	while (n) {
		while (cin >> k) {
			string allChar = "";
			vector<double> pay;
			double amount = 0;

			for (int i = 0; i < k; i++) {
				char a;
				double b;
				cin >> a >> b;
				allChar += a;
				pay.push_back(b / 100);
			}


			cin >> m;
			string line;
			getline(cin, line);

			while (m) {
				getline(cin, line);
				for (int i = 0; i < k; i++) {
					for (int j = 0; j < line.length(); j++) {
						if (allChar[i] == line[j]) {
							amount += pay[i];
						}
					}
				}
				m--;
			}

			cout << fixed << setprecision(2);
			cout << amount << "$" << endl;
		}

		n--;
	}
	return 0;
}