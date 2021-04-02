#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define endl "\n"

int Array[10][10], Array2[10][10];
int check[10];
int flag = 0;

struct point
{
	int x;
	int y;
};

vector<point> v;

void input()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			scanf("%1d",&Array[i][j]);
			if (Array[i][j] == 0) v.push_back({ j, i });
		}
	}

	memcpy(Array2, Array, sizeof(Array));
}

void print()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << Array[i][j];;
		}
		if (i < 9) cout << endl;
	}
}

bool check_col(int x, int y, int num)
{
	//열 검사(가로줄 검사)
	for (int i = 1; i < 10; i++)
		if (Array[y][i] == num) return false;

	return true;
}

bool check_row(int x, int y, int num)
{
	//행 검사(세로줄 검사)
	for (int i = 1; i < 10; i++)
		if (Array[i][x] == num) return false;

	return true;
}

bool check_box(int x, int y, int num)
{
	if (0 < x && x < 4) x = 1;
	else if (3 < x && x < 7) x = 4;
	else if (6 < x && x < 10) x = 7;

	if (0 < y && y < 4) y = 1;
	else if (3 < y && y < 7) y = 4;
	else if (6 < y && y < 10) y = 7;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Array[i + y][j + x] == num) return false;
		}
	}

	return true;
}

bool checking(int x, int y, int num)
{
	int r = check_row(x, y, num);
	
	int c = check_col(x, y, num);

	int b = check_box(x, y, num);

	return (r & c & b);
}

void DFS(int idx, int cnt)
{
	if (flag == 1) return;

	if (cnt == v.size())
	{
		print();
		flag = 1;
		return;
	}

	int x = v[idx].x;
	int y = v[idx].y;

	for (int i = 1; i < 10; i++)
	{
		int p = checking(x, y, i);

		if (p == 1)
		{
			Array[y][x] = i;
			DFS(idx + 1, cnt + 1);
			Array[y][x] = 0;
		}

	}

}

void solve()
{
	DFS(0, 0);
}

int main()
{
	input();
	solve();

	return 0;
}
