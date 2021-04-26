#include <iostream>
#include <algorithm>
using namespace std;

#define INF (int)1e9

int N, M, R;
int dist[101][101];
int item[101];

void input()
{
	cin >> N >> M >> R; 

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}

	for (int i = 1; i <= N; i++)
		cin >> item[i];

	for (int i = 0; i < R; i++)
	{
		int a, b, d;
		cin >> a >> b >> d;
		dist[a][b] = dist[b][a] = d;
	}
}

void solve()
{
	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	int MAX = 0;
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		for (int j = 1; j <= N; j++)
			if (dist[i][j] <= M)  sum += item[j];

		MAX = max(MAX, sum);
	}

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
