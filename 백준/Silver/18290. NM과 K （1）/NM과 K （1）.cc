#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//18290
int N, M, K;
int Array[11][11], visit[11][11];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int MAX = -(int)1e9;

struct point
{
	int x;
	int y;
};
vector<point> v;

void input()
{
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> Array[i][j];
}

int chk()
{
	for (auto it : v)
	{
		for (int i = 0; i < 4; i++)
		{
			int nx = it.x + dx[i];
			int ny = it.y + dy[i];
			if (nx > -1 && nx < M && ny > -1 && ny < N)
				if (visit[ny][nx] == 1) return 0;
		}
	}
	return 1;
}

void DFS(int x, int y, int cnt, int sum)
{
	if (chk() == 0) return;

	if (cnt == K)
	{
		if (MAX < sum) MAX = sum;
		return;
	}

	for (int i = y; i < N; i++)
		for (int j = 0; j < M; j++)
			if (visit[i][j] == false)
			{
				visit[i][j] = true;
				v.push_back({ j, i });
				DFS(j, i, cnt + 1, sum + Array[i][j]);
				v.pop_back();
				visit[i][j] = false;
			}
}

void solve()
{
	DFS(0, 0, 0, 0);
	cout << MAX;
}

int main()
{
	input();
	solve();
	return 0;
}