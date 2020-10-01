#include <iostream>
#include <algorithm>
using namespace std;

int N;
int Array[100001];

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	int MAX = 1;
	int ucnt = 1, dcnt = 1;
	for (int i = 0; i < N - 1; i++)
	{
		if (Array[i] <= Array[i + 1])
		{
			ucnt++;
			if (Array[i] < Array[i + 1])
				dcnt = 1;
		}
		
		if (Array[i] >= Array[i + 1])
		{
			dcnt++;
			if (Array[i] > Array[i + 1])
				ucnt = 1;
		}

		int temp = max(ucnt, dcnt);
		MAX = max(MAX, temp);
	}

	cout << MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}