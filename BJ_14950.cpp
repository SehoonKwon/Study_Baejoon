#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, t;
int parent[10001];

struct point
{
	int s;
	int e;
	int val;
	int dead;
};
vector<point> v;

void input()
{
	cin >> N >> M >> t;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({ a, b, c });
		v.push_back({ b, a, c });
	}
}

int myFind(int x)
{
	if (parent[x] == x) return x;
	else return parent[x] = myFind(parent[x]);
}

bool cmp(const point& u, const point& v)
{
	if (u.val < v.val) return true;
	else return false;
}

void solve()
{
	for (int i = 1; i <= N; i++)
		parent[i] = i;

	sort(v.begin(), v.end(), cmp);
	vector<point> tv;
	
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].s == 1)
		{
			tv.push_back(v[i]);
			v[i].dead = 1;
			break;
		}
	}
	
	for (auto it : v)
		if (it.dead == 0) tv.push_back(it);

	v = tv;

	int sum = 0, cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		int A = myFind(v[i].s);
		int B = myFind(v[i].e);

		if (A == B) continue;

		parent[B] = A;

		sum += v[i].val;
		cnt++;
		if (cnt == N - 1) break;
	}

	sum += t * ((cnt * (cnt - 1)) / 2);

	cout << sum;
}

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();

	return 0;
}
