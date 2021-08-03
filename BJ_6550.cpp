#include <iostream>
#include <string>
using namespace std;

string s, t;

void solve()
{
	if (s.size() > t.size())
	{
		cout << "No\n";
		return;
	}

	int sidx = 0;
	int len = s.size();
	char target = s[sidx];
	for (int i = 0; i < t.size(); i++)
	{
		if (target == t[i])
		{
			sidx++;
			if (sidx == len)
			{
				cout << "Yes\n";
				return;
			}
			else target = s[sidx];
		}
	}

	cout << "No\n";
}

int main()
{
	while (1)
	{
		cin >> s >> t;
		if (cin.eof()) return 0;
		solve();
	}

	return 0;
}
