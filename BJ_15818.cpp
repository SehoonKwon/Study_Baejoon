#include <iostream>
using namespace std;

#define ull unsigned long long

int N, M;
ull Array[101];

int main() {
	
	cin>>N>>M;
	ull res = 1, x;
	for(int i=0; i<N; i++)
	{
		cin >> x;
		res = ((res%M) * (x%M)) % M;
		if(res > M) res %= M;
	}
	cout<<res;
	return 0;
}
