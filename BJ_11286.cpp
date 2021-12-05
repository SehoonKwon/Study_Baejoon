#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define endl "\n"

int N;

struct point
{
	int val;
	int oval;
};

struct cmp
{
	bool operator ()(const point &u, const point &v)
	{
		if (u.val > v.val) return true;
		else if (u.val == v.val)
		{
			if (u.oval > v.oval) return true;
			else return false;
		}
		else return false;
	}
};

void solve()
{
	priority_queue<point, vector<point>, cmp> pq;
	int x, cx;
	while (N--)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.size() == 0) cout << 0 << endl;
			else {
				cout << pq.top().oval << endl;
				pq.pop();
			}
			continue;
		}
		cx = abs(x);
		pq.push({ cx, x });
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	solve();
	return 0;
}
