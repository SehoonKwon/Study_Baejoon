#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int N, M;
int visit[20001];
vector<int> v[20001];

struct point
{
	int node;
	int step;
};

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
}

void BFS()
{
	queue<point> q;
	q.push({ 1, 0 });
	visit[1] = 0;

	while (!q.empty())
	{
		int X = q.front().node;
		int step = q.front().step;
		q.pop();

		for (int i = 0; i < v[X].size(); i++)
		{
			int nx = v[X][i];
			
			if (visit[nx] == -1)
			{
				visit[nx] = step + 1;
				q.push({ nx, step + 1 });
			}
		}
	}
}

void solve()
{
	memset(visit, -1, sizeof(visit));
	BFS();
	
	int ans = 0, dist = 0, cnt = 0;
	for (int i = 2; i < N + 1; i++)
	{
		if (dist < visit[i])
		{
			dist = visit[i];
			ans = i;
			cnt = 1;
		}
		else if (dist == visit[i])
			cnt++;
	}
	
	cout << ans << " " << dist << " " << cnt;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
