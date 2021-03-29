#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
vector<int> Array;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		Array.push_back(x);
	}
}

void solve()
{
	//LDS = 배열 순서 뒤집어서 LIS
	reverse(Array.begin(), Array.end());
	vector<int> LDS;
	LDS.push_back(Array[0]);

	for (int i = 1; i < N; i++)
	{
		if (LDS.back() < Array[i])
			LDS.push_back(Array[i]);
		else
		{
			int idx = lower_bound(LDS.begin(), LDS.end(), Array[i]) - LDS.begin();
			LDS[idx] = Array[i];
		}
	}

	cout << LDS.size();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
