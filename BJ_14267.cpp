#include <iostream>
#include <vector>
using namespace std;

#define MAX 100001

int N,M;
int Array[MAX];
vector<int> v[MAX];

void input()
{
	cin >> N >> M;
	for(int i=1; i <= N; i++)
	{
		int x;
		cin >> x;
		if(x != -1)
			v[x].push_back(i);
	}
}

void DFS(int node)
{
    //각 노드를 갈 때마다 값 업데이트
	for(auto it : v[node])
	{
		Array[it] += Array[node];
		DFS(it);
	}
}

void solve()
{
    //칭찬의 정도를 미리 한번에 저장하고
	while(M--)
	{
		int a, b;
		cin >> a >> b;
		Array[a] += b;
	}
	
    //사장이 1번 고정이므로 사장부터 DFS하면 한번만 돌아도 됌
	DFS(1);
	
	for(int i=1; i<=N; i++)
		cout << Array[i] << " ";
}

int main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();	
	solve();
	return 0;
}
