#include <iostream>
#include <queue>
using namespace std;

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
	vector<char> root;
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

vector<char> BFS()
{
	while (!q.empty())
	{
		int rx = q.front().rx;
		int ry = q.front().ry;
		int bx = q.front().bx;
		int by = q.front().by;
		int step = q.front().step;
		vector<char> root = q.front().root;
		q.pop();

		if (step == 10) continue;

		for (int i = 0; i < 4; i++)
		{
			point r = moving(rx, ry, i);
			point b = moving(bx, by, i);
			vector<char> temp = root;

			if (b.res == 1) continue;
			else if (r.res == 1)
			{
				char x;
				if (i == 0) x = 'D';
				else if (i == 1) x = 'U';
				else if (i == 2) x = 'L';
				else if (i == 3) x = 'R';

				temp.push_back(x);
				return temp;
			}
			else
			{
				if (i == 0)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (ry < by) r.y--;
						else b.y--;
					}
					temp.push_back('D');
					q.push({ r.x, r.y, b.x, b.y, step + 1, temp });
				}
				else if (i == 1)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (ry < by) b.y++;
						else r.y++;
					}
					temp.push_back('U');
					q.push({ r.x, r.y, b.x, b.y, step + 1, temp });
				}
				else if (i == 2)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (rx < bx) b.x++;
						else r.x++;
					}
					temp.push_back('L');
					q.push({ r.x, r.y, b.x, b.y, step + 1, temp });
				}
				else if (i == 3)
				{
					if (r.x == b.x && r.y == b.y)
					{
						if (rx < bx) r.x--;
						else b.x--;
					}
					temp.push_back('R');
					q.push({ r.x, r.y, b.x, b.y, step + 1, temp });
				}
			}
		}
	}

	vector<char> t;
	return t;
}

void solve()
{
	q.push({ srx, sry, sbx, sby, 0 });
	vector<char> ans = BFS();
	if (ans.size() == 0) cout << -1;
	else
	{
		cout << ans.size() << "\n";
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i];
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
