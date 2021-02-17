#include <iostream>
using namespace std;

int N;
int Array[1001];

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	int MAX = 0, pre = Array[0];
	int cnt = 0;
	for (int i = 1; i < N; i++)
	{
		if (pre < Array[i])
			cnt += (Array[i] - pre);
		else
			cnt = 0;
		if (MAX < cnt) MAX = cnt;
		pre = Array[i];
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
