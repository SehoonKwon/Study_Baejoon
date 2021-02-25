#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define endl "\n"

int N, M, K;
int parent[10001];

struct point
{
	int s;
	int e;
	int val;
	int flag;
};
vector<point> edge;

void input()
{
	cin >> N >> M >> K;
	for (int i = 1; i < M + 1; i++)
	{
		int s, e;
		cin >> s >> e;
		edge.push_back({ s, e, i });
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.val < v.val) return true;
	else return false;
}

int myFind(int x)
{
	if (x == parent[x]) return x;
	else return parent[x] = myFind(parent[x]);
}

void solve()
{
	sort(edge.begin(), edge.end(), cmp);


	while (K--)
	{
		for (int i = 1; i < N + 1; i++)
			parent[i] = i;

		//여기서부터
		int sum = 0, ecnt = 0;
		int MIN = 987654321, idx = -1;
		for (int i = 0; i < edge.size(); i++)
		{
			if (edge[i].flag) continue;
			int s = edge[i].s;
			int e = edge[i].e;
			int val = edge[i].val;

			int A = myFind(s);
			int B = myFind(e);
			if (A == B) continue;

			parent[B] = A;
			sum += val;
			ecnt++;
			if (val < MIN)
			{
				MIN = val;
				idx = i;
			}

			if (ecnt == N - 1) break;
		}
		//여기까지 기본 MST by 크루스칼
		if (ecnt != N - 1) cout << 0 << " ";
		else
		{
			cout << sum << " ";
			edge[idx].flag = 1;
		}
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
