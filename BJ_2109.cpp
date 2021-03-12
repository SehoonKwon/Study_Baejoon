#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

//2초 제한이라 N^2으로도 풀림..괜히 어렵게 생각한듯 -> 근데도 못풀었다

#define endl "\n"

int N;
int maxD;

struct point
{
	int pay;
	int day;
};

vector<point> v;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int p, d;
		cin >> p >> d;
		if (maxD < d) maxD = d;
		v.push_back({ p, d });
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.day > v.day) return true;
	else return false;
}

void solve()
{
	sort(v.begin(), v.end(), cmp);
	priority_queue<int> pq;
	
	int sum = 0, vidx = 0;
	for(int day = 10000; day>=1; day--)
	{
		while (vidx < N && day <= v[vidx].day)
		{
			pq.push((v[vidx].pay));
			vidx++;
		}
		if (!pq.empty())
		{
			sum += pq.top();
			pq.pop();
		}
	}

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
