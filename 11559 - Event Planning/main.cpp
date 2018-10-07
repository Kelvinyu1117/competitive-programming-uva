#include <iostream>
using namespace std;

int main()
{
	int numOfP;
	int budget;
	int numOfH;
	int numOfW;
	while (cin >> numOfP >> budget >> numOfH >> numOfW) {

		int minCost = budget + 1;

		for (int i = 0; i < numOfH; i++) {
			int price;
			int cost;
			bool enoughBed = false;

			cin >> price;
			cost = price * numOfP;

			for (int j = 0; j < numOfW; j++) {
				int bed;
				cin >> bed;
				enoughBed = (bed >= numOfP);

				if (enoughBed && cost <= minCost) {
					minCost = cost;
				}
			}

		}


		if (minCost <= budget) {
			cout << minCost << endl;
		}
		else {
			cout << "stay home" << endl;
		}

	}

	return 0;
}