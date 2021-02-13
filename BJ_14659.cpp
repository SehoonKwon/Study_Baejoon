#include <iostream>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int cnt = 0, MAX = 0;
	int now;
	cin >> now;
	for (int i = 1; i < N; i++)
	{
		int x;
		cin >> x;
		if (now < x)
		{
			cnt = 0;
			now = x;
		}
		else
			cnt++;

		if (MAX < cnt) MAX = cnt;
	}

	cout << MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();
	return 0;
}
