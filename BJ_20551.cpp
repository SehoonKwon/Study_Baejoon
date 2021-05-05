#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define endl "\n"

int N, M;
vector<int> v;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void solve()
{
	sort(v.begin(), v.end());

	while (M--)
	{
		int x;
		cin >> x;

		auto idx = lower_bound(v.begin(), v.end(), x) - v.begin();
		if (idx >= v.size() || v[idx] != x)
			cout << -1 << endl;
		else
			cout << idx << endl;
			
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
