#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, R;
vector<int> v[100001];
int visit[100001];
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

void DFS(int x)
{
	visit[x] = cnt;
	cnt++;
	
	for(auto it : v[x])
		if(visit[it] == false)
			DFS(it);
}

void solve()
{
	for(int i=1; i<=N; i++)
		sort(v[i].rbegin(), v[i].rend());
	DFS(R);
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