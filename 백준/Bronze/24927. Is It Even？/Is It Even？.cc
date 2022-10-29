#include <iostream>
using namespace std;

int N, K;

void input()
{
	cin >> N >> K;
}

void solve()
{
	int cnt = 0;
	int X;
	for (int i = 0; i < N; i++) {
		cin >> X;
		while (X % 2 == 0) {
			cnt++;
			X /= 2;
		}
	}
	
	if (cnt >= K) cout << 1;
	else cout << 0;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}