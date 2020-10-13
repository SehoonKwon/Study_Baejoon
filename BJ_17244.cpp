#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int N, M;
char Array[51][51];
int visit[51][51];
int Dvisit[6];
int Sx, Sy, Ex, Ey;
int MIN = (int)1e9;
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

struct point
{
	int x;
	int y;
	int step;
};

vector<point> tv; // 타겟 벡터
vector<int> sv; //순서를 담을 벡터

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] == 'X')
			{
				tv.push_back({ j, i });
			}
			else if (Array[i][j] == 'E')
			{
				Ex = j;
				Ey = i;
			}
			else if (Array[i][j] == 'S')
			{
				Sx = j;
				Sy = i;
			}
		}
	}
}

int BFS(int sx, int sy, int ex, int ey)
{
	queue<point> q;
	q.push({ sx, sy, 0 });
	visit[sy][sx] = true;

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().step;
		q.pop();

		if (X == ex && Y == ey)
			return step;

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > -1 && nx < N && ny > -1 && ny < M)
			{
				if (visit[ny][nx] == false && Array[ny][nx] != '#')
				{
					visit[ny][nx] = true;
					q.push({ nx, ny, step + 1 });
				}
			}
		}
	}

	return 0;
}

void DFS(int cnt)
{
	if (cnt == tv.size())
	{
		int sx = Sx, sy = Sy;
		int sum = 0;
		for (int i = 0; i < sv.size(); i++)
		{
			memset(visit, 0, sizeof(visit));
			int tx = tv[sv[i]].x, ty = tv[sv[i]].y;
			sum += BFS(sx, sy, tx, ty);
			sx = tx, sy = ty;
		}
		memset(visit, 0, sizeof(visit));
		sum += BFS(sx, sy, Ex, Ey);
		if (sum < MIN) MIN = sum;
		return;
	}

	for (int i = 0; i < tv.size(); i++)
	{
		if (Dvisit[i] == true) continue;
		Dvisit[i] = true;
		sv.push_back(i);
		DFS(cnt + 1);
		sv.pop_back();
		Dvisit[i] = false;
	}
}

void solve()
{
	//DFS로 물건을 찾는 순서 정하기 -> BFS를 돌리면서 거리 합산 -> 비교 : DFS(5!) * 5 * memset / BFS(On2) = > 150만
	DFS(0);
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
