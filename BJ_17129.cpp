#include <iostream>
#include <queue>
#include <string>
using namespace std;

//scanf여도 9천만번 수행하면 시간초과가 걸린다.

int N, M;
int Array[3001][3001];
int visit[3001][3001];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

struct point
{
	int x;
	int y;
	int step;
};

queue<point> q;
string s;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> s;

		for (int j = 0; j < M; j++)
		{
			Array[i][j] = s[j]-'0';
			if (Array[i][j] == 2)
			{
				visit[i][j] = true;
				q.push({ j, i, 0 });
			}
		}
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

		if (Array[Y][X] != 0 && Array[Y][X] != 2)
			return step;

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if(nx > -1 && nx < M && ny > -1 && ny < N)
				if (visit[ny][nx] == false && Array[ny][nx] != 1)
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
	int ans = BFS();
	if (ans == -1)
		cout << "NIE";
	else
		cout << "TAK\n" << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
