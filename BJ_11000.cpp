#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int N;

struct point
{
	int s;
	int e;
};

vector<point> v;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int s, e;
		cin >> s >> e;
		v.push_back({ s, e });
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.s < v.s) return true;
	else if (u.s == v.s)
	{
		if (u.e < v.e) return true;
		else return false;
	}
	else return false;
}

void solve()
{
	int MAX = 0;
	sort(v.begin(), v.end(), cmp);
	priority_queue<int, vector<int>, greater<int>> room;
	for (int i = 0; i < v.size(); i++)
	{
		int s = v[i].s;
		int e = v[i].e;

		if (room.size() == 0)
			room.push(e);
		else
		{
			if(room.top() <= s)
			{
				room.pop();
				room.push(e);
			}
			else
				room.push(e);
		}

		if (MAX < room.size()) MAX = room.size();
	}

	cout << MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
