#include <iostream>
#include <stack>
using namespace std;

#define ull unsigned long long

int main() {
	ull x;
	cin >> x;
	
	stack<int> stk;
	while(1)
	{
		int r = x%2;
		stk.push(r);
		
		x /= 2;
		if(x == 1)
		{
			stk.push(1);
			break;
		}
	}
	
	while(!stk.empty())
	{
		cout<<stk.top();
		stk.pop();
	}
		
	return 0;
}