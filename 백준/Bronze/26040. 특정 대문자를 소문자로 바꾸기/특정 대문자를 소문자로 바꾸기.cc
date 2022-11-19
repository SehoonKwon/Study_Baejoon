#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	char c;
	while (1) {
		cin >> c;
		if (cin.eof()) break;
		for (int i = 0; i < s.size(); i++)
			if (c == s[i])
				s[i] = tolower(s[i]);
	}

	cout << s;

	return 0;
}