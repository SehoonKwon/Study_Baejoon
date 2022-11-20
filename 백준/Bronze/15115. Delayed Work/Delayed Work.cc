#include <iostream>
using namespace std;

int main() {
	int K, P, X;
	cin >> K >> P >> X;
	double MIN = (double)1e9;
	for (double M = 1; M < 10001; M++) {
		double D = K / M;
		double T = D * P + M * X;
		if (T < MIN) MIN = T;
	}

	printf("%.3lf", MIN);

	return 0;
}