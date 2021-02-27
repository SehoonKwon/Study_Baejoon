#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 이렇게 기본으로 풀면 736ms, PQ로 풀면 696ms => 차이없다.

int N, M;
vector<int> v;

void input()
{
	cin >> N >> M;

	int x;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> x;
		v.push_back(x);
	}
}

void solve()
{
	sort(v.begin(), v.end());
	for (auto it : v)
		cout << it << " ";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
