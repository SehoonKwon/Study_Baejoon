#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int N;
int Array[1000001], ans[1000001];

void input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> Array[i];
}

void solve()
{
	memset(ans, -1, sizeof(ans));
	stack<int> stk;

	int stkidx = 1;
	
	for (int i = 1; i <= N; i++)
	{
		if (i == 1) stk.push(Array[i]);
		else
		{
			if (Array[i] != stk.top())
			{
				stk.push(Array[i]);
				while (stkidx < i)
				{
					ans[stkidx] = i;
					stkidx++;
				}
			}
		}
	}

	for (int i = 1; i <= N; i++)
		cout << ans[i] << " ";
	
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}