#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	int sum = 0, prevCost = 0, prevC = 0;
	while (N--) {
		int x;
		cin >> x;

		if (!prevCost || prevC != x) 
			prevCost = 2;
		else if (prevC == x)
			prevCost *= 2;

		prevC = x;
		sum += prevCost;
		if (sum >= 100) {
			sum = 0;
			prevCost = 0;
		}
	}

	cout << sum;
	return 0;
}