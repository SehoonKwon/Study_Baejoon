#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, A, B;
int visit[1001];
vector<int> v[1001];

struct point
{
	int X;
	int step;
};

void input()
{
	cin >> A >> B >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
}

int BFS()
{
	queue<point> q;
	q.push({ A, 0 });
	visit[A] = true;

	while (!q.empty())
	{
		int x = q.front().X;
		int step = q.front().step;
		q.pop();

		if (x == B)
			return step;

		for (int i = 0; i < v[x].size(); i++)
		{
			int nx = v[x][i];
			if (visit[nx] == false)
			{
				visit[nx] = true;
				q.push({ nx, step + 1 });
			}
		}
	}
	return -1;
}

void solve()
{
	int ans = BFS();
	cout << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
