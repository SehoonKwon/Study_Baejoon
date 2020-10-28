#include <iostream>
#include <vector>
using namespace std;

//20.05.30

int N;
int ans;
int visit[16];

struct point
{
	int T;
	int val;
};

vector<point> v;

void input()
{
	cin >> N;

	v.push_back({ 0, 0 }); //dummy;
	for (int i = 0; i < N; i++)
	{
		int T, val;
		cin >> T >> val;
		v.push_back({ T, val });
	}
}

void DFS(int day, int cost)
{
	if (day > N + 1) return; //마지막날에도 하루짜리 일 가능.
	
	if (ans < cost) ans = cost;

	for (int i = day; i < N + 1; i++)
	{
		if (visit[i] == true) continue;
		visit[i] = true;
		DFS(i + v[i].T, cost + v[i].val);
		visit[i] = false;
	}
}

void solve()
{
	DFS(1, 0);

	cout << ans;
}

int main()
{
	input();
	solve();
	return 0;
}
