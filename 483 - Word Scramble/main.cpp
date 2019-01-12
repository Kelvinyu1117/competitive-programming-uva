#include <iostream>
#include <stack> 

using namespace std;

void clear(stack<char> &word) {
	while (!word.empty()) {
		cout << word.top();
		word.pop();
	}
}


int main()
{
	string s;
	while (getline(cin, s)) {
		stack<char> word;
		for (int i = 0; i < s.length(); i++) {
			if (i == s.length() - 1) {
				word.push(s[i]);
				clear(word);
			}
			else if (s[i] != ' ') {
				word.push(s[i]);
			}
			else {
				clear(word);
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}