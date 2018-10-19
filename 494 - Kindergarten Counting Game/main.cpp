#include <iostream>
#include <string>
using namespace std;


int main()
{
	string s;

	while (getline(cin, s) && !cin.eof()) {
		bool isChar = false;
		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			if (isalpha(s[i]) && !isChar) {
				isChar = true;
				count++;
			}
			else if (!isalpha(s[i])) {
				isChar = false;
			}
		}

		cout << count << endl;
	}

	return 0;
}