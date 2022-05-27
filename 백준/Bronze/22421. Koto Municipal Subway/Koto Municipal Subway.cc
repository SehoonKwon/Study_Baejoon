#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	while (1)
	{
		int D, E;
		cin >> D >> E;
		if (D == 0 && E == 0) break;
		double MIN = 99999;
		for (int i = 1; i <= 100; i++)
		{
			if (D - i < 0) continue;
			int val = i * i + (D - i) * (D - i);
			double res = sqrt(double(val));
			MIN = min(MIN, abs(res-E));
		}
		cout << MIN << "\n";
	}
	return 0;
}