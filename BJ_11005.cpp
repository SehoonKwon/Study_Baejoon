#include <iostream>
#include <stack>
using namespace std;

int N, X;
char Array[36];

void solve()
{
	for(int i=10; i<36; i++)
		Array[i] = 'A'+ i - 10;

	stack<int> stk;
	while(N > 0)
	{
		int x = N % X;
		stk.push(x);
		
		N -= x;
		N /= X;
		if(N == 1)
		{
			stk.push(1);
			break;
		}
	}
	
	while(!stk.empty())
	{
		int k = stk.top();
		stk.pop();
		
		if(k < 10)
			cout<<k;
		else
			cout<<Array[k];
	}
}

int main() {
	// your code goes here
	cin >> N >> X;
	solve();
	return 0;
}
