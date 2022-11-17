#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int x, k;
	cin >> x >> k;

	int c1 = 0, c2 = 0, c3 = 0;

	if (7000 * k <= 1000 * x) 
		c1 = 7000 * k;
	if (3500 * k <= 1000 * x) 
		c2 = 3500 * k;
	if (1750 * k <= 1000 * x) 
		c3 = 1750 * k;

	cout << max(c1, max(c2, c3));

	return 0;
}