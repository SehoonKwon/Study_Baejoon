#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	
	int A = a == 8 || a == 9;
	int D = d == 8 || d == 9;
	
	if(A == 1 && b == c && D == 1)
		cout<<"ignore";
	else 
		cout<<"answer";
	
	return 0;
}