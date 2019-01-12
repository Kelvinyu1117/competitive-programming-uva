#include <iostream>

using namespace std;

int step2(long long int A, int &cnt) {
	if (A == 1) {
		cnt++;
		return -1;
	}
	else {
		return 1;
	}
}

int main()
{
	long long int A, L;
	int rnd = 1;

	while (cin >> A >> L && A > 0 && L > 0) {
		int cnt = 0;
		cout << "Case " << rnd << ": A = " << A << ", limit = " << L << ", number of terms = ";
		while (!(A > L || step2(A, cnt) == -1)) {
			if (A % 2 != 0) {
				A = 3 * A + 1;
			}
			else if (A % 2 == 0) {
				A = A / 2;
			}

			cnt++;
		}

		cout << cnt << endl;

		cnt = 1;
		rnd++;
	}

	return 0;
}