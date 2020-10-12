#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int Array[11][11];
int visit[11];
int MAX = 0;
vector<int> v;

void input()
{
	memset(Array, 0, sizeof(Array));
	memset(visit, 0, sizeof(visit));
	MAX = 0;
	v.clear();

	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 11; j++)
			cin >> Array[i][j];
}

void DFS(int idx, int cnt)
{
	if (cnt == 11)
	{
		int sum = 0;
		for (int i = 0; i < v.size(); i++)
			sum += Array[i][v[i]];
		if (MAX < sum) MAX = sum;
		return;
	}

	for (int i = 0; i < 11; i++)
	{
		if (visit[i] == true) continue;
		if (Array[idx][i] == 0) continue;
		visit[i] = true;
		v.push_back(i);
		DFS(idx + 1, cnt + 1);
		v.pop_back();
		visit[i] = false;
	}
}

void solve()
{
	DFS(0, 0);
	cout << MAX << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		input();
		solve();
	}
	return 0;
}
