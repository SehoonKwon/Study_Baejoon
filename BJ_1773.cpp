#include <iostream>
using namespace std;

int N, C;
int chk[2000001];
int Array[101];

void input()
{
	cin >> N >> C;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = Array[i]; j < C + 1; j += Array[i])
			chk[j] = true;
	}

	int ans = 0;
	for (int i = 0; i < C + 1; i++)
		if (chk[i] == true) ans++;
	
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
