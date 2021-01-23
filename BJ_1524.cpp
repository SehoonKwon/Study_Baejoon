#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int N, M;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		cin >> N >> M;
		priority_queue<int, vector<int>, greater<int>> SJ, SB;

		for (int i = 0; i < N; i++)
		{
			int x;
			cin >> x;
			SJ.push(x);
		}

		for (int i = 0; i < M; i++)
		{
			int x;
			cin >> x;
			SB.push(x);
		}

		while (SJ.size() > 0 && SB.size() > 0)
		{
			int x = SJ.top();
			int y = SB.top();

			if (x < y) SJ.pop();
			else SB.pop();
		}

		if (SJ.size() > 0) cout << "S" << "\n";
		else cout << "B" << "\n";
	}

	return 0;
}
