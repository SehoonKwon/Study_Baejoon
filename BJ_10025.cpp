#include <iostream>
#include <algorithm>
using namespace std;

#define endl "\n"

int N, K;
int Array[1000001];
int lastIdx, MAX;

void input()
{
	cin >> N >> K;
	
	int g, x;
	for (int i = 0; i < N; i++)
	{
		cin >> g >> x;
		Array[x] = g;
		lastIdx = max(lastIdx, x);
	}
}

void solve()
{
	int s = 0, e = 2 * K;
	int sum = 0;
	for (int i = s; i <= e; i++)
		if(i < 1000001) sum += Array[i];

	MAX = sum;
	while (1)
	{
		if (e > 2 * K + lastIdx || e > 1000000) break;
		sum -= Array[s];
		s++;
		e++;
		sum += Array[e];
		MAX = max(MAX, sum);
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
