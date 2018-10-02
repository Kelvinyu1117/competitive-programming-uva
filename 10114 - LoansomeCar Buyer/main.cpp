/*
 Not yet finish!!!!!!
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int duration;

	while (cin >> duration && duration > 0) {
		int down_payment;
		int loan;
		int num_of_records;
		int car_worth;
		vector<vector<int>> records;

		car_worth = down_payment + loan;
		for (int i = 0; i < num_of_records; i++) {
			int month_num;
			int deprication;
			cin >> month_num >> deprication;
			records.push_back({ month_num, deprication });
		}

		for (int i = 0; i < records.size() - 1; i++) {
			int m, int next_m;
			m = records[i][0];
			next_m = records[i + 1][0];
			for (int j = 0; j < (next_m - m); j++) {
				car_worth *= (1 - records[i][1]);
			}
		}
	}

	return 0;
}