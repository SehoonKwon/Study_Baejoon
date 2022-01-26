#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s1, s2;
int DP[1001][1001];

void solve()
{
	s1 = '0' + s1;
	s2 = '0' + s2;

	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < s2.size(); j++)
		{
			if (i == 0 || j == 0) DP[i][j] = 0;
			else
			{
				if (s1[i] == s2[j]) DP[i][j] = DP[i - 1][j - 1] + 1;
				else DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
			}
		}
	}

	cout << DP[s1.size() - 1][s2.size() - 1];
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> s1 >> s2;
	solve();
	return 0;
}