#include <iostream>
using namespace std;

#define ull unsigned long long

int N;

int main() {
	
	cin >> N;
	ull sum = 0;
	for(int i=1; i<=N; i++)
		sum += (ull)i;

	int x;
	for(int i=0; i<N - 1; i++)
	{
		cin >> x;
		sum -= x;
	}
	
	cout<<sum;
	
	return 0;
}