#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int N, M;
int visit[2001];
vector<int> v[2001];

void input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
}

void DFS(int idx, int cnt)
{
	if (cnt == 4)
	{
		cout << 1;
		exit(0);
	}

	for (int i = 0; i < v[idx].size(); i++)
	{
		int next = v[idx][i];
		if (visit[next] == false)
		{
			visit[next] = true;
			DFS(v[idx][i], cnt + 1);
			visit[next] = false; //백트래킹이 필요함. 해당 노드에서 방문을 다 했는데 5가 안됐을 때, 이미 방문하면서 visit체크 돼있으므로
		}
	}
}

void solve()
{
	for (int i = 0; i < N; i++)
	{
		visit[i] = true;
		DFS(i, 0);
		visit[i] = false;
	}

	cout << 0;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
