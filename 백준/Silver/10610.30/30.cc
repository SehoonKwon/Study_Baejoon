#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string s;
vector<int> v;

void solve()
{
	int sum = 0;
	int flag = 0;
	for (int i = 0; i < s.size(); i++)
	{
		sum += s[i] - '0';
		v.push_back(s[i] - '0');
		if (s[i] - '0' == 0) flag = 1;
	}

	if (flag == 1 && sum % 3 == 0)
	{
		sort(v.rbegin(), v.rend());
		for (auto it : v)
			cout << it;
	}
	else
	{
		cout << -1;
		return;
	}
}

int main()
{
	cin >> s;
	solve();
	return 0;
}