#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mymap;

int main() {

	char c;
	int N;
	cin >> c >> N;
	mymap[c]++;

	char lastOne = c;
	for (int i = 0; i < N; i++) {
		char x, y;
		cin >> x >> y;
		if (y != lastOne) continue;
		lastOne = x;
		mymap[x]++;
	}

	int cnt = mymap.size();
	cout << lastOne << endl << cnt;

	return 0;
}