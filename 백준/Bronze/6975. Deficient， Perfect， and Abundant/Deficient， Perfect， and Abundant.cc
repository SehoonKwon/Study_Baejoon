#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int X;
		cin >> X;

		int sum = 0;
		for (int i = 1; i < X; i++) {
			if (X % i == 0)
				sum += i;
		}

		cout << X;
		if (sum > X) cout << " is an abundant number.\n";
		else if (sum < X) cout << " is a deficient number.\n";
		else if (sum == X) cout << " is a perfect number.\n";
        cout << "\n";
	}

	return 0;
}