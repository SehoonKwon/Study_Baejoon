#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 3;
	while (N--) {
		string s;
		cin >> s;

		int cnt = 1, res = 0;
		char c = s[0];
		for (int i = 1; i < s.size(); i++) {
			if (c == s[i]) cnt++;
			else {
				res = res < cnt ? cnt : res;
				cnt = 1;
				c = s[i];
			}
		}
		res = res < cnt ? cnt : res;
		cout << res << "\n";
	}
	return 0;
}