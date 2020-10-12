#include <iostream>
#include <queue>
using namespace std;

int N, M, T;
int Array[101][101];
int visit[101][101][2];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int MIN = (int)1e9;

struct point
{
	int x;
	int y;
	int step;
	int sword;
};

queue<point> q;

void input()
{
	cin >> N >> M >> T;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> Array[i][j];
	}
}

void BFS()
{
	queue<point> q;
	q.push({ 0, 0, 0, 0 });
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		int sword = q.front().sword;
		q.pop();

		if (step > T) continue;

		if (X == M - 1 && Y == N - 1)
		{
			if (step < MIN) MIN = step;
			continue;
		}

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > -1 && nx < M && ny > -1 && ny < N)
			{
				if (sword == 0)
				{
					if (visit[ny][nx][0] == false)
					{
						if (Array[ny][nx] == 0)
						{
							visit[ny][nx][0] = true;
							q.push({ nx, ny, step + 1, 0 });
						}
						else if (Array[ny][nx] == 2)
						{
							visit[ny][nx][1] = true;
							q.push({ nx, ny, step + 1, 1 });
						}
					}
				}
				else if (sword == 1)
				{
					if (visit[ny][nx][1] == false)
					{
						visit[ny][nx][1] = true;
						q.push({ nx, ny, step + 1, 1 });
					}
				}
			}
		}
	}
}

void solve()
{
	BFS();
	if (T < MIN) cout << "Fail";
	else cout << MIN;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
