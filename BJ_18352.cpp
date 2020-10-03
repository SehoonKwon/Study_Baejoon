#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, K, X;
int visit[300001];
vector<int> v[300001];
vector<int> ans;

struct point
{
	int X;
	int step;
};

void input()
{
	cin >> N >> M >> K >> X;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}
}

void BFS()
{
	queue<point> q;
	q.push({ X, 0 });
	visit[X] = true;

	while (!q.empty())
	{
		int x = q.front().X;
		int step = q.front().step;
		q.pop();

		if (step == K)
		{
			ans.push_back(x);
			continue;
		}

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
}

void solve()
{
	BFS();

	if (ans.size() == 0)
	{
		cout << -1;
		return;
	}

	sort(ans.begin(), ans.end());	
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
