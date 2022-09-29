#include <iostream>
#include <unordered_map>
using namespace std;

#define endl "\n"

int N, M;
char Array[101][101], ans[101][101];
unordered_map<int, int> mymap;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> Array[i][j];
}

void MapSetting()
{
	mymap[46] = 46;
	mymap[79] = 79;
	mymap[45] = 124;
	mymap[124] = 45;
	mymap[47] = 92;
	mymap[92] = 47;
	mymap[94] = 60;
	mymap[60] = 118;
	mymap[118] = 62;
	mymap[62] = 94;
}

void RotateL()
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			ans[i][j] = char(mymap[Array[j][M - i - 1]]);
		}
	}
}

void solve()
{
	MapSetting();
	RotateL();

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << ans[i][j];
		}
		cout << endl;
	}
}

int main()
{
	input();
	solve();
	return 0;
}