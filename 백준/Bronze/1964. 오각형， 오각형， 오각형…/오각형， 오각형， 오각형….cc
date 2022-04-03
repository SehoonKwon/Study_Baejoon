#include <iostream>
using namespace std;

#define ull unsigned long long
#define MOD 45678

int N;

int main() {
	cin >> N;
	ull sum = 5;
	
	for(int i=2; i<=N; i++)
		sum = ((sum%MOD) + ((3*(i+1)-2) % MOD))%MOD;
	
	cout<<sum;
	return 0;
}