#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int num = 1;
	for (int i = 0; ; i++)
	{
		num += 6 * i;
		if (N <= num)
		{
			cout << i + 1;
			return 0;
		}
		if (num > 1000000000) break;
	}
	return 0;
}
