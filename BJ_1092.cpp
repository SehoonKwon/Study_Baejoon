#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int visit[10001];
int sidx[10001], ship_death[51];
vector<int> ship, item;

void input()
{
	cin >> N;
	ship.resize(N);
	for (int i = 0; i < N; i++)
		cin >> ship[i];

	cin >> M;
	item.resize(M);
	for (int i = 0; i < M; i++)
		cin >> item[i];
}


void solve()
{
	sort(ship.begin(), ship.end());
	sort(item.rbegin(), item.rend());

	int time = 0, cnt = 0, deathCnt = 0;
	while (cnt != M)
	{
		time++;
		for (int i = 0; i < N; i++)
		{
			if (ship_death[i] == true) continue;
			int nidx = sidx[i];

			int j = 0;
			for (j = nidx; j < M; j++)
			{
				if (ship[i] < item[j]) continue;
				else if (visit[j] == true) continue;
				else
				{
					sidx[i] = j + 1;
					visit[j] = true;
					cnt++;
					break;
				}
			}

			if (j >= M)
			{
				ship_death[i] = true;
				deathCnt++;
				if (deathCnt == N)
				{
					cout << -1;
					return;
				}
			}
		}
	}
	cout << time;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
