#include <iostream>
using namespace std;

int main() {

	int T;
	cin >> T;
	while (T--) {
		double P, C;
		cin >> P >> C;
		double x = 100 / (C + 100);
		printf("%.5lf\n", P * x);
	}

	return 0;
}