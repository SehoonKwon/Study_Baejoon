#include <iostream>
using namespace std;

//규칙은 쉽게 눈치 챘지만 재귀를 통해 올바른 형태로 나오기까지 몇번의 시도가 필요했음

int mypow[11] ={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
char Array[1501][1501];

void star(int n, int x, int y)
{
	if(n == 0)
	{
		Array[y][x] ='*';
		return;
	}
	
	star(n-1, x, y);
	star(n-1, x+mypow[n-1], y);
	star(n-1, x, y+mypow[n-1]);
}

int main()
{
	// your code goes here
	int N;
	cin >> N;
	
	star(N, 0, 0);
	
	for(int i=0; i<mypow[N]; i++)
	{
		for(int j=0; j<mypow[N]-i; j++)
		{
			if(Array[i][j] == '*') cout<<'*';
			else cout<<" ";
		}
		if(i != mypow[N]-1) cout<<"\n";
	}
	
	return 0;
}
