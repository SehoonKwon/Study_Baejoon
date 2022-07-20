#include <iostream>
using namespace std;

int main() {
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	if(A-C > 1 && B-D > 1) cout<<1;
	else cout<<0;
	return 0;
}