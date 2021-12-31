#include <iostream>
#include <vector>
using namespace std;

int N, L;
int Array[1001];

void input()
{
	cin >> N >> L;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		Array[x] = 1;
	}
}

void solve()
{
	int cnt = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (Array[i] == 1)
		{
			for (int j = 0; j < L && i+j < 1001; j++)
				Array[i + j] = 0;
			cnt++;
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
