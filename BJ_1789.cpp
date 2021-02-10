#include <iostream>
#include <cstring>
using namespace std;

#define endl "\n"

unsigned int S;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> S;
	unsigned long long sum = 0;
	int cnt = 0, num = 1;
	while (1)
	{
		sum += num;
		cnt++;
		if (sum > S)
		{
			cout << cnt - 1;
			break;
		}
		num++;
	}

	return 0;
}
