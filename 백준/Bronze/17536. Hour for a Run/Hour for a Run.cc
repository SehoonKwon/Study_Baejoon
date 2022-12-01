#include <iostream>
#include <cmath>
using namespace std;

double dm[] = { 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9 };

int main()
{
	int N, P;
	cin >> N >> P;

	int totalP = N * P;

	for (int i = 1; i <= 9; i++)
		cout << (int)ceil(totalP * dm[i]) << " ";

	return 0;
}