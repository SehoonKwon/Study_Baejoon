#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

struct point
{
	int num;
	int cnt;
	int time;
};
vector<point> v;

bool cmp(const point& u, const point& v)
{
	if (u.cnt < v.cnt) return true;
	else if (u.cnt == v.cnt)
	{
		if (u.time > v.time) return true;
		else return false;
	}
	else return false;
}

bool cmp2(const point& u, const point& v)
{
	if (u.num < v.num) return true;
	else return false;
}

void solve()
{
	int x;
	while (M--)
	{
		cin >> x;
		if (v.size() == 0)
			v.push_back({ x, 1, 0 });
		else
		{
			int flag = 0;
			for (int i = 0; i < v.size(); i++)
			{
				if (x == v[i].num)
				{
					v[i].cnt++;
					flag = 1;
					break;
				}
			}
			if (!flag)
			{
				if (v.size() == N)
				{
					sort(v.begin(), v.end(), cmp);
					v[0] = { x, 1, 0 };
				}
				else v.push_back({ x, 1, 0 });
			}
		}

		for (int i = 0; i < v.size(); i++)
			v[i].time++;
	}
	sort(v.begin(), v.end(), cmp2);
	for (auto it : v)
		cout << it.num << " ";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	solve();
	return 0;
}
