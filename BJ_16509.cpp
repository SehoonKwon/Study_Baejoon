#include <iostream>
#include <queue>
using namespace std;

int R1, R2, C1, C2;
int visit[10][10];
int dx[4][2][3] = {
	{ 	{0, -1, -2}, {0, 1, 2}}, {	{-1, -2, -3}, {-1, -2, -3}	},	{ {1, 2, 3}, {1, 2, 3}	},	{	{0, -1, -2}, {0, 1, 2} }
};
int dy[4][2][3] = {
	{	{-1, -2, -3}, {-1, -2, -3}	},	{	{0, -1, -2}, {0, 1, 2}}, {	{0, -1, -2}, {0, 1, 2} },	{	{1, 2, 3}, {1, 2, 3}}
};

struct point
{
	int x;
	int y;
	int step;
};

int BFS()
{
	queue<point> q;
	q.push({ C1, R1, 0 });
	visit[R1][C1] = true;

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		if (X == C2 && Y == R2)
			return step;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				int flag = 0;
				int nx, ny;
				for (int k = 0; k < 3; k++)
				{
					nx = X + dx[i][j][k];
					ny = Y + dy[i][j][k];
					if ((nx < 0 || nx > 8 || ny < 0 || ny > 9) || (k < 2 && ny == R2 && nx == C2) )
					{
						flag = 1;
						break;
					}
				}
				if (!flag && visit[ny][nx] == false)
				{
					visit[ny][nx] = true;
					q.push({ nx, ny, step + 1 });
				}
			}
		}
	}

	return -1;
}

int main()
{
	cin >> R1 >> C1 >> R2 >> C2;
	int ans = BFS();
	cout << ans;
	return 0;
}
