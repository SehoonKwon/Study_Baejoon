#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Array[1000001];
string K;
int L;
vector<int> v;

void Eratos(int N)
{
	for (int i = 2; i < N; i++)
	{
		int val;
		if (Array[i] == 0)
		{
			val = i;
			v.push_back(i);
			for (int j = val; j < N + 1; j += val)
				Array[j] = i;
		}
	}
}

void solve()
{
	for (auto& it : v) {
		int m = 0;
		int nSize = 1;

		for (int i = K.size() - 1; i >= 0; i--)
		{
			m = (m + (K[i] - '0') * nSize) % it;
			nSize *= 10;
			nSize %= it;
		}

		if (m == 0)
		{
			cout << "BAD " << it << "\n";
			return;
		}
	}
	cout << "GOOD";
}

int main()
{
	cin >> K >> L;
	Eratos(L);
	solve();
	return 0;
}