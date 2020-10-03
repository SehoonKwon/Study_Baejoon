#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define INF (int)1e9

int N, M, X;
int dist[1001][1001];

struct point
{
	int dest;
	int val;
};

vector<point> v[1001];

void input()
{
	cin >> N >> M >> X;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b, c });
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

void Dijk(int start)
{
	priority_queue<point, vector<point>, cmp> pq;
	pq.push({ start, 0 });

	while (!pq.empty())
	{
		int Node = pq.top().dest;
		int val = pq.top().val;
		pq.pop();

		if (dist[start][Node] != INF) continue;
		dist[start][Node] = val;
		if (start != X && Node == X) return;

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
		for (int j = 1; j < N + 1; j++)
			dist[i][j] = INF;

	for (int i = 1; i < N + 1; i++)
		Dijk(i);

	int MAX = 0;
	for (int i = 1; i < N + 1; i++)
		if (MAX < dist[i][X] + dist[X][i]) MAX = dist[i][X] + dist[X][i];

	cout << MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
