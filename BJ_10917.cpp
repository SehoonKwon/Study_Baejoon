#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int N, M;
int visit[100001];

struct point
{
	int x;
	int step;
};

vector<int> v[100001];

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b;
		v[a].push_back(b);
	}
}

int BFS()
{
	queue<point> q;
	q.push({ 1, 0 });
	visit[1] = true;

	while (!q.empty())
	{
		int X = q.front().x;
		int step = q.front().step;
		q.pop();

		if (X == N)
			return step;

		for (int i = 0; i < v[X].size(); i++)
		{
			int nx = v[X][i];

			if (visit[nx] == false)
			{
				visit[nx] = true;
				q.push({ nx, step + 1});
			}
		}
	}

	return -1;
}

void solve()
{
	cout << BFS();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
