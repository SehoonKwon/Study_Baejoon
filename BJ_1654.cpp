#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ui unsigned int

//선을 사용하지 않는 경우도 있다. => 가장 짧은 것을 e로 잡으면 안된다.

int K, N;
vector<ui> v;

void input()
{
	cin >> K >> N;
	for (int i = 0; i < K; i++)
	{
		ui x;
		cin >> x;
		v.push_back(x);
	}
}

int calcul(ui x)
{
	int cnt = 0;
	for (auto it : v)
		cnt += (it / x);

	return cnt;
}

void solve()
{
	sort(v.begin(), v.end());

	int ans = -1;
	ui s = 1, e = v[K - 1];
	while (s <= e)
	{
		int mid = (s + e) / 2;
		int res = calcul(mid);
		if (res >= N)
		{
			ans = mid;
			s = mid + 1;
		}
		else
			e = mid - 1;
	}

	cout << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
