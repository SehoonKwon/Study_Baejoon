#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;

#define MAX 100001
#define endl "\n"

int N;
int Array[MAX];

void input()
{
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	vector<int> lis;
	lis.push_back(Array[0]);

	for (int i = 1; i < N; i++)
	{
		if (lis.back() < Array[i])
			lis.push_back(Array[i]);
		else
		{
			auto idx = lower_bound(lis.begin(), lis.end(), Array[i]) - lis.begin();
			lis[idx] = Array[i];
		}
	}

	cout << lis.size() << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (cin >> N)
	{
		memset(Array, 0, sizeof(Array));
		input();
		solve();
	}
	return 0;
}
