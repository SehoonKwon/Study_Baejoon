#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(1);
	if ((int)a < 100) cout << 1;
	else {
		double res = (a * (100 - b) / 100);
		if (res < 100) cout << 1;
		else cout << 0;
	}
	return 0;
}