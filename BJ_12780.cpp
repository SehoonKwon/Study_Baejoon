#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	string target;
	cin >> target;

	int slen = s.size();
	int tlen = target.size();

	int cnt = 0;
	for (int i = 0; i < slen; i++)
	{
		if (s[i] == target[0] && i+tlen <= slen)
		{
			string str = s.substr(i, tlen);
			if (target == str)
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}
