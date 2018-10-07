#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	while (cin >> n) {
		set<string> s;
		vector<string> countries;

		for (int i = 0; i < n; i++) {
			string country;
			string name;

			cin >> country;
			getline(cin, name);

			countries.push_back(country);
			s.insert(country);
		}

		for (set<string>::iterator it = s.begin(); it != s.end(); it++) {
			int count = 0;
			for (vector<string>::iterator vit = countries.begin(); vit != countries.end(); vit++) {
				if (*it == *vit) {
					count++;
				}
			}
			cout << *it << " " << count << endl;
		}

	}

	return 0;
}