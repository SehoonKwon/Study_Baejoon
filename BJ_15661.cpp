#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int N;
int MIN = (int)1e9;
int visit[21], tvisit[21];
int Array[21][21];
vector<int> t1, t2;

void input()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < N + 1; j++)
			cin >> Array[i][j];
}

int calcul()
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < t1.size(); i++)
		for (int j = 0; j < t1.size(); j++)
			sum1 += Array[t1[i]][t1[j]];

	for (int i = 0; i < t2.size(); i++)
		for (int j = 0; j < t2.size(); j++)
			sum2 += Array[t2[i]][t2[j]];

	return abs(sum1 - sum2);
}

void DFS(int idx)
{
	if (t1.size() >= 1)
	{
		memset(tvisit, 0, sizeof(tvisit));
		t2.clear();
		for (auto it : t1)
			tvisit[it] = 1;

		for (int i = 1; i < N + 1; i++)
			if (tvisit[i] == 0)
				t2.push_back(i);

		if(t2.size() >= 1)
			MIN = min(MIN, calcul());
	}
	for (int i = idx; i < N + 1; i++)
	{
		if (visit[i] == true) continue;
		visit[i] = true;
		t1.push_back(i);
		DFS(i + 1);
		t1.pop_back();
		visit[i] = false;
	}
}

void solve()
{
	DFS(1);
	cout << MIN;
}

int main()
{
	input();
	solve();
	return 0;
}
