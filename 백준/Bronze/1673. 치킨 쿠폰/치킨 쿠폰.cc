#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
	while (1) {
		ull n, k;
		cin >> n >> k;
		if (cin.eof()) break;

		ull cnt = 0;
		cnt += n;

		while (1) {
			int m = n / k;
			if (m == 0) break;
			n -= (k * m);
			n += m;
			cnt += m;

		}

		cout << cnt<<"\n";
	}
	return 0;
}