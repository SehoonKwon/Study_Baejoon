#include <iostream>
#include <queue>
using namespace std;

int N, T;
queue<int> q;

int main()
{
	cin >> N >> T;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	int cnt = 0;
	while (T > 0) {
		if (q.empty()) break;
		int x = q.front();
		if (T - x >= 0) {
			q.pop();
			cnt++;
			T -= x;
		}
		else break;
	}
	
	cout << cnt;

	return 0;
}