#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int k;
int visit[10];
char Array[10];
vector<int> v;
vector<string> ans;

void input()
{
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> Array[i];
}

int chk()
{
	for (int i = 1; i < v.size(); i++)
	{
		char c = Array[i - 1];
		if (c == '<')
		{
			if (v[i - 1] > v[i]) return 0;
		}
		else
		{
			if (v[i - 1] < v[i]) return 0;
		}
	}

	return 1;
}

void DFS(int cnt)
{
	if (cnt == k + 1)
	{
		int c = chk();
		if (c)
		{
			string s = "";
			for (int i = 0; i < v.size(); i++)
				s += (v[i] + '0');

			ans.push_back(s);
		}
		return;
	}

	for (int i = 0; i < 10; i++)
	{
		if (visit[i] == true) continue;

		visit[i] = true;
		v.push_back(i);
		DFS(cnt + 1);
		v.pop_back();
		visit[i] = false;
	}
}

void solve()
{
	DFS(0);
	sort(ans.begin(), ans.end());
	cout << ans[ans.size() - 1] << "\n" << ans[0];
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
