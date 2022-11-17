#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, C;
		cin >> N >> C;

		int day = 0;
		while (N > 0) {
			N -= C;
			day++;
		}
		cout << day << "\n";
	}

	return 0;
}