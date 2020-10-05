#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

#define INF (int)1e9

int n, d, start;
int dist[10001];
int cnt;

struct point
{
	int dest;
	int val;
};

vector<point> v[10001];

void input()
{
	cin >> n >> d >> start;
	for (int i = 0; i < d; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[b].push_back({ a, c });
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

void Dijk()
{
	priority_queue<point, vector<point>, cmp> pq;
	pq.push({ start, 0 });

	while (!pq.empty())
	{
		int Node = pq.top().dest;
		int val = pq.top().val;
		pq.pop();

		if (dist[Node] != INF) continue;
		dist[Node] = val;
		cnt++;

		for (int i = 0; i < v[Node].size(); i++)
		{
			int nx = v[Node][i].dest;
			int w = v[Node][i].val;
			pq.push({ nx, w + val });
		}
	}
}

void solve()
{
	for (int i = 1; i < n + 1; i++)
		dist[i] = INF;
	Dijk();
	
	int MAX = 0;
	for (int i = 1; i < n + 1; i++)
		if (MAX < dist[i] && dist[i] != INF) MAX = dist[i];

	cout << cnt << " " << MAX << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		memset(dist, 0, sizeof(dist));
		for (int i = 0; i < 10001; i++) v[i].clear();
		cnt = 0;

		input();
		solve();
	}
	return 0;
}
