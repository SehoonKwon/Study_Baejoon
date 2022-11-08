#include <iostream>
using namespace std;

int N;
int MAX = 0, MIN = 101;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x < MIN) MIN = x;
		if (MAX < x) MAX = x;

		sum += x;
	}

	cout << sum - MIN - MAX;

	return 0;
}