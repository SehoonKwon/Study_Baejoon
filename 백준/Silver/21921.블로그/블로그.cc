#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define endl "\n"
#define ll long long int

//21921 

int N, K;
ll Array[250001];
ll MAX;
int cnt = 1;

void input()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	int s = 0, e = K - 1;
	ll sum = 0;
	for (int i = s; i <= e; i++)
		if (i < 250001) sum += Array[i];

	MAX = sum;
	while (1)
	{
		if (e >= N) break;
		sum -= Array[s];
		s++;
		e++;
		sum += Array[e];
		if (MAX < sum)
		{
			MAX = sum;
			cnt = 1;
		}
		else if (MAX == sum)
			cnt++;
	}

	if (MAX == 0) cout << "SAD";
	else
	{
		cout << MAX << endl;
		cout << cnt;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}