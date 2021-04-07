#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define endl "\n"

int N, Q;
ll Array[100001];
ll Tree[100001];

void Update(int v, ll d)
{
	while (v <= N)
	{
		Tree[v] += d;
		v += (v&-v);
	}
}

void input()
{
	cin >> N >> Q;
	for (int i = 1; i <= N; i++)
	{
		cin >> Array[i];
		Update(i, Array[i]);
	}
}

ll Sum(int v)
{
	ll res = 0;
	while (v > 0)
	{
		res += Tree[v];
		v -= (v&-v);
	}

	return res;
}

void solve()
{
	while (Q--)
	{
		int x, y, a;
		ll b;
		cin >> x >> y >> a >> b;

		if (x > y)
			swap(x, y);

		//query
		cout << Sum(y) - Sum(x - 1) << endl;

		//update
		ll d = b - Array[a];
		Array[a] = b; //바꿔주는 이유? 그 다음번에 a번의 수를 또 바꿀 때 58번째 줄에서 기존 값이 아닌 변경된 값의 차이를 구해야 하므로
		Update(a, d);
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
