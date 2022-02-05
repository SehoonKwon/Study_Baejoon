#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int Array[1001];
vector<int> v;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	v.push_back(Array[0]);

	for (int i = 1; i < N; i++)
	{
		if (v.back() < Array[i])
			v.push_back(Array[i]);
		else
		{
			auto it = lower_bound(v.begin(), v.end(), Array[i]);
			int idx = it - v.begin();
			v[idx] = Array[i];
		}
	}

	cout << v.size();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

		input();
		solve();

	return 0;
}