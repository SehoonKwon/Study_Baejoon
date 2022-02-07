#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
vector<int> v[2];

void input()
{
	cin >> N;
	v[0].resize(N);
	v[1].resize(N);
	for (int k = 0; k < 2; k++)
		for (int i = 0; i < N; i++)
			cin >> v[k][i];
}

void solve()
{
	sort(v[0].begin(), v[0].end());
	sort(v[1].begin(), v[1].end());

	int jidx = 0, score = 0;
	for (int i = 0; i < N; i++)
	{
		if (v[0][jidx] < v[1][i])
		{
			jidx++;
			score++;
		}
	}

	if (score >= (N + 1) / 2) cout << "YES";
	else cout << "NO";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();

	return 0;
}