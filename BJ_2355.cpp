#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

int main() {
	
	ll a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	if(a >= 0)
		cout << (b-a+1) * (b+a)/ 2;
	else
	{
		ll positive = b*(b+1)/2;
		a *= -1;
		ll negative = a*(a+1)/2;
		cout<<positive - negative;
	}
	return 0;
}
