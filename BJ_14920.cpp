#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int cnt = 1;
	while (1)
	{
		if (N == 1) break;

		if (N % 2)
			N = N * 3 + 1;
		else
			N /= 2;
		cnt++;
	}

	cout << cnt;

	return 0;
}
