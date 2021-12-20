#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N;
string str, fstr, bstr;

int main() {

	cin >> N;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '*')
		{
			fstr = str.substr(0, i);
			bstr = str.substr(i + 1, (int)str.size() - i);
		}
	}

	while (N--)
	{
		int flag = 0;
		string s;
		cin >> s;

		if (s.size() < (fstr.size() + bstr.size()))
			cout << "NE\n";
		else
		{
			for (int i = 0; i < fstr.size(); i++)
				if (s[i] != fstr[i])
				{
					flag = 1;
					break;
				}

			int bidx = 0;
			for (int i = s.size() - bstr.size(); i < s.size(); i++, bidx++)
				if (s[i] != bstr[bidx])
				{
					flag = 1;
					break;
				}

			if (flag) cout << "NE\n";
			else cout << "DA\n";
		}
	}

	return 0;
}
