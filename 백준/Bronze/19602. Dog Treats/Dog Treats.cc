#include <iostream>
using namespace std;

int main() {
	int S,M,L;
	cin>>S>>M>>L;
	if(S+2*M+3*L < 10) cout<<"sad";
	else cout<<"happy";
	return 0;
}