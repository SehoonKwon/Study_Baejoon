#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

#define endl "\n"

int N, M;

struct point
{
	int cnt;
	int len;
	string str;
};
vector<point> v;
map<string, int> mymap;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (s.size() >= M)
			mymap[s]++;
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.cnt > v.cnt) return true;
	else if (u.cnt == v.cnt)
	{
		if (u.len > v.len) return true;
		else if (u.len == v.len)
		{
			if (u.str < v.str) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

void solve()
{
	for (auto it : mymap)
	{
		string s = it.first;
		int cnt = it.second;
		int len = s.size();
		v.push_back({ cnt, len, s });
	}

	sort(v.begin(), v.end(), cmp);
	for (auto it : v)
		cout << it.str << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
