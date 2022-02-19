#include <iostream>
#include <algorithm>
using namespace std;

int M, N;
int Array[1000001];
int MAX;

void input()
{
	cin >> M >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
		if (MAX < Array[i]) MAX = Array[i];
	}
}

void solve()
{
	int l = 1, r = MAX;
	int ans = 0;
	while (l <= r)
	{
		int cnt = 0;
		int mid = (l + r) / 2;
		
		for (int i = 0; i < N; i++)
			cnt += Array[i] / mid;

		if (cnt >= M)
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}