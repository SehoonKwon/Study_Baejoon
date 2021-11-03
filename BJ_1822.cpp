#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<int, int> mymap;

int main() {
	
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, x;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		mymap[x]++;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> x;
		int c = mymap.count(x);
		if (c > 0)
			mymap[x] = 0;
	}

	vector<int> v;
	for (auto it : mymap)
		if (it.second > 0)
			v.push_back(it.first);

	if (v.size() == 0) cout << 0;
	else
	{
		sort(v.begin(), v.end());
		cout << v.size() << "\n";
		for (auto it : v)
			cout << it << " ";
	}
	return 0;
}
