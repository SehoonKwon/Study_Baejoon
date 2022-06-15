#include <iostream>
using namespace std;

int main() {
	double A,B,C;
	cin>>A>>B>>C;
	cout<<fixed;
	cout.precision(6);
	
	cout<<(0.229*0.324*2*A) + (0.297*0.42*2*B) + (0.21*0.297*C);
	return 0;
}