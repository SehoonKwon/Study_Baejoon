#include <iostream>
using namespace std;

#define endl "\n"

int N, Q;

int Array[200001];
int pArray[200001];

void input()
{
	cin >> N >> Q;
	for (int i = 1; i < N + 1; i++)
		cin >> Array[i];
}

void solve()
{
	for (int i = 1; i < N + 1; i++)
	{
		int res = 1;
		for (int j = i; j <= i + 3; j++)
		{
			if (j <= N)
				res *= Array[j];
			else
				res *= Array[j - N];
		}

		pArray[i] = res;
	}

	int S = 0;
	for (int i = 1; i < N + 1; i++)
		S += pArray[i];

	for (int i = 0; i < Q; i++)
	{
		int q;
		cin >> q;

		for (int j = q - 3; j <= q; j++)
		{
			if (j <= 0)
			{
				pArray[N + j] *= -1;
				S += (2 * (pArray[N + j]));
			}
			else
			{
				pArray[j] *= -1;
				S += (2 * pArray[j]);
			}
		}

		cout << S << endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
