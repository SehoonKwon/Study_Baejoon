#include <iostream>
#include <cmath>
using namespace std;

#define ull unsigned long long

int main() {
	ull N;
	cin >> N;
	
	double n = sqrt(N);
	printf("%.6lf", 4*n);
	
	return 0;
}