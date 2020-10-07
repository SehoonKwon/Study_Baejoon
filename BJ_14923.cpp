#include <iostream>
#include <queue>
using namespace std;

int N, M;
int Hx, Hy, Ex, Ey;
int Array[1001][1001];
int visit[1001][1001][2];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int MIN = 987654321;

struct point
{
	int x;
	int y;
	int step;
	int magic;
};

void input()
{
	cin >> N >> M;
	cin >> Hx >> Hy >> Ex >> Ey;
	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < M + 1; j++)
			cin >> Array[i][j];
}

void solve()
{
	queue<point> q;
	q.push({ Hx, Hy, 0, 0 });
	visit[Hx][Hy][0] = true;
	
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		int magic = q.front().magic;
		q.pop();

		if (X == Ex && Y == Ey)
		{
			if (step < MIN) MIN = step;
			visit[Ex][Ey][magic] = false;
			continue;
		}

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > 0 && nx <= N && ny > 0 && ny <= M)
			{
				if (Array[nx][ny] == 1 && magic == 0)
				{
					visit[nx][ny][magic + 1] = true;
					q.push({ nx, ny, step + 1, magic + 1 });
				}

				else if (Array[nx][ny] == 0 && visit[nx][ny][magic] == false)
				{
					visit[nx][ny][magic] = true;
					q.push({ nx, ny, step + 1, magic });
				}
			}
		}
	}

	if (MIN == 987654321) MIN = -1;
	cout << MIN;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
