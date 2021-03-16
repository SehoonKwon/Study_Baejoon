#include <iostream>
#include <algorithm>
using namespace std;

#define endl "\n"
#define INF (int)1e9

int N, K;
int History[401][401];

void input()
{
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j) History[i][j] = 0;
			else History[i][j] = INF;
		}
	}

	for (int i = 0; i < K; i++)
	{
		int pre, post;
		cin >> pre >> post;
		History[pre][post] = 1;
	}
}

void solve()
{
	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				History[i][j] = min(History[i][j], History[i][k] + History[k][j]);

	int s, A, B;
	cin >> s;

	while (s--)
	{
		cin >> A >> B;
		if (History[A][B] < History[B][A]) cout << -1 << endl;
		else if (History[A][B] > History[B][A]) cout << 1 << endl;
		else cout << 0 << endl;
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
