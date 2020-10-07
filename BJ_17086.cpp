#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

#define INF (int)1e9

int N, M;
int Hx, Hy, Ex, Ey;
int Array[51][51];
int visit[51][51];
int dist[51][51];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1 };

struct point
{
	int x;
	int y;
	int step;
};

vector<point> shk;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] == 1)
				shk.push_back({ j, i, 0 });

			if(Array[i][j] == 0) dist[i][j] = INF;
		}
	}
}

void BFS(point t)
{
	int x = t.x;
	int y = t.y;

	memset(visit, 0, sizeof(visit));
	queue<point> q;
	q.push({ x, y, 0 });
	visit[y][x] = true;

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		for (int i = 0; i < 8; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (ny > -1 && ny < N && nx > -1 && nx < M)
			{
				if (visit[ny][nx] == false && Array[ny][nx] == 0)
				{
					visit[ny][nx] = true;
					if (step + 1 < dist[ny][nx]) dist[ny][nx] = step + 1;
					q.push({ nx, ny, step + 1 });
				}
			}
		}
	}
}

void solve()
{
	for (int i = 0; i < shk.size(); i++)
		BFS(shk[i]);

	int MAX = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (Array[i][j] == 0 && MAX < dist[i][j]) MAX = dist[i][j];

	cout << MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
