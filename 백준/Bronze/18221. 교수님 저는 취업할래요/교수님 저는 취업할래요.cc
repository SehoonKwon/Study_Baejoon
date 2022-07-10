#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
int Array[1001][1001];

struct point {
	int x;
	int y;
};
point sk, pp;

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> Array[i][j];
			if (Array[i][j] == 2) {
				sk = { j, i };
			}
			else if (Array[i][j] == 5) {
				pp = { j, i };
			}
		}
	}
}

void solve() {
	if (pow(sk.y - pp.y, 2) + pow(sk.x - pp.x, 2) >= 25) {
		int cnt = 0;
		if (sk.x == pp.x) {
			int m = min(sk.y, pp.y);
			int M = max(sk.y, pp.y);

			for (int i = m + 1; i < M; i++)
				if (Array[i][sk.x] == 1) cnt++;
		}
		else if (sk.y == pp.y) {
			int m = min(sk.x, pp.x);
			int M = max(sk.x, pp.x);

			for (int i = m + 1; i < M; i++)
				if (Array[sk.y][i] == 1) cnt++;
		}
		else {
			for (int i = min(sk.y, pp.y); i <= max(sk.y, pp.y); i++)
				for (int j = min(sk.x, pp.x); j <= max(sk.x, pp.x); j++)
					if (Array[i][j] == 1) cnt++;

		}
		if (cnt >= 3) cout << 1;
		else cout << 0;
	}
	else cout << 0;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}