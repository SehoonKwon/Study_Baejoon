#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0) break;

		int A = x * 30 + y * 40;
		int B = x * 35 + y * 30;
		int C = x * 40 + y * 20;

		cout << min(A, min(B, C)) << "\n";
	}

	return 0;
}