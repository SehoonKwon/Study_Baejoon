#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;

		vector<char> v1, v2;
		if (s.size() % 2)
		{
			for (int i = 0; i < s.size(); i++)
			{
				if (i % 2)
					v2.push_back(s[i]);
				else
					v1.push_back(s[i]);
			}

			for (int i = 0; i < s.size(); i++)
			{
				if (i % 2)
					v1.push_back(s[i]);
				else
					v2.push_back(s[i]);
			}
		}
		else
		{
			for (int i = 0; i < s.size(); i++)
			{
				if (i % 2)
					v2.push_back(s[i]);
				else
					v1.push_back(s[i]);
			}
		}

		for (int i = 0; i < v1.size(); i++)
			cout << v1[i];
		cout << "\n";

		for (int i = 0; i < v2.size(); i++)
			cout << v2[i];
		cout << "\n";
	}

	return 0;
}
