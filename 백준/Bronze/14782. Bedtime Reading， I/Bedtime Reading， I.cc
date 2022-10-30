#include <iostream>
#include <vector>
using namespace std;

int N;

int main()
{
	cin >> N;
	int sum = 0;

	for (int i = 1; i <= N; i++)
		if (N % i == 0)
			sum += i;

	cout << sum;
	return 0;
}