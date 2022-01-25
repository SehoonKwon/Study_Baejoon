#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

//21.03.09 다익 연습

#define endl "\n"
#define INF (int)1e9

int V, E, K;
int dist[20001];

struct point
{
	int dest;
	int val;
};

vector<point> v[20001];

void input()
{
	cin >> V >> E >> K;
	for (int i = 0; i < E; i++)
	{
		int s, e, w;
		cin >> s >> e >> w;
		v[s].push_back({ e, w });
	}
}

struct cmp
{
	bool operator()(const point& u, const point& v)
	{
		if (u.val > v.val) return true;
		else return false;
	}
};

void Dijkstra()
{
	priority_queue<point, vector<point>, cmp> pq;
	for (auto it : v[K])
		pq.push({ it.dest, it.val });

	while (!pq.empty())
	{
		int Node = pq.top().dest;
		int val = pq.top().val;
		pq.pop();

		if (dist[Node] != INF) continue;
		dist[Node] = val;
		for (auto it : v[Node])
			pq.push({ it.dest, it.val + val });
	}
}

void solve()
{
	for (int i = 1; i < V + 1; i++)
		dist[i] = INF;
	dist[K] = 0;
	Dijkstra();
	for (int i = 1; i < V + 1; i++)
	{
		if (dist[i] == INF) cout << "INF";
		else cout << dist[i];
		cout << endl;
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