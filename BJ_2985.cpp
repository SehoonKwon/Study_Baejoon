#include <iostream>
using namespace std;

int A, B, C;

int main() {
	// your code goes here
	cin >> A >> B >> C;
	
	//A와 B의 연산인 경우
	if(A+B == C)
	{
		cout<<A<<"+"<<B<<"="<<C;
		return 0;
	}
	else if(A-B == C)
	{
		cout<<A<<"-"<<B<<"="<<C;
		return 0;
	}
	else if(A*B == C)
	{
		cout<<A<<"*"<<B<<"="<<C;
		return 0;
	}
	else if(B != 0 && A/B == C)
	{
		cout<<A<<"/"<<B<<"="<<C;	
		return 0;
	}
	
	//B와 C의 연산인 경우
	if(A == B + C)
		cout<<A<<"="<<B<<"+"<<C;
	else if(A == B - C)
		cout<<A<<"="<<B<<"-"<<C;
	else if(A == B * C)
		cout<<A<<"="<<B<<"*"<<C;
	else if(C != 0 && A == B / C)
		cout<<A<<"="<<B<<"/"<<C;
	
	return 0;
}
