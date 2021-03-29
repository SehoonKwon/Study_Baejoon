#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define INF (int)1e9
#define endl "\n"

int N, M;
int dist[101][101];

void input()
{
	cin >> N >> M;
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		dist[a][b] = 1;
	}
}

void solve()
{
	//Floyd
	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		}
	}

	for (int i = 1; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= N; j++)
		{
			if (i == j) continue;
			if (dist[i][j] == INF && dist[j][i] == INF) cnt++;
		}

		cout << cnt << endl;
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
