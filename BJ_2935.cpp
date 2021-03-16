#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	
	string A,B;
	char oper;
	
	cin >> A >> oper >> B;
	
	if(oper == '+')
	{
		if(A.size() > B.size())
		{
			A[A.size() - B.size()] = '1';
			cout << A;
		}
		else if(A.size() < B.size())
		{
			B[B.size() - A.size()] = '1';
			cout << B;
		}
		else
		{
			A[0] = '2';
			cout << A;
		}
	}
	else
	{
		int a = A.size()-1;
		int b = B.size()-1;
		
		cout << 1;
		for(int i = 0; i< a + b; i++)
			cout << 0;
	}
	
	return 0;
}
