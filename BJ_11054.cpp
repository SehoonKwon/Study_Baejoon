#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int Array[1001];
int sizelis[1001];
int sizelds[1001];

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{

	vector<int> LIS;
	LIS.push_back(Array[0]);
	sizelis[0] = 1;
	for (int i = 1; i < N; i++)
	{
		if (LIS.back() < Array[i])
			LIS.push_back(Array[i]);
		else
		{
			auto idx = lower_bound(LIS.begin(), LIS.end(), Array[i]) - LIS.begin();
			LIS[idx] = Array[i];
		}
		sizelis[i] = LIS.size();
	}

	vector<int> LDS;
	LDS.push_back(Array[N - 1]);
	sizelds[N - 1] = 1;
	for (int i = N - 2; i > -1; i--)
	{
		if (LDS.back() < Array[i])
			LDS.push_back(Array[i]);
		else
		{
			auto idx = lower_bound(LDS.begin(), LDS.end(), Array[i]) - LDS.begin();
			LDS[idx] = Array[i];
		}

		sizelds[i] = LDS.size();
	}

	int MAX = 0;
	for (int i = 0; i < N; i++)
		MAX = max(MAX, sizelis[i] + sizelds[i] - 1);

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
