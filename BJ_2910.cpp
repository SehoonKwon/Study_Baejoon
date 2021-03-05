#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, C;

struct point
{
	int val;
	int cnt;
	int order;
};

vector<point> v;

void input()
{
	cin >> N >> C;
	
	int x;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		int flag = 0;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j].val == x)
			{
				v[j].cnt++;
				flag = 1;
				break;
			}
		}
		if (!flag)
			v.push_back({ x, 1, i });
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.cnt > v.cnt) return true;
	else if (u.cnt == v.cnt)
	{
		if (u.order < v.order) return true;
		else return false;
	}
	else return false;
}

void solve()
{
	sort(v.begin(), v.end(), cmp);
	for (auto it : v)
	{
		for (int i = 0; i < it.cnt; i++)
			cout << it.val << " ";
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
