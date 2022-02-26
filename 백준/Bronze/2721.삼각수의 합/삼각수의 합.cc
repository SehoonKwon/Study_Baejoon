#include <iostream>
using namespace std;

#define ll long long

ll T(int k)
{
	ll sum = 0;
	for(int i=1; i<=k; i++)
		sum += i;
	return sum;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll sum = 0;
		for(int k=1; k<=n; k++)
			sum += (k*T(k+1));
		cout<<sum<<endl;
	}
	return 0;
}