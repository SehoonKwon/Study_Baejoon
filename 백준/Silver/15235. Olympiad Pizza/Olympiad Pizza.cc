#include <iostream>
#include <queue>
using namespace std;

int N;
int ans[1001];

struct point
{
	int idx;
	int cnt;
};

int main() {

	cin >> N;

	queue<point> q;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		q.push({ i, x });
	}

	int T = 1;
	while (!q.empty()) {
		int idx = q.front().idx;
		int cnt = q.front().cnt;
		q.pop();

		cnt--;
		if (cnt == 0)
			ans[idx] = T;
		else
			q.push({ idx, cnt });

		T++;
	}

	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";

	return 0;
}