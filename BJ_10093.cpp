#include <iostream>
using namespace std;

int main()
{
	long long A, B;
	cin >> A >> B;
	if (A > B) swap(A, B);
	else if (A == B)
	{
		cout << 0;
		return 0;
	}

	cout << B - A - 1 << "\n";
	for (long long int i = A + 1; i < B; i++)
	{
		if (i == B - 1) cout << i;
		else cout << i << " ";
	}
	return 0;
}
