#include <iostream>
#include <cstring>
using namespace std;

int N;
int Array[11];
int visit[11];

void solve()
{
	int MAX = 0;
	for (int i = 1; i < N + 1; i++)
	{
		memset(visit, 0, sizeof(visit));
		int sum = 0;
		int mul = 1;
		int len = N - 4;

		for (int j = i; j <= i + len; j++)
		{
			if (j > N)
			{
				mul = -9999; //범위를 넘어가는, 해당이 되지 않는 조건일 때에는 해당 케이스가 선택되지 않도록 큰 음수 값으로 처리
				break;
			}

			visit[j] = true;
			mul *= Array[j];
		}
		
		for (int j = 1; j < N + 1; j++)
			if (visit[j] == false) sum += Array[j];

		sum += mul;

		if (MAX < sum) MAX = sum;
	}

	cout << MAX;
}

int main()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
		cin >> Array[i];

	solve();

	return 0;
}
