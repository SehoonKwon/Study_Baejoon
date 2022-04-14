#include <iostream>
using namespace std;

int Array[11];

int main() {
	int N, cnt = 0;
	cin >> N;
	for (int i = 0; i <= 5; i++)
	{
		if (Array[i] == 1) continue;
		for (int j = 0; j <= 5; j++)
		{
			if (Array[j] == 1) continue;
			if (i + j == N)
			{
				cnt++;
				Array[i] = 1;
				Array[j] = 1;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}