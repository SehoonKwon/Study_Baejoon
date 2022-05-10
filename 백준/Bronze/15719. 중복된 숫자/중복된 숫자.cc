#include <iostream>
using namespace std;

#define ull unsigned long long

ull N;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N;
	ull x;
	ull sum = (N-1)*N / 2;
	
	ull nSum = 0;
	for(int i=0; i<N; i++)
	{
		cin >> x;
		nSum += x;
	}
	
	cout<<nSum - sum;
	return 0;
}