#include <iostream>
#include <string>
using namespace std;

int chance;

int guess(string solutionStr, string guessStr) {
	int count_corret = 0;
	string guessedStr = "";
	for (int i = 0; i < guessStr.length(); i++) {
		bool is_wrong = true;
		bool guessed = false;

		for (int j = 0; j < solutionStr.length(); j++) {
			for (int k = 0; k < guessedStr.length(); k++) {
				if (guessStr[i] == guessedStr[k]) {
					guessed = true;
					break;
				}
			}

			if (guessStr[i] == solutionStr[j] && !guessed) {
				is_wrong = false;
				solutionStr[j] = ' ';
				count_corret++;
			}
		}
		guessedStr += guessStr[i];

		if (count_corret == solutionStr.length()) {
			return 1;
		}
		if (is_wrong && !guessed) {
			chance--;
		}

		if (chance == 0) {
			return 0;
		}
	}

	return -1;
}

int main()
{
	int roundOfGame;

	while (cin >> roundOfGame && roundOfGame != -1) {
		chance = 7;
		string solutionStr, guessStr;
		cin >> solutionStr >> guessStr;
		int status = guess(solutionStr, guessStr);

		cout << "Round " << roundOfGame << endl;
		if (status == 0)
			cout << "You lose." << endl;
		else if (status == 1)
			cout << "You win." << endl;
		else if (status == -1)
			cout << "You chickened out." << endl;
	}

	return 0;
}