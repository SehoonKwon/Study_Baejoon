#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double A, B;
	cin>>A>>B;
	double M = (B-A)/400;
	double t = pow(10, M);
	t += 1;
	cout << 1/t;
	return 0;
}