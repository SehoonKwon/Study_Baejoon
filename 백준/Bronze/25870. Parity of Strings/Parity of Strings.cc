#include <iostream>
#include <string>
using namespace std;

int Array[27];

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		Array[s[i] - 'a']++;
	}

	bool odd = false;
	bool even = false;
	for (int i = 0; i < 27; i++) {
		if (!Array[i]) continue;

		if (Array[i] % 2 == 0)
			even = true;
		else
			odd = true;
	}

	if (odd == true && even == false) cout << 1;
	else if (odd == false && even == true) cout << 0;
	else cout << 2;

	return 0;
}