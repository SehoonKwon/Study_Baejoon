#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int N, T;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T;
	while (T--) {
		cin >> N;

		unordered_map<string, int> mymap;
		string s;
		for (int i = 0; i < N; i++) {
			cin >> s;
			mymap[s]++;
		}

		cout << mymap.size() << "\n";
	}

	return 0;
}