#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int N;
vector<int> v;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void solve()
{
	if (N == 0)
		cout << 0;
	else
	{
		double t = N * 0.15;
		int cnt = round(t);

		sort(v.begin(), v.end());

		int sum = 0;
		for (int i = cnt; i < v.size() - cnt; i++)
			sum += v[i];

		double avg = (double)sum / (N - (cnt * 2));
		int ans = round(avg);
		cout << ans;
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
