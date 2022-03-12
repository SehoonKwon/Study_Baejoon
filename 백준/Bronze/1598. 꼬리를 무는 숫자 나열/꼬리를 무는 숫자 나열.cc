#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int cntA = 0, cntB = 0;
	if (A < 5 && B < 5) {
		cout << abs(A - B);
		return 0;
	}

	while (A > 4 || B > 4)
	{
		if (A > 4) {
			A -= 4;
			cntA++;
		}

		if (B > 4) {
			B -= 4;
			cntB++;
		}
	}

	cout << abs(A - B) + abs(cntA - cntB);

	return 0;
}