#include <iostream>
using namespace std;

int N, K;
int Array[51], visit[51];
int cnt;

void DFS(int idx, int sum, int c)
{
	if(sum < 0) return;
	if(c == N)
		cnt++;
		
	for(int i = 0; i < N; i++)
	{
		if(visit[i] == true) continue;
		visit[i] = true;
		DFS(i, sum + Array[i] - K, c+1);
		visit[i] = false;
	}
}

int main() {
	
	cin >> N >> K;
	for(int i = 0; i < N; i++)
		cin >> Array[i];
		
	DFS(0, 0, 0);
	cout << cnt;	
	return 0;
}
