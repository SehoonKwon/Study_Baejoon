#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int N;
int parent[1001];

struct point
{
	int s;
	int e;
	int val;
};

vector<point> v;

void input()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			int x;
			cin >> x;
			if (i == j) continue;
			v.push_back({ i, j, x });
		}
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.val < v.val) return true;
	else return false;
}

int myFind(int x)
{
	if (x == parent[x])	return x;
	else return parent[x] = myFind(parent[x]);
}

void solve()
{
	sort(v.begin(), v.end(), cmp);
	for (int i = 1; i < N + 1; i++)
		parent[i] = i;

	ll sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		int A = myFind(v[i].s);
		int B = myFind(v[i].e);
		
		if (A == B) continue;
		parent[B] = A;
		sum += v[i].val;
	}
	cout << sum;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();

	return 0;
}
