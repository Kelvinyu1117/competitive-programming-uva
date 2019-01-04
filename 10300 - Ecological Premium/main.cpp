#include <iostream>

using namespace std;

int main()
{
	int n;

	while (cin >> n) {
		while (n--) {
			int f;
			cin >> f;
			long long int sum = 0;
			while (f--) {
				long long int size, animals, env;
				cin >> size >> animals >> env;
				sum += size * env;
			}
			cout << sum << endl;
		}

	}
	return 0;
}