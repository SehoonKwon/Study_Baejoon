#include <iostream>
using namespace std;

int A, B, C, D, E;

int main()
{
	cin >> A >> B >> C >> D >> E;
	
	int ans = 0;
	if (A < 0)
	{
		ans = (-A)*C;
		ans += D;
		A = 0;
	}

	ans += ((B-A)*E);

	cout << ans;

	return 0;
}
