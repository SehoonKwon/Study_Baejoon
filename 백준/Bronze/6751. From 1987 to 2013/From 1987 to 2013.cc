#include <iostream>
#include <vector>
using namespace std;

int N;

int main()
{
	cin >> N;
	N++;
	while (1) {
		vector<int> v;
		int t = N;
		int flag = 0;
		while (t) {
			int r = t % 10;

			if (v.size() == 0) v.push_back(r);
			else {
				for (int i = 0; i < v.size(); i++) {
					if (r == v[i]) {
						flag = 1;
						break;
					}
				}
				v.push_back(r);
			}
			t /= 10;
		}
		if (flag) {
			N++;
			continue;
		}
		else break;
	}
	cout << N;
	return 0;
}