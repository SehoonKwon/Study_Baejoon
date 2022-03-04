#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int N, M;
unordered_map<string, vector<string>> team;
unordered_map<string, string> memToTeam;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string tn, mem;
		int k;
		cin >> tn >> k;
		vector<string> tv;
		for (int j = 0; j < k; j++)
		{
			cin >> mem;
			tv.push_back(mem);
			memToTeam[mem] = tn;
		}
		sort(tv.begin(), tv.end());
		team[tn] = tv;
	}
}

void solve()
{
	string q;
	int k;
	for (int i = 0; i < M; i++)
	{
		cin >> q >> k;
		if (k == 0)
			for (auto it : team[q])
				cout << it << "\n";
		else
			cout << memToTeam[q] << "\n";
	}
}
int main()
{
	input();
	solve();
	return 0;
}