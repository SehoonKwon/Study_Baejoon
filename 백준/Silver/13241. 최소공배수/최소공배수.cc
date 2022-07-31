#include <iostream>
using namespace std;

#define endl "\n"
#define ll long long int

ll A, B;

ll GCD(ll a, ll b)
{
	if (a < b) swap(a, b);
	while (b != 0)
	{
		ll temp = b;
		b = a%b;
		a = temp;
	}

	return a;
}

void solve()
{
	ll ans1 = GCD(A, B);
	ll ans2 = A*B / ans1;

	cout << ans2;
}

int main(){
	cin>>A>>B;
	solve();
	return 0;
}