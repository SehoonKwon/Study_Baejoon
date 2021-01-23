#include <iostream>
#include <string>
using namespace std;

int N, T;
int dir_table[4][2] = { {2, 3}, {3, 2}, {1, 0}, {0, 1} };

int main()
{
	cin >> N >> T;

	int cx = 0, cy = 0;
	int dir = 3, ct = 0;
	if (N > 0)
	{
		for (int i = 0; i < N; i++)
		{
			int t;
			string s;
			cin >> t >> s;
			
			int d = t - ct;
			switch (dir)
			{
			case 0:
				cy += d;
				break;
			case 1:
				cy -= d;
				break;
			case 2:
				cx -= d;
				break;
			case 3:
				cx += d;
				break;
			default:
				break;
			}

			if (s == "right")
				dir = dir_table[dir][1];
			else
				dir = dir_table[dir][0];

			ct = t;
		}
	}

	int d = T - ct;
	switch (dir)
	{
	case 0:
		cy += d;
		break;
	case 1:
		cy -= d;
		break;
	case 2:
		cx -= d;
		break;
	case 3:
		cx += d;
		break;
	default:
		break;
	}

	cout << cx << " " << cy;

	return 0;
}
