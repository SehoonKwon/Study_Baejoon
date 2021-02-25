#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define endl "\n"

int N;
int Array[201][201];
int parent[201];
int visit[201];

struct point
{
	int s;
	int e;
	int dist;
};

vector<point> edge;

struct spot
{
	int flag;
	int val;
};

spot chkpoint[201][201];

void input()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			cin >> Array[i][j];
			if (j < i + 1)
			{
				edge.push_back({ i, j, Array[i][j] });
				if (Array[i][j] < 0)
					chkpoint[i][j].val = -Array[i][j];
			}
		}
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.dist < v.dist) return true;
	else return false;
}

int myFind(int x)
{
	if (x == parent[x]) return x;
	else return parent[x] = myFind(parent[x]);
}

void solve()
{
	for (int i = 1; i < N + 1; i++)
		parent[i] = i;

	sort(edge.begin(), edge.end(), cmp);
	vector<point> ans;

	int sum = 0, ecnt = 0;
	for (auto it : edge)
	{
		int aRoot = myFind(it.s);
		int bRoot = myFind(it.e);

		if (aRoot == bRoot) continue;

		parent[bRoot] = aRoot;
		if (it.dist < 0)
		{
			sum -= it.dist;
			chkpoint[it.s][it.e].flag = 1;
		}
		else
		{
			sum += it.dist;
			int small = min(it.s, it.e);
			int big = max(it.s, it.e);
			ans.push_back({ small, big });
		}

		if (visit[it.s] == false)
		{
			visit[it.s] = true;
			ecnt++;
		}

		if (visit[it.e] == false)
		{
			visit[it.e] = true;
			ecnt++;
		}

		if (ecnt == N) break;
	}

	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < N + 1; j++)
			if (chkpoint[i][j].flag == 0)
				sum += chkpoint[i][j].val;

	cout << sum << " " << ans.size() << endl;
	for (auto it : ans)
		cout << it.s << " " << it.e << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
