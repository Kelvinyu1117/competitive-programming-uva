#include <iostream>
#include <string>
using namespace std;

int main()
{
	string p = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string s;
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < p.length(); j++) {
				if (s[i] == p[j]) {
					cout << p[j - 1];
					break;
				}
			}
			if (s[i] == ' ') {
				cout << s[i];
			}
		}
		cout << endl;
	}

	return 0;
}
