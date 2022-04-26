#include <iostream>
using namespace std;

int main() {
	double n1,n2,n12;
	cin>>n1>>n2>>n12;
	int res = (n1+1)*(n2+1);
	res /= (n12+1);
	res -= 1;
	cout<<(int)res;
	return 0;
}