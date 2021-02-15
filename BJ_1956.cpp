#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define INF (int)1e9

int V, E;
int Dist[401][401];
int visit[401];
int ans = INF;

void input()
{
	cin >> V >> E;

	for (int i = 1; i < V + 1; i++)
		for (int j = 1; j < V + 1; j++)
			if (i != j) Dist[i][j] = INF;

	for (int i = 0; i < E; i++)
	{
		int s, e, d;
		cin >> s >> e >> d;
		Dist[s][e] = d;
	}
}

void DFS(int node, int dist, int start)
{
	visit[node] = true;
	for (int i = 1; i < V + 1; i++)
	{
		if (Dist[node][i] != 0 && Dist[node][i] != INF)
		{
			if (i == start)
			{
				ans = min(ans, dist + Dist[node][i]);
				return;
			}
			else if(visit[i] == false)
				DFS(i, dist + Dist[node][i], start);
		}
	}
}

void solve()
{
	for (int k = 1; k < V + 1; k++)
	{
		for (int i = 1; i < V + 1; i++)
		{
			for (int j = 1; j < V + 1; j++)
			{
				Dist[i][j] = min(Dist[i][j], Dist[i][k] + Dist[k][j]);
			}
		}
	}

	for (int i = 1; i < V + 1; i++)
	{
		memset(visit, 0, sizeof(visit));
		DFS(i, 0, i);
	}
	if (ans == INF)
		cout << -1;
	else
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
