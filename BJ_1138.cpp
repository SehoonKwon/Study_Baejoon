#include <iostream>
#include <vector>
using namespace std;

int N;
int visit[11];
int Array[11];
vector<int> v;

void input()
{
	cin >> N;
	for (int i = 1; i < N+1; i++)
		cin >> Array[i];
}

void DFS(int cnt)
{
	if (cnt == N)
	{
		int flag = 0;
		for (int i = 0; i < N; i++)
		{
			int cnt = 0;
			for (int j = 0; j < i; j++)
				if (v[j] > v[i]) cnt++;

			if (Array[v[i]] != cnt)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			for (int i = 0; i < N; i++)
				cout << v[i] << " ";
			exit(0);
		}

		return;
	}

	for (int i = 1; i < N + 1; i++)
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
}

int main()
{
	input();
	solve();
	return 0;
}
