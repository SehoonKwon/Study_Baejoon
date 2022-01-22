#include <iostream>
#include <algorithm>
using namespace std;

#define endl "\n"
#define ll long long int

int N, K;
ll Array[100001];
ll MAX;

void input()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	int s = 0, e = K - 1;
	ll sum = 0;
	for (int i = s; i <= e; i++)
		if (i < 100001) sum += Array[i];

	MAX = sum;
	while (1)
	{
		if (e >= N) break;
		sum -= Array[s];
		s++;
		e++;
		sum += Array[e];
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