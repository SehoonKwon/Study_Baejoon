#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

#define endl "\n"

int R, C, N;
char Array[101][101];
int visit[101][101];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
vector<int> hv;
int flag;

struct point
{
	int x;
	int y;
};
vector<point> pv;

void input()
{
	cin >> R >> C;
	for (int i = 1; i < R + 1; i++)
		for (int j = 1; j < C + 1; j++)
			cin >> Array[i][j];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int h;
		cin >> h;
		hv.push_back(R + 1 - h);
	}
}

void BFS(int x, int y, int chk)
{
	queue<point> q;
	visit[y][x] = chk;
	q.push({ x, y });
	pv.push_back({ x, y });

	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > 0 && nx <= C && ny > 0 && ny <= R)
			{
				if (Array[ny][nx] == 'x' && visit[ny][nx] == false)
				{
					visit[ny][nx] = chk;
					pv.push_back({ nx, ny });
					q.push({ nx, ny });
				}
			}
		}
	}
}

void pull(int chk)
{
	int mcnt = 987654321;
	for (auto it : pv)
	{
		int x = it.x;
		int y = it.y;
		for (int i = 1; i <= R; i++)
		{		
			if (y + i <= R && visit[y + i][x] == chk) break;

			if (y + i > R || Array[y + i][x] == 'x')
			{
				mcnt = min(mcnt, i - 1);
				break;
			}
		}
	}

	if (mcnt > 0 && mcnt < 987654321)
	{
		flag = 1;
		sort(pv.begin(), pv.end(), [](const point& u, const point&v) { return u.y > v.y; });
		for (auto it : pv)
		{
			Array[it.y][it.x] = '.';
			Array[it.y + mcnt][it.x] = 'x';
		}
	}
}

void PRT()
{
	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
			cout << Array[i][j];
		cout << endl;
	}
}

void solve()
{
	for (int k = 0; k < hv.size(); k++)
	{
		memset(visit, 0, sizeof(visit));
		flag = 0;

		int h = hv[k];
		if (k % 2) //왼->오
		{
			for (int i = C; i > 0; i--)
			{
				if (Array[h][i] == 'x')
				{
					Array[h][i] = '.';
					for (int j = 0; j < 4; j++)
					{
						int nx = i + dx[j];
						int ny = h + dy[j];

						if (nx > 0 && nx <= C && ny > 0 && ny <= R)
						{
							if (Array[ny][nx] == 'x' && visit[ny][nx] == false)
							{
								BFS(nx, ny, j + 1);
								pull(j + 1); //2개 이상의 클러스터가 내려오는 경우는 없다 했으니 바로바로 내려줘도 될듯? 있으면 더이상 없으므로 빠져나가기
								pv.clear();
								if (flag)
									break;
							}
						}
					}
					break;
				}
			}
		}
		else //오->왼
		{
			for (int i = 1; i <= C; i++)
			{
				if (Array[h][i] == 'x')
				{
					Array[h][i] = '.';
					for (int j = 0; j < 4; j++)
					{
						int nx = i + dx[j];
						int ny = h + dy[j];

						if (nx > 0 && nx <= C && ny > 0 && ny <= R)
						{
							if (Array[ny][nx] == 'x' && visit[ny][nx] == false)
							{
								BFS(nx, ny, j + 1);
								pull(j + 1);	
								pv.clear();
								if (flag)
									break;
							}
						}
					}
					break;
				}
			}
		}
	}

	PRT();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
