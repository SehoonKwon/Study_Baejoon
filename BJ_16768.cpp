#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

#define endl "\n"
#define INF (int)1e9

int N, K;
int Array[101][11];
int visit[101][11];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

struct point
{
	int x;
	int y;
};

vector<point> v;

void input()
{
	cin >> N >> K;

	string str;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		for (int j = 0; j < 10; j++)
			Array[i][j] = str[j] - '0';
	}
}

int chk(int x, int y)
{
	int cnt = 1;
	queue<point> q;
	q.push({ x, y });
	visit[y][x] = true;
	int color = Array[y][x];

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > -1 && nx < 10 && ny > -1 && ny < N)
			{
				if (visit[ny][nx] == false && Array[ny][nx] == color)
				{
					visit[ny][nx] = true;
					cnt++;
					q.push({ nx, ny });
				}
			}
		}
	}

	if (cnt >= K) return 1;
	else return 0;
}

void Del_mooyo(int x, int y)
{
	queue<point> q;
	q.push({ x, y });
	int color = Array[y][x];
	Array[y][x] = 0;

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (Array[ny][nx] == color)
			{
				visit[ny][nx] = true;
				Array[ny][nx] = 0;
				q.push({ nx, ny });
			}
		}

	}
}

void Pull()
{
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Array[i][j] == 0)
			{
				for (int k = 1; k < 101; k++)
				{
					if (i - k < 0) break;

					if (Array[i - k][j] != 0)
					{
						Array[i][j] = Array[i - k][j];
						Array[i - k][j] = 0;
						break;
					}
				}
			}
		}
	}
}

void solve()
{
	while (1)
	{
		memset(visit, 0, sizeof(visit));
		v.clear();

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (Array[i][j] != 0 && visit[i][j] == false)
				{
					int c = chk( j, i );
					if (c)
						v.push_back({ j, i });
				}
			}
		}

		if (v.size() == 0) break;

		for (auto it : v)
			Del_mooyo(it.x, it.y);

		Pull();
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << Array[i][j];
		cout << endl;
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
