#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
int parent[101];

struct point
{
	double x;
	double y;
};

point Array[101];

struct p2p
{
	int s;
	int e;
	double val;
};

vector<p2p> v;

void input()
{
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> Array[i].x >> Array[i].y;
}

bool cmp(const p2p& u, const p2p& v)
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
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			double dx = Array[i].x - Array[j].x;
			double dy = Array[i].y - Array[j].y;
			double dist = sqrt(dx * dx + dy * dy);
			v.push_back({ i, j, dist });
		}
	}

	sort(v.begin(), v.end(), cmp);
	for (int i = 1; i < N + 1; i++)
		parent[i] = i;

	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{

		int A = myFind(v[i].s);
		int B = myFind(v[i].e);
		if (A == B) continue;

		parent[B] = A;
		sum += v[i].val;
	}

	cout << fixed;
	cout.precision(2);
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
