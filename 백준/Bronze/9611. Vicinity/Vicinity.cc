#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int N;

struct point
{
	int x;
	int y;
};

point Array[1001];

void input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> Array[i].x >> Array[i].y;
}

void solve()
{
	int T;
	cin >> T;
	while (T--) {
		int p, d, cnt = 0;
		cin >> p >> d;

		int x = Array[p].x;
		int y = Array[p].y;

		for (int i = 1; i <= N; i++) {
			if (i == p) continue;

			double dist = sqrt(pow(x - Array[i].x, 2) + pow(y - Array[i].y, 2));
			if (dist <= d) cnt++;
		}
		cout << cnt << "\n";
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