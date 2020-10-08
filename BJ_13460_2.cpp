#include <iostream>
#include <queue>
using namespace std;

//구슬 탈출 1 소스에서 return 값만 바꾸기. 최솟값이므로 바로 return

int N, M;
char Array[11][11];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int srx, sry, sbx, sby;

struct Ball
{
	int rx, ry;
	int bx, by;
	int step;
};

struct point
{
	int x;
	int y;
	int res;
};

queue<Ball> q;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] == 'R')
			{
				srx = j;
				sry = i;
			}
			else if (Array[i][j] == 'B')
			{
				sbx = j;
				sby = i;
			}
		}
	}
}

point moving(int x, int y, int dir)
{
	while (1)
	{
		x += dx[dir];
		y += dy[dir];
		if (Array[y][x] == 'O') return { 0, 0, 1 };
		if (Array[y][x] == '#') return { x - dx[dir], y - dy[dir], 0 };
	}
}

int BFS()
{
	while (!q.empty())
	{
		int rx = q.front().rx;
		int ry = q.front().ry;
		int bx = q.front().bx;
		int by = q.front().by;
		int step = q.front().step;
		q.pop();

		if (step == 10) continue;

		for (int i = 0; i < 4; i++)
		{
			point r = moving(rx, ry, i);
			point b = moving(bx, by, i);

			if (b.res == 1) continue;
			else if (r.res == 1) return step + 1;
			else
			{
				if (i == 0)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (ry < by) r.y--;
						else b.y--;
					}
					q.push({ r.x, r.y, b.x, b.y, step + 1 });
				}
				else if (i == 1)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (ry < by) b.y++;
						else r.y++;
					}
					q.push({ r.x, r.y, b.x, b.y, step + 1 });
				}
				else if (i == 2)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (rx < bx) b.x++;
						else r.x++;
					}
					q.push({ r.x, r.y, b.x, b.y, step + 1 });
				}
				else if (i == 3)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (rx < bx) r.x--;
						else b.x--;
					}
					q.push({ r.x, r.y, b.x, b.y, step + 1 });
				}
			}
		}
	}

	return -1;
}

void solve()
{
	q.push({ srx, sry, sbx, sby, 0 });
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
