#include <iostream>
using namespace std;

#define MiletoKm 1.609344
#define GtoL 3.785411784

int main() {
	double X;
	cin >> X;

	double nDist = X * MiletoKm;
	double DistPerL = nDist / GtoL;

	cout<<fixed;
	cout.precision(6);
	cout << 100/DistPerL;

	return 0;
}