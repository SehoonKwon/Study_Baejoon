#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int N, M;
int parent[200001];
int total;

struct point
{
	int s;
	int e;
	int val;
};

vector<point> v;

void input()
{
	cin >> M >> N;
	if (N == 0 && M == 0) exit(0);
	total = 0;
	v.clear();
	for (int i = 0; i < N; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({ a, b, c });
		total += c;
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
	for (int i = 0; i < M; i++)
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
	cout << total - sum << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1)
	{
		input();
		solve();
	}
	return 0;
}
