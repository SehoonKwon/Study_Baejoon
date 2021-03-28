#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF (int)1e9
#define endl "\n"

int N, M;
int dist[101][101];

void input()
{
	cin >> N >> M;

	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; j < 101; j++)
		{
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}
	for (int i = 1; i < M + 1; i++)
	{
		int a, b;
		cin >> a >> b;
		dist[a][b] = dist[b][a] = 1;
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

	//치킨집 2개 세우기 완탐
	int MIN = INF;
	int chic1 = 0, chic2 = 0;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int sum = 0;
			if (i == j) continue;

			for (int k = 1; k <= N; k++)
				sum += min(dist[k][i], dist[k][j]);

			if (sum < MIN)
			{
				MIN = sum;
				chic1 = i;
				chic2 = j;
			}
		}

	}

	if (chic2 < chic1)
		swap(chic1, chic2);
	
	cout << chic1 << " " << chic2 << " " << MIN * 2;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
