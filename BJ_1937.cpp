#include <iostream>
#include <algorithm>
using namespace std;

int N;
int Array[501][501];
int visit[501][501];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> Array[i][j];
}

int DFS(int x, int y)
{
	if (visit[y][x] != 0) return visit[y][x];
	
	int day = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx > -1 && nx < N && ny > -1 && ny < N)
		{
			if (Array[ny][nx] > Array[y][x])
			{
				int r = DFS(nx, ny);
				day = max(day, r);
			}
		}
	}

	visit[y][x] = 1 + day;
	return visit[y][x];
}

void solve()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visit[i][j] == false)
			{
				DFS(j, i);
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			ans = max(ans, visit[i][j]);

	cout << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}