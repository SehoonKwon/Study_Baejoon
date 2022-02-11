#include <iostream>
#include <string>
using namespace std;

string s;

void solve()
{
	string ans = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '.') ans += ".";
		else
		{
			if (i + 3 < s.size() && s[i + 1] == s[i + 2] && s[i + 2] == s[i + 3] && s[i + 3] == 'X')
			{
				ans += "AAAA";
				i += 3;
			}
			else if (i + 1 < s.size() && s[i + 1] == 'X')
			{
				ans += "BB";
				i++;
			}
			else
			{
				cout << -1;
				return;
			}
		}
	}

	cout << ans;
}

int main()
{
	cin >> s;
	solve();
	return 0;
}