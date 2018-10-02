#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	string input;
	string str2 = "``";
	string str3 = "''";
	bool flag1 = true;
	bool flag2 = false;


	while (getline(cin, str) && !cin.eof()) {

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '\"' && flag1) {
				str.replace(i, 1, str2);
				flag1 = !flag1;
				flag2 = !flag2;
			}
			else if (str[i] == '\"' && flag2) {
				str.replace(i, 1, str3);
				flag1 = !flag1;
				flag2 = !flag2;
			}
		}

		cout << str << endl;
	}
	return 0;
}