#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int Array[31][31];
int visit[31];
int MAX;

void DFS(int idx, int cnt)
{
	if (cnt == 3)
	{
		int sum = 0;
		for (int i = 1; i <= N; i++)
		{
			int tMAX = 0;
			for (int j = 1; j <= M; j++)
			{
				if (visit[j] == true)
					tMAX = max(tMAX, Array[i][j]);
			}
			sum += tMAX;
		}
		MAX = max(MAX, sum);
		return;
	}

	for (int i = idx; i <= M; i++)
	{
		if (visit[i] == true) continue;
		visit[i] = true;
		DFS(i + 1, cnt + 1);
		visit[i] = false;
	}
}

int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> Array[i][j];

	DFS(1, 0);
	cout << MAX;
	return 0;
}