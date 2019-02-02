#include <iostream>

using namespace std;

int sumDigit(long long n) {
	if (n / 10 == 0) {
		return n;
	}
	else {
		int sum = 0;

		while (n) {
			sum += n % 10;
			n /= 10;
		}

		return sumDigit(sum);
	}
}

int main() {
	long long n;

	while (cin >> n && n != 0) {
		cout << sumDigit(n) << endl;
	}

	return 0;
}