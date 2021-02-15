#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int N;
map<string, string> mymap;
vector<string> ans;

void solve()
{
	cin >> N;
	
	string name, act;
	while(N--)
	{
		cin >> name >> act;
		mymap[name] = act;
	}
	
	for(auto it : mymap)
	{
		if(it.second == "enter")
			ans.push_back(it.first);
	}
	
	sort(ans.rbegin(), ans.rend()); // 내림차순 정렬(reverse 의미)
	
	for(auto it : ans)
		cout << it << "\n";
}


int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	return 0;
}
