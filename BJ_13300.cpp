#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, K;
int Array[7][2];

void input()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int s, y;
		cin >> s >> y;
		Array[y][s]++;
	}
}

void solve()
{
	int cnt = 0;
	for (int i = 1; i < 7; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int n = Array[i][j];
			if (n%K == 0)
				cnt += (n / K);
			else
				cnt += ((n / K) + 1);
		}
	}

	cout << cnt;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
