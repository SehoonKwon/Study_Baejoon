#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define INF 1e9

int N, M;
int dist[50001];

struct point
{
	int e;
	int val;
};

vector<point> v[50001];

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int s, e, w;
		cin >> s >> e >> w;
		v[s].push_back({ e, w });
		v[e].push_back({ s, w });
	}
}

struct cmp
{
	bool operator()(point& u, point& v)
	{
		if (u.val > v.val) return true;
		else return false;
	}
};

void Dijkstra()
{
	priority_queue <point, vector<point>, cmp> pq;
	pq.push({ 1, 0 });

	while (!pq.empty())
	{
		int node = pq.top().e;
		int val = pq.top().val;
		pq.pop();

		if (dist[node] != INF) continue;
		dist[node] = val;

		for (int i = 0; i < v[node].size(); i++)
		{
			int next = v[node][i].e;
			int nval = v[node][i].val;

			pq.push({ next, val + nval });
		}
	}
}

void solve()
{
	for (int i = 1; i < N + 1; i++)
		dist[i] = INF;

	Dijkstra();
	cout << dist[N];
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
