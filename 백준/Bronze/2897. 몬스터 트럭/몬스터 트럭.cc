#include <iostream>
using namespace std;

int R, C;
char Array[51][51];
int cArray[5];

int main()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> Array[i][j];

	for (int i = 0; i < R - 1; i++)
	{
		for (int j = 0; j < C - 1; j++)
		{
			int cnt = 0, flag = 0;
			for (int k = 0; k < 2; k++)
			{
				for (int l = 0; l < 2; l++)
				{
					if (Array[i + k][j + l] == '#')	flag = 1;
					else if (Array[i + k][j + l] == 'X') cnt++;
				}
			}

			if (!flag)
				cArray[cnt]++;
		}
	}

	for (int i = 0; i < 5; i++)
		cout << cArray[i] << endl;

	return 0;
}