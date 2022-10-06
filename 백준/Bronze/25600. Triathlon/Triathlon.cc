#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int MAX = 0;
	for (int i = 0; i < N; i++) {
		int a, d, g;
		cin >> a >> d >> g;
		
		int sum = a * (d + g);
		if (a == d + g) sum *= 2;
		if (MAX < sum) MAX = sum;
	}

	cout << MAX;

	return 0;
}