#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define ll long long

int N;
ll Array[250001], DP[250001];

void input()
{
	memset(DP, 0, sizeof(DP));
	memset(Array, 0, sizeof(Array));
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	ll MAX  = Array[0];
	ll sum = MAX;

	for (int i = 1; i < N; i++)
	{
		sum += Array[i];
		if (sum < Array[i])
			sum = Array[i];
		MAX = max(MAX, sum);
	}
	cout << MAX << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1)
	{
		cin >> N;
		if (N == 0) break;
		input();
		solve();
	}
	return 0;
}