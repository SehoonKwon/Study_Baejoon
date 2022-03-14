#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int Array[100001];

void input()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		cin >> Array[i];
}

void solve()
{
	int cnt = 0;
	for (int last = N; last > 1; last--)
	{
		for (int i = 1; i < last; i++)
		{
			if (Array[i] > Array[i + 1])
			{
				swap(Array[i], Array[i + 1]);
				cnt++;
				if (cnt == K)
				{
					for(int k=1; k<=N; k++)
						cout<<Array[k]<<" ";
					return;
				}
			}
		}
	}

	cout << -1;
}

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}