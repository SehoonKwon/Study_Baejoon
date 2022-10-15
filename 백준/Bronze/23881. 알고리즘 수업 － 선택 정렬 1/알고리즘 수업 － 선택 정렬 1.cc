#include <iostream>
using namespace std;

int N, K;
int Array[10001];

void input()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		cin >> Array[i];
}

void solve()
{
	int cnt = 0;
	for (int i = N; i >= 2; i--) {
		int MAX = -1, idx = -1;
		for (int j = 1; j <= i; j++) {
			if (MAX < Array[j]) {
				MAX = Array[j];
				idx = j;
			}
		}
		if (idx != i && idx != -1) {
			cnt++;
			if (cnt == K) {
				cout << Array[i] << " " << Array[idx];
				return;
			}
			swap(Array[i], Array[idx]);
		}
	}
	cout << -1;
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();

	return 0;
}