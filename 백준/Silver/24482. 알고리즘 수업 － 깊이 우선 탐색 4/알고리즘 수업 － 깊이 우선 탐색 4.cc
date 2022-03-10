#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, R;
vector<int> v[100001];
int visit[100001];

void input()
{
	cin>>N>>M>>R;
	for(int i=0; i<M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
}

void DFS(int x, int cnt)
{
	if(visit[x] > -1) return;
	visit[x] = cnt;
	
	for(auto it : v[x])
			DFS(it, cnt+1);
}

void solve()
{
	memset(visit, -1 ,sizeof(visit));
	for(int i=1; i<=N; i++)
		sort(v[i].rbegin(), v[i].rend());
	DFS(R, 0);
	for(int i=1; i<=N; i++)
		cout<<visit[i]<<"\n";
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}