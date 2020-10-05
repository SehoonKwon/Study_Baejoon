#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int N, M;
int parent[1001];
char Univ[1001];

struct point
{
	int s;
	int e;
	int val;
};

vector<point> v;

void input()
{
	cin >> N >> M;

	for (int i = 1; i < N + 1; i++)
		cin >> Univ[i];

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({ a, b, c });
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
	int line_cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (Univ[v[i].s] == Univ[v[i].e]) continue;

		int A = myFind(v[i].s);
		int B = myFind(v[i].e);
		if (A == B) continue;

		parent[B] = A;
		sum += v[i].val;
		line_cnt++;
	}

	if (line_cnt != N - 1) cout << -1;
	else cout << sum;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();

	return 0;
}
