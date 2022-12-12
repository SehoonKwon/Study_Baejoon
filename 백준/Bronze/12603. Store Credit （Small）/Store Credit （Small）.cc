#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {

	int T;
	cin >> T;
	for (int num = 1; num <= T; num++) {
		v.clear();
		int P;
		cin >> P;

		int N;
		cin >> N;
		for (int i = 1; i <= N; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}

		for (int i = 0; i < v.size(); i++) {
			int R = P - v[i];
			int flag = 0;
			for (int j = 0; j < v.size(); j++) {
				if (i == j) continue;
				if (v[j] == R) {
					printf("Case #%d: %d %d\n", num, i + 1, j + 1);
					flag = 1;
					break;
				}
			}
			if (flag) break;
		}
	}

	return 0;
}