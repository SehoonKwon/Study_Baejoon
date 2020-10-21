#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int Array[27];

void solve()
{
	int T;
	cin >> T;
	while (T--)
	{
		memset(Array, 0, sizeof(Array));
		string s1, s2;
		cin >> s1 >> s2;

		if (s1.size() != s2.size())
			cout << "Impossible\n";
		else
		{
			for (int i = 0; i < s1.size(); i++)
			{
				Array[s1[i] - 'a']++;
				Array[s2[i] - 'a']--;
			}

			int flag = 0;
			for (int i = 0; i < 27; i++)
			{
				if (Array[i] != 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag)
				cout << "Impossible\n";
			else
				cout << "Possible\n";
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	return 0;
}
