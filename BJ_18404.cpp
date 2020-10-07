#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

//M번 돌면서 구하면 O(N^2 * M) => 500^2 * 1000 = 2.5억
//어차피 위치기록이니 한번에 구하자

int N, M;
int Array[501][501];
int visit[501][501];
int dx[] = { -1, 1, -1, 1, -2, -2, 2, 2 };
int dy[] = { 2, 2, -2, -2, 1, -1, 1, -1 };
int Sx, Sy;

struct Night
{
	int x;
	int y;
	int step;
};

Night target[1001];

void input()
{
	cin >> N >> M;
	cin >> Sy >> Sx;

	for (int i = 0; i < M; i++)
		cin >> target[i].y >> target[i].x;
}

void BFS()
{
	visit[Sy][Sx] = true;
	queue<Night> q;
	q.push({ Sx, Sy, 0 });

	while(!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		for (int i = 0; i < 8; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > 0 && nx <= N && ny > 0 && ny <= N)
			{
				if (visit[ny][nx] == false)
				{
					visit[ny][nx] = step + 1;
					q.push({ nx, ny, step + 1 });
				}
			}
		}
	}
}

void solve()
{
	BFS();
	for (int i = 0; i < M; i++)
		cout << visit[target[i].y][target[i].x] << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
