#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string str) {
	string reversedStr = "";

	for (int i = str.size() - 1; i >= 0; i--) {
		reversedStr += str[i];
	}

	
	return str.compare(reversedStr) == 0;
}

bool checkMirror(string str) {
	string newStr = "";
	string reversedStr = "";
	bool flag = true;
	for (int i = 0; i < str.size(); i++) {
		switch(str[i]){
			case 'A':
				newStr += 'A';
				break;
			case 'E':
				newStr += '3';
				break;
			case 'H':
				newStr += 'H';
				break;
			case 'I':
				newStr += 'I';
				break;
			case 'J':
				newStr += 'L';
				break;
			case 'L':
				newStr += 'J';
				break;
			case 'M':
				newStr += 'M';
				break;
			case 'O':
				newStr += 'O';
				break;
			case 'S':
				newStr += '2';
				break;
			case 'T':
				newStr += 'T';
				break;
			case 'U':
				newStr += 'U';
				break;
			case 'V':
				newStr += 'V';
				break;
			case 'W':
				newStr += 'W';
				break;
			case 'X':
				newStr += 'X';
				break;
			case 'Y':
				newStr += 'Y';
				break;
			case 'Z':
				newStr += '5';
				break;
			case '1':
				newStr += '1';
				break;
			case '2':
				newStr += 'S';
				break;
			case '3':
				newStr += 'E';
				break;
			case '5':
				newStr += 'Z'; 
				break;
			case '8':
				newStr += '8';
				break;
			default:
				newStr += str[i];
				flag = false;
		}
	}

	for (int i = newStr.size() - 1; i >= 0; i--) {
		reversedStr += newStr[i];
	}



	return str.compare(reversedStr) == 0 && flag;

}

int main() {
	string str;

	while (getline(cin, str) && !cin.eof()) {
		bool p = checkPalindrome(str);
		bool m = checkMirror(str);
		if (!p && !m) {
			cout << str << " -- is not a palindrome." << endl;
		}else if (p && !m) {
			cout << str << " -- is a regular palindrome." << endl;
		}else if (!p && m) {
			cout << str << " -- is a mirrored string." << endl;
		}else if(p && m){
			cout << str << " -- is a mirrored palindrome." << endl;
		}
		cout << endl;
	}
	return 0;
}