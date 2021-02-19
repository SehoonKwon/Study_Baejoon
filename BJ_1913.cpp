#include <iostream>
using namespace std;

int N, K;
int Array[1001][1001];
int dx[] = { 0, 1, 0, -1 }; //상우하좌 순서
int dy[] = { -1, 0, 1, 0 };
int dArray[] = { 1, 1, 2, 2 }; //첫번째 움직임 크기

void input()
{
	cin >> N >> K;
}

void solve()
{
	int x = N / 2, y = N / 2;
	int cnt = 0, dir = 0; //크기 카운트와 방향
	int MAX = N * N;
	int ansx = -1, ansy = -1;
	for (int i = 1; i <= MAX; i++)
	{
		Array[y][x] = i;
		if (i == K)
		{
			ansx = x;
			ansy = y;
		}

		x += dx[dir];
		y += dy[dir];
		cnt++;
		if (cnt == dArray[dir])
		{
			dArray[dir] += 2;
			dir++;
			cnt = 0;
			if (dir == 4) dir = 0;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << Array[i][j] << " ";
		cout << "\n";
	}
	cout << ansy + 1 << " " << ansx + 1;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
