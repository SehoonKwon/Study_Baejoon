#include <iostream>
#include <queue>
using namespace std;

//20.10.12

int R, C;
char Array[1001][1001];
int visit[1001][1001];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int Jx, Jy;

struct point
{
	int x;
	int y;
	int step;
};

queue<point> q;

void input()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] == 'F')
				q.push({ j, i, 0 });
			else if (Array[i][j] == 'J')
			{
				Jx = j;
				Jy = i;
			}
		}
	}
}

void BFS_F()
{
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > -1 && nx < C && ny > -1 && ny < R)
			{
				if (visit[ny][nx] == false || step + 1 < visit[ny][nx])
				{
					if (Array[ny][nx] != '#')
					{
						visit[ny][nx] = step + 1;
						q.push({ nx, ny, step + 1 });
					}
				}
			}
		}
	}
}

int BFS_J()
{
	q.push({ Jx, Jy, 0 });

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		if (X == 0 || X == C - 1 || Y == 0 || Y == R - 1)
			return step + 1;

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > -1 && nx < C && ny > -1 && ny < R)
			{
				if (visit[ny][nx] == false || step + 1 < visit[ny][nx])
				{
					if (Array[ny][nx] != '#')
					{
						visit[ny][nx] = step + 1;
						q.push({ nx, ny, step + 1 });
					}
				}
			}
		}
	}

	return -1;
}

void solve()
{
	BFS_F();
	int c = BFS_J();
	if (c == -1) cout << "IMPOSSIBLE";
	else cout << c;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
