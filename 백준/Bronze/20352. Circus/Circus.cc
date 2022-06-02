#include <iostream>
#include <cmath>
using namespace std;

#define Pi 3.141592

int main() {
	double X;
	cin >> X;
	X /= Pi;
	X = sqrt(X);
	printf("%.6lf", 2*X*Pi);
	return 0;
}