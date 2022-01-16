#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, S;
int fx, fy;
int Array[201][201];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

struct point
{
	int x;
	int y;
};
vector<point> v[1001];
queue<point> q, nq;

void input()
{
	cin >> N >> K;
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] > 0)
				v[Array[i][j]].push_back({ j, i });
		}
	}

	cin >> S >> fy >> fx;
}

void BFS()
{
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();

		int num = Array[Y][X];

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > 0 && nx <= N && ny > 0 && ny <= N)
				if (Array[ny][nx] == 0)
				{
					Array[ny][nx] = num;
					nq.push({ nx, ny });
				}
		}
	}
}

void solve()
{
	for (int i = 1; i <= K; i++)
		for (int j = 0; j < v[i].size(); j++)
			q.push(v[i][j]);

	while (S--)
	{
		BFS();
		q = nq;
		while (!nq.empty())
			nq.pop();
	}

	cout << Array[fy][fx];
}

int main()
{
	input();
	solve();
	return 0;
}
