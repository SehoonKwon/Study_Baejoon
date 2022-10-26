#include <iostream>
#include <cstring>
using namespace std;

int Array[501][2];
int C[501];

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int num = 1; num <= T; num++) {
		int N;
		cin >> N;

		memset(Array, 0, sizeof(Array));
		memset(C, 0, sizeof(C));

		for (int i = 0; i < N; i++) {
			int a, b;
			cin >> a >> b;
			Array[i][0] = a;
			Array[i][1] = b;
		}

		int P;
		cin >> P;
		
		for (int i = 0; i < P; i++)
			cin >> C[i];
		
		cout << "Case #" << num << ": ";
		for (int i = 0; i < P; i++) {
			int cnt = 0;
			for (int j = 0; j < N; j++)
				if (Array[j][0] <= C[i] && C[i] <= Array[j][1])
					cnt++;

			cout << cnt << " ";
		}
		cout << "\n";
	}

	return 0;
}
