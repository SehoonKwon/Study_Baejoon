#include <iostream>
#include <queue>
#include <functional>
using namespace std;

#define ll long long

int N, M;
priority_queue<ll, vector<ll>, greater<ll>> pq;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		ll x;
		cin >> x;
		pq.push(x);
	}
}

void solve()
{
	for (int i = 0; i < M; i++)
	{
		ll x = pq.top();
		pq.pop();

		ll y = pq.top();
		pq.pop();

		pq.push(x + y);
		pq.push(x + y);
	}

	ll sum = 0;
	while (!pq.empty())
	{
		sum += pq.top();
		pq.pop();
	}

	cout << sum;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
