#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
int Indegree[1001];
vector<int> v[1001];
queue<int> q;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;

		int pre = 0;
		for (int j = 0; j < num; j++)
		{
			int x;
			cin >> x;
			if (pre == 0)
				pre = x;
			else
			{
				Indegree[x]++;
				v[pre].push_back(x);
				pre = x;
			}
		}
	}
}

void Topol()
{
	vector<int> order;
	while (!q.empty())
	{
		int X = q.front();
		order.push_back(X);
		q.pop();

		for (int i = 0; i < v[X].size(); i++)
		{
			int nx = v[X][i];
			Indegree[nx]--;
			if (Indegree[nx] == 0)
				q.push(nx);
		}
	}

	if (order.size() == N)
	{
		for (int i = 0; i < order.size(); i++)
			cout << order[i] << "\n";
	}
	else
		cout << 0;
}

void solve()
{
	for (int i = 1; i < N + 1; i++)
		if (Indegree[i] == 0) q.push(i);
	
	if (q.size() == 0)
		cout << 0;
	else
		Topol();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
