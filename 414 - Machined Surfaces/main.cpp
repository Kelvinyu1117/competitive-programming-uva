#include <iostream>
#include <string>
#include <vector>
using namespace std;

int find_max(vector<string> &s) {
	int max = 0;
	for (string a : s) {
		int cnt = 0;
		for (char c : a) {
			if (c == 'X') cnt++;
		}
		if (cnt > max)
			max = cnt;
	}
	return max;
}

int find_numOfX(string s) {
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'X') {
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	int n;
	while (cin >> n && n != 0) {
		cin.ignore();
		vector<string> img;
		while (n--) {
			string i;
			getline(cin, i);
			img.push_back(i);
		}

		int max = find_max(img);
		int sum = 0;
		for (string s : img) {
			int numOfX = find_numOfX(s);
			sum += (max - numOfX);
		}
		cout << sum << endl;
	}
	return 0;
}