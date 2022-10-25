#include <iostream>
#include <queue>
using namespace std;

int N;
char Array[101][101];

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	for (int i = 0; i < N; i++) {
		queue<char> q;
		for (int j = 0; j < N; j++) {
			q.push(Array[i][j]);
		}
		
		for (int j = 0; j < N; j++) {
			char c = q.front();
			q.pop();

			if (Array[j][i] != c) {
				cout << "NO";
				return;
			}
		}
	}

	cout << "YES";
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}