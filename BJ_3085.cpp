#include <iostream>
#include <cstring>
using namespace std;

//3085

int N;
char Array[51][51], Array2[51][51];
int dx[] = { 0,1 };
int dy[] = { 1,0 };
int temp;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> Array[i][j];

	memcpy(Array2, Array, sizeof(Array));
}

void DFS(int x, int y, int dir)
{
	temp++;
	int nx = x + dx[dir];
	int ny = y + dy[dir];

	if (nx > -1 && nx < N && ny > -1 && ny < N)
		if (Array[y][x] == Array[ny][nx])
			DFS(nx, ny, dir);
}

int go()
{
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				temp = 0;
				DFS(j, i, k);
				if (result < temp) result = temp;
			}
		}
	}
	return result;
}

void solve()
{
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			memcpy(Array, Array2, sizeof(Array2));
			swap(Array[i][j], Array[i][j + 1]);
			int res = go();
			if (ans < res) ans = res;
		}
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N; j++)
		{
			memcpy(Array, Array2, sizeof(Array2));
			swap(Array[i][j], Array[i + 1][j]);
			int res = go();
			if (ans < res) ans = res;
		}
	}

	memcpy(Array, Array2, sizeof(Array2));
	int res = go();
	if (ans < res) ans = res;
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
