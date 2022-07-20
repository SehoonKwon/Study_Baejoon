#include <iostream>
using namespace std;

int main() {
	int A,B,C;
	cin>>A>>B>>C;
	double res = (double)(B-A)/(double)C;
	if(res - (int)res > 0) cout<<(int)res+1;
	else cout<<(int)res;
	return 0;
}