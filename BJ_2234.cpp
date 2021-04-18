#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int N, M;
int Array[51][51];
int visit[51][51];
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 }; //서북동남 순서로해야 2진수 AND 비트연산

struct point
{
	int x;
	int y;
};

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> Array[i][j];
}

int BFS(int x, int y)
{
	visit[y][x] = true;
	queue<point> q;
	q.push({ x, y });

	int cnt = 1;
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();

		int chk = 1;
		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];
			
			if (nx > -1 && nx < N && ny > -1 && ny < M)
			{
				if (visit[ny][nx] == false)
				{
					if ((Array[Y][X] & chk) != chk) //해당 방향과 비트연산으로 벽있는지 판단
					{
						visit[ny][nx] = true;
						cnt++;
						q.push({ nx, ny });
					}
				}
			}
			chk *= 2; //1, 2, 4, 8 이진수 비트
		}
	}

	return cnt;
}

void solve()
{
	int MAX = 0, cnt = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visit[i][j] == false)
			{
				cnt++;
				int c = BFS(j, i);
				if (MAX < c) MAX = c;
			}
		}
	}

	cout << cnt << endl << MAX << endl;

	MAX = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int wcnt = 1;
			for (int k = 0; k < 4; k++)
			{
				Array[i][j] -= wcnt;
				memset(visit, 0, sizeof(visit));
				int c = BFS(j, i);
				if (MAX < c) MAX = c;
				Array[i][j] += wcnt;
				wcnt *= 2;
			}
		}
	}

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
