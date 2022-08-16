#include <iostream>
#include <vector>
using namespace std;

int Array[27];
vector<char> v;

int main() {
	char c;
	while (1) {
		cin >> c;
		if (cin.eof()) break;
		if (c == ' ') continue;
		Array[c - 'a']++;
	}

	int MAX = 0;
	for (int i = 0; i < 27; i++) {
		if (MAX < Array[i]) {
			v.clear();
			MAX = Array[i];
			v.push_back(i + 'a');
		}
		else if (MAX == Array[i])
			v.push_back(i + 'a');
	}

	for (auto& it : v)
		cout << it;

	return 0;
}