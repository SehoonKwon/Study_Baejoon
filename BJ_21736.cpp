#include <iostream>
using namespace std;

int N, M;
char Array[601][601];
int visit[601][601];
int dx[]={ 0, 0, -1, 1};
int dy[]={-1, 1, 0, 0 };
int sx, sy;
int ans;

void input()
{
	cin >> N >> M;
	for(int i=0; i<N ;i++)
		for(int j=0; j<M; j++)
		{
			cin >> Array[i][j];
			if(Array[i][j] == 'I')
			{
				sx = j;
				sy = i;
			}
		}	
}

void DFS(int x, int y)
{
	if(visit[y][x] == true) return;
	visit[y][x] = true;
	if(Array[y][x] == 'P') ans++;
	
	for(int i=0; i<4; i++)
	{
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(nx > -1 && nx < M && ny > -1 && ny < N)
			if(visit[ny][nx] == false && Array[ny][nx] != 'X')
				DFS(nx, ny);
	}
}

void solve()
{
	DFS(sx, sy);
	if(ans == 0) cout<<"TT";
	else cout<<ans;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
