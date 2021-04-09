#include <iostream>
#include <cstring>
#include <algorithm>>
#include <vector>
using namespace std;

#define INF (int)1e9

int N, M, K;
int dist[101][101];

vector<int> v;

void init()
{
	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; j < 101; j++)
		{
			if (i == j)dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}
}

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		dist[a][b] = dist[b][a] = c;
	}
	
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void solve()
{
	//Floyd
	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	int MIN = INF;
	vector<int> ans;
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		for (auto it : v)
			sum += dist[it][i];

		if (sum <= MIN)
		{
			if(sum < MIN) ans.clear();
			MIN = sum;
			ans.push_back(i);
		}
	}

	sort(ans.begin(), ans.end());
	cout << ans[0] << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		v.clear();
		init();
		input();
		solve();
	}
	return 0;
}
