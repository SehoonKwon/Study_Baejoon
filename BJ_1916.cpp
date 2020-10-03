#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define INF (int)1e9

int N, M, A, B;
int dist[1001];

struct point
{
	int dest;
	int val;
};

vector<point> v[1001];

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b, c });
	}

	cin >> A >> B;
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
	pq.push({ A, 0 });

	while (!pq.empty())
	{
		int Node = pq.top().dest;
		int val = pq.top().val;
		pq.pop();

		if (dist[Node] != INF) continue;
		dist[Node] = val;

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
	for (int i = 1; i < N + 1; i++)
			dist[i] = INF;
	Dijk();
	cout << dist[B];
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
