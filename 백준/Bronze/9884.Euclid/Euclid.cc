#include <iostream>
#include <algorithm>
using namespace std;
 
int A, B;
 
void cal (int A, int B)
{
	if(A == B)
	{
		cout<<B;
		exit(0);
	}
	else
	{
		int na = max(A, B) - min(A, B);
		int nb = min(A, B);
		cal(na, nb);
	}
}
 
int main() {
	cin >> A >> B;
	cal(A, B);
	return 0;
}