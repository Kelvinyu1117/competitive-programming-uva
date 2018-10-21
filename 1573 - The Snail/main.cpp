#include <iostream>

using namespace std;

int main()
{
	int h;

	while (cin >> h && h != 0) {
		double u;
		int d;
		double f;
		double fatigue;
		int day = 1;
		double total = 0.0;
		cin >> u >> d >> f;

		f = f / 100.0;
		fatigue = u * f;

		while (!(total >= h || total < 0)) {

			if (u > 0) {
				total += u;
				u -= fatigue;
			}

			if (total > h || total < 0) {
				break;
			}

			total -= d;

			if (total >= h || total < 0) {
				break;
			}

			day++;
		}

		if (total >= h) {
			cout << "success on day " << day << endl;
		}
		else {
			cout << "failure on day " << day << endl;
		}

	}

	return 0;
}