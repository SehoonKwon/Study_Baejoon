#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int Array[5001];

int main() {

	int N, M;
	while (!cin.eof())
	{
		cin >> N >> M;
		if (cin.eof() == true) break;
		int cnt = 0;
		for (int i = N; i <= M; i++)
		{
			string temp = to_string(i);
			int flag = 0;
			memset(Array, 0, sizeof(Array));
			for (int j = 0; j < temp.size(); j++)
			{
				if (Array[temp[j] - '0'] > 0)
				{
					flag = 1;
					break;
				}
				Array[temp[j] - '0']++;
			}
			if (!flag) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}