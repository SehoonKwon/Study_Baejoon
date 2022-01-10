#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int R, C, N;
int Array[1001][1001], visit[1001][1001];

struct point
{
	int x;
	int y;
	int step;
};

struct dtable
{
	int r;
	int c;
};
vector<dtable> dv;
queue<point> q;

void input()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> Array[i][j];

	cin >> N;
	int r, c;
	for (int i = 0; i < N; i++)
	{
		cin >> r >> c;
		dv.push_back({ r, c });
	}
}

int BFS()
{
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		if (Y == R - 1)
			return step;

		for (int i = 0; i < N; i++)
		{
			int nx = X + dv[i].c;
			int ny = Y + dv[i].r;

			if (nx > -1 && nx < C && ny > -1 && ny < R)
				if (visit[ny][nx] == false && Array[ny][nx] == 1)
				{
					visit[ny][nx] = true;
					q.push({ nx, ny, step + 1 });
				}
		}
	}

	return -1;
}

void solve()
{
	for (int i = 0; i < C; i++)
	{
		if (Array[0][i] == 1)
		{
			visit[0][i] = true;
			q.push({ i, 0, 0 });
		}
	}

	int ans = BFS();
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
