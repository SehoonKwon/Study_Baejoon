#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (s == "all")
		{
			v.clear();
			for (int j = 1; j < 20 + 1; j++)
				v.push_back(j);
		}

		else if (s == "empty")
			v.clear();

		else if (s == "add")
		{
			int x;
			cin >> x;

			int flag = 0;
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] == x)
				{
					flag = 1;
					break;
				}
			}
			if (!flag) v.push_back(x);
		}

		else if (s == "remove")
		{
			int x;
			cin >> x;

			int flag = 0;
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] == x)
				{
					v.erase(v.begin() + j);
					break;
				}
			}
		}

		else if (s == "check")
		{
			int x;
			cin >> x;

			int flag = 0;
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] == x)
				{
					flag = 1;
					break;
				}
			}
			if (flag) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

		else if (s == "toggle")
		{
			int x;
			cin >> x;

			int flag = 0;
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] == x)
				{
					flag = 1;
					v.erase(v.begin() + j);
					break;
				}
			}
			
			if (!flag) v.push_back(x);
		}
	}

	return 0;
}
