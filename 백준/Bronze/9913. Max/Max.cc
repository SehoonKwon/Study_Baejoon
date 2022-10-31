#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int N;
unordered_map<int, int> mymap;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		mymap[x]++;
	}

	int MAX = 0;
	for (const auto& it : mymap)
		if (MAX < it.second) MAX = it.second;
	
	cout << MAX;

	return 0;
}