#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, m, M, T, R;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> m >> M >> T >> R;

	int X = m;
	int time = 0;

	if (m + T > M)
	{
		cout << -1;
		return 0;
	}

	while (1)
	{
		if (N == 0) break;

		if (X + T <= M)
		{
			X += T;
			N--;
		}
		else
		{
			X -= R;
			if (X < m) X = m;
		}
		time++;
	}

	cout << time;

	return 0;
}
