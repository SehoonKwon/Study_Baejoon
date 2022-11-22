#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, P;
	cin >> N >> P;

	int MIN = P;
	if (N >= 20) MIN = min(MIN, P * 75 / 100);
	if (N >= 15) MIN = min(MIN, P - 2000);
	if (N >= 10) MIN = min(MIN, P * 90 / 100);
	if (N >= 5) MIN = min(MIN, P - 500);

	if (MIN < 0) MIN = 0;
	cout << MIN;

	return 0;
}