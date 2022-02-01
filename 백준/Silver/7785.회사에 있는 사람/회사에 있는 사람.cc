#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int N;
unordered_map<string, int> mymap;

void solve()
{
	string name, str;
	for (int i = 0; i < N; i++)
	{
		cin >> name >> str;
		auto it = mymap.find(str);
		
		if (str == "enter")
			mymap[name]++;
		else
			mymap[name]--;
	}

	vector<string> sv;
	for (auto it : mymap)
		if (it.second > 0) sv.push_back(it.first);

	sort(sv.rbegin(), sv.rend());

	for (auto it : sv)
		cout << it << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	solve();
	return 0;
}