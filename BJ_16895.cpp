#include <iostream>
using namespace std;

//자신과 XOR하면 0이되는 특성을 이용

int N;
int Array[1001];

int main() {

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		int res = 0; //같은 수를 XOR 하면 그 자신이 나옴
		for (int j = 0; j < N; j++)
		{
			if (i == j) continue;
			res ^= Array[j];
		}
		if (res < Array[i]) cnt++;
	}

	cout << cnt;
	return 0;
}
