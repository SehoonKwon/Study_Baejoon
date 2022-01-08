#include <iostream>
#include <vector>
using namespace std;

int N, K, cnt;
vector<int> tv[51];
vector<int> sv;

void DFS(int idx)
{
	if (idx == K) return;
	if (tv[idx].size() == 0)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < tv[idx].size(); i++)
		DFS(tv[idx][i]);
}

void solve()
{
	int x;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x > -1)
			tv[x].push_back(i);
		else
			sv.push_back(i);
	}

	cin >> K;
	tv[K].clear();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < tv[i].size(); j++)
			if (tv[i][j] == K)
				tv[i].erase(tv[i].begin() + j);
	for (int i = 0; i < sv.size(); i++)
		DFS(sv[i]);
	cout << cnt;
}

int main()
{
	cin >> N;
	solve();
	return 0;
}
