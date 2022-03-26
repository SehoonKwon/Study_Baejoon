#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

struct point
{
	int num;
	int k, e, m, s;
	int flag;
};
vector<point> v;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num, k, e, m, s;
		cin >> num >> k >> e >> m >> s;
		v.push_back({ num, k, e, m, s, 0 });
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.k > v.k) return true;
	else if (u.k == v.k)
	{
		if (u.num < v.num) return true;
		else return false;
	}
	else return false;
}

bool cmp2(const point& u, const point& v)
{
	if (u.e > v.e) return true;
	else if (u.e == v.e)
	{
		if (u.num < v.num) return true;
		else return false;
	}
	else return false;
}

bool cmp3(const point& u, const point& v)
{
	if (u.m > v.m) return true;
	else if (u.m == v.m)
	{
		if (u.num < v.num) return true;
		else return false;
	}
	else return false;
}

bool cmp4(const point& u, const point& v)
{
	if (u.s > v.s) return true;
	else if (u.s == v.s)
	{
		if (u.num < v.num) return true;
		else return false;
	}
	else return false;
}

void solve()
{
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].flag == 0)
		{
			v[i].flag = 1;
			cout << v[i].num << " ";
			break;
		}
	}

	sort(v.begin(), v.end(), cmp2);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].flag == 0)
		{
			v[i].flag = 1;
			cout << v[i].num << " ";
			break;
		}
	}
	sort(v.begin(), v.end(), cmp3);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].flag == 0)
		{
			v[i].flag = 1;
			cout << v[i].num << " ";
			break;
		}
	}
	sort(v.begin(), v.end(), cmp4);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].flag == 0)
		{
			v[i].flag = 1;
			cout << v[i].num << " ";
			break;
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