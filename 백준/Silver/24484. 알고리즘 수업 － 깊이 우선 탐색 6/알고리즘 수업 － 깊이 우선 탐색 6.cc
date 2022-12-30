#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
 
#define ull unsigned long long
 
int N, M, R;
vector<int> v[100001];
int visit[100001], depth[100001];
int cnt = 1;

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
 
void DFS(int x, int d)
{
	if(depth[x] > -1) return;
	visit[x] = cnt++;
    depth[x] = d;
    
	for(auto it : v[x])
			DFS(it, d+1);
}
 
void solve()
{
	memset(depth, -1 ,sizeof(visit));
	for(int i=1; i<=N; i++)
		sort(v[i].rbegin(), v[i].rend());
	DFS(R, 0);
 
	ull res = 0;
	for(int i=1; i<=N; i++)
		if(depth[i] > 0) res += ((ull)depth[i]*(ull)visit[i]);
	cout<<res;
}
 
int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}