#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define endl "\n"

string s;

void input()
{
	getline(cin, s);
}

void solve()
{
	string ans = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '<')
		{
			string temp = "<";
			for (int j = i + 1; j < s.size(); j++)
			{
				if (s[j] == '>')
				{
					temp += '>';
					ans += temp;
					i = j;
					break;
				}
				else
					temp += s[j];
			}
		}
		else if (s[i] == ' ')
			ans += s[i];
		else
		{
			string temp = "";
			for (int j = i; j < s.size(); j++)
			{
				if (j == s.size() - 1)
				{
					temp += s[j];
					reverse(temp.begin(), temp.end());
					ans += temp;
					i = j;
					break;
				}
				else if (s[j] == '<' || s[j] == ' ')
				{
					reverse(temp.begin(), temp.end());
					ans += temp;
					i = j - 1;
					break;
				}
				else
					temp += s[j];
			}
		}
	}

	cout << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
