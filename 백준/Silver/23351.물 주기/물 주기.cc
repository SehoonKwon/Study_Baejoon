#include <iostream>
using namespace std;

int N, K, A, B;
int Array[101];

void solve()
{
	for (int i = 0; i < N; i++)
		Array[i] = K;

	int day;
	for (day = 1; ; day++)
	{
		int MIN = (int)1e9;
		int idx = -1;

		//물 줄 화분 찾기
		for (int i = 0; i < N; i++)
		{
			if (MIN > Array[i])
			{
				MIN = Array[i];
				idx = i;
			}
		}

		//물 주기
		for (int i = 0; i < A; i++)
			if (idx + i < N) Array[idx + i] += B;

		for (int i = 0; i < N; i++)
		{
			Array[i]--;
			if (Array[i] == 0)
			{
				cout << day;
				return;
			}
		}
	}
}

int main()
{
	cin >> N >> K >> A >> B;
	solve();
	return 0;
}