#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int N, M;
int visit[1001];

struct point
{
	int x;
	int step;
};

vector<point> v[1001];

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N -1; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b, c });
		v[b].push_back({ a, c });
	}
}

int BFS(int s, int e)
{
	queue<point> q;
	q.push({ s, 0 });
	visit[s] = true;

	while (!q.empty())
	{
		int X = q.front().x;
		int step = q.front().step;
		q.pop();
		
		if (X == e)
			return step;

		for (int i = 0; i < v[X].size(); i++)
		{
			int nx = v[X][i].x;
			int w = v[X][i].step;

			if (visit[nx] == false)
			{
				visit[nx] = true;
				q.push({ nx, step + w });
			}
		}
	}

	return -1;
}

void solve()
{
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		memset(visit, 0, sizeof(visit));
		cout << BFS(a, b) << "\n";
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
