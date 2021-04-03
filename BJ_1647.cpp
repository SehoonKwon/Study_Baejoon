#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define endl "\n"

int N, M;
int parent[100001];

struct point
{
	int s;
	int e;
	int val;
};
vector<point> v;

void input()
{
	cin >> N >> M;
	for(int i=0; i<M; i++)
	{
		int s, e, d;
		cin >> s >> e >> d;
		v.push_back({s, e, d});
	}
}

int myFind(int x)
{
	if(parent[x] == x) return x;
	else return parent[x] = myFind(parent[x]);
}

void solve()
{
	sort(v.begin(), v.end(),
	[](const point& u, const point& v)
	{
		if(u. val < v. val) return true;
		else return false;
	}
	);
	
	for(int i = 1; i <= N; i++)
		parent[i] = i;
	
	int MAX = 0;
	int sum = 0;
	int cnt = 0;
	for(auto it : v)
	{
		int a = it.s;
		int b = it.e;
		
		int Aroot = myFind(a);
		int Broot = myFind(b);
		if(Aroot == Broot) continue;
		
		parent[Broot] = Aroot;
		int val = it.val;
		if(MAX < val) MAX = val;
		sum += val;
		cnt++;
		if(cnt == N - 1) break;
	}
	
	cout << sum - MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
