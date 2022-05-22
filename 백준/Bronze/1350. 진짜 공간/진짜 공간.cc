#include <iostream>
using namespace std;

#define ull unsigned long long

ull N;
ull Array[51];
ull C;

int main() {
	cin >> N;
	for(int i=0; i<N; i++)
		cin>>Array[i];
	cin >> C;
	
	ull sum = 0;
	for(int i=0; i<N; i++)
	{
		if(Array[i] <= C && Array[i] != 0)
			sum += C;
		else
		{
			ull val = Array[i]/C;
			if(Array[i]%C != 0) val++;
			sum += (val*C);
		}
	}
	cout<<sum;
	return 0;
}