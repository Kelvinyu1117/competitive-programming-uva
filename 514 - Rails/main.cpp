#include <iostream>
#include <stack>
#include <queue>

using namespace std;


bool checkPossible(queue<int> &q) {
	stack<int> s;
	int numOfTrain = q.size();
	for (int i = 0; i < numOfTrain; i++) {
		s.push(i + 1);
		while (!s.empty() && s.top() == q.front()) {
			s.pop();
			q.pop();
		}
	}


	return s.empty();

}

int main()
{
	int n;

	while (cin >> n && n != 0) {

		while (true) {

			queue<int> q;

			int a;
			cin >> a;

			if (a == 0) {
				break;
			}else {
				q.push(a);
			}

			for (int i = 0; i < n - 1; i++) {
				cin >> a;
				q.push(a);
			}

			bool isPossible = checkPossible(q);

			if (isPossible) {
				cout << "Yes" << endl;
			}else {
				cout << "No" << endl;
			}
		}

		cout << endl;
	}


	return 0;
}
