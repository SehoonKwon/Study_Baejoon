#include <iostream>
using namespace std;

#define ull unsigned long long

ull A, B, C;
int Array[10];

int main() {
	cin>>A>>B>>C;
	ull X = A*B*C;
	while(X > 0)
	{
		int r = X%10;
		Array[r]++;
		X/=10;
	}
	
	for(int i=0; i<10; i++)
		cout<<Array[i]<<endl;
	
	return 0;
}