#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//21.01.29

int N, M, R;
int Array[101][101], Array2[101][101], temp[101][101];
vector<int> rv;

void input()
{
	cin >> N >> M >> R;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> Array[i][j];

	for (int i = 0; i < R; i++)
	{
		int r;
		cin >> r;
		rv.push_back(r);
	}
}

void func1()
{
	memcpy(Array2, Array, sizeof(Array));
	for (int i = 0; i < N; i++)
		memcpy(Array[i], Array2[N - 1 - i], sizeof(Array[i]));
}

void func2()
{
	memcpy(Array2, Array, sizeof(Array));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			Array[i][j] = Array2[i][M - 1 - j];
}

void func34(int num)
{
	memcpy(Array2, Array, sizeof(Array));
	memset(Array, 0, sizeof(Array));

	for (int i = 0; i < N; i++)
	{
		vector<int> tv;
		for (int j = 0; j < M; j++)
			tv.push_back(Array2[i][j]);

		if (num == 3)
		{
			for (int j = 0; j < tv.size(); j++)
				Array[j][N - 1 - i] = tv[j];
		}
		else
		{
			for (int j = 0; j < tv.size(); j++)
				Array[tv.size() - 1 - j][i] = tv[j];
		}
	}
}

void func5()
{
	memcpy(Array2, Array, sizeof(Array2));
	memset(Array, 0, sizeof(Array));

	for (int i = 0; i < N / 2; i++)
	{
		for (int j = 0; j < M / 2; j++)
			Array[i][j + M / 2] = Array2[i][j];
	}

	for (int i = 0; i < N / 2; i++)
	{
		for (int j = M / 2; j < M; j++)
			Array[N / 2 + i][j] = Array2[i][j];
	}

	for (int i = N / 2; i < N; i++)
	{
		for (int j = M/2; j < M; j++)
			Array[i][j - M / 2] = Array2[i][j];
	}

	for (int i = N / 2; i < N; i++)
	{
		for (int j = 0; j < M/2; j++)
			Array[i - N / 2][j] = Array2[i][j];
	}
}

void solve()
{
	for (int i = 0; i < R; i++)
	{
		switch (rv[i])
		{
		case 1:
			func1();
			break;
		case 2:
			func2();
			break;
		case 3:
			func34(3);
			swap(N, M);
			break;
		case 4:
			func34(4);
			swap(N, M);
			break;
		case 5:
			func5();
			break;
		case 6:
			for (int i = 0; i < 3; i++)
				func5();
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			if (Array[i][j] != 0) cout << Array[i][j] << " ";
		cout << "\n";
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
