#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;

		vector<string> sv;
		for (int i = 0; i < N; i++)
		{
			string s;
			cin >> s;
			sv.push_back(s);
		}

		int k = sv[0].size();

		vector<int> num;
		for (int i = 0; i < N; i++)
			num.push_back(i);

		for (int i = 0; i < k; i++)
		{
			vector<int> R, S, P;
			for (int j = 0; j < num.size(); j++)
			{
				int x = num[j];
				if (sv[x][i] == 'R')
					R.push_back(x);
				else if (sv[x][i] == 'S')
					S.push_back(x);
				else
					P.push_back(x);
			}

			if (R.size() > 0 && S.size() > 0 && P.size() > 0)
				continue;
			else if ((R.size() == 0 && S.size() == 0) || (R.size() == 0 && P.size() == 0) || (S.size() == 0 && P.size() == 0))
				continue;
			else
			{
				if (R.size() == 0)
					num = S;
				else if (S.size() == 0)
					num = P;
				else
					num = R;
			}

			if (num.size() == 1)
				break;
		}

		if (num.size() > 1) cout << 0 << "\n";
		else cout << num[0] + 1 << "\n";
	}
	return 0;
}
