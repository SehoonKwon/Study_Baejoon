#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define endl "\n"

string s;
int len;
int alpha[27];
vector<string> ans;
vector<char> v;
unordered_map<string, int> mymap;

void DFS(int cnt)
{
	if (cnt == len)
	{
		string res = "";
		for (int i = 0; i < v.size(); i++)
			res += v[i];

		if (mymap[res] == 1) return;
		mymap[res] = 1;
		ans.push_back(res);
		return;
	}

	for (int i = 0; i < 27; i++)
	{
		if (alpha[i] == 0) continue;
		
		alpha[i]--;
		v.push_back(i+'a');
		DFS(cnt + 1);
		v.pop_back();
		alpha[i]++;
	}
}

void solve()
{
	len = s.size();

	for (int i = 0; i < len; i++)
		alpha[s[i] - 'a']++;

	DFS(0);
	sort(ans.begin(), ans.end());
	for (auto it : ans)
		cout << it << endl;
}

int main() 
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		s.clear();
		mymap.clear();
		ans.clear();
		v.clear();
		memset(alpha, 0, sizeof(alpha));

		cin >> s;
		solve();
	}

	return 0;
}
