#include <iostream>
#include <cmath>
using namespace std;

#define ull unsigned long long

int L;
char c[51];

int main() {
	cin >> L;
	for(int i=0; i<L; i++)
		cin >> c[i];
	
	int M = 1234567891;
	ull sum = 0;
	for(int i=0; i<L; i++)
	{
		ull r = 1;
		for(int j=1; j<=i; j++)
		{
			r *= 31;
			if(r > M) r %= M;
		}
		sum += (ull)((c[i]-'a'+1) * r);
		if(sum > M) sum %= M;
	}
	cout << sum;
	return 0;
}