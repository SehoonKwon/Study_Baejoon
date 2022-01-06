#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF (int)1e9

int N, M, K;
int Array[201][201];
int dist[201][201];
int home[201];
vector<int> ans;

void input()
{
	cin >> N >> M;
	int a, b, c;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		Array[a][b] = c;
	}

	cin >> K;
	int x;
	for (int i = 0; i < K; i++)
	{
		cin >> x;
		home[i] = x;
	}
}

void Floyd()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j) dist[i][j] = 0;
			else if (Array[i][j] > 0) dist[i][j] = Array[i][j];
			else dist[i][j] = INF;
		}
	}

	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

void solve()
{
	Floyd();

	int MAX = INF;
	for (int i = 1; i <= N; i++)
	{
		int tMAX = 0;
		for (int j = 0; j < K; j++)
		{
			int H = home[j];
			tMAX = max(dist[H][i] + dist[i][H], tMAX);
		}
		if (tMAX >= INF) continue;

		if (tMAX < MAX)
		{
			ans.clear();
			ans.push_back(i);
			MAX = tMAX;
		}
		else if (tMAX == MAX)
			ans.push_back(i);
	}

	for (auto it : ans)
		cout << it << " ";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
