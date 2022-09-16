#include <iostream>
#include <cstring>
using namespace std;

int Array[9][9];
int chk[10];

struct point
{
    int x, y;
};
point pointArray[9] = { {0, 0}, {3, 0}, {6, 0}, {0, 3}, {3, 3}, {6, 3}, {0, 6}, {3, 6}, {6, 6} };

void input()
{
    memset(Array, 0, sizeof(Array));

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> Array[i][j];
}

bool CheckR(int R)
{
    memset(chk, 0, sizeof(chk));
    for (int i = 0; i < 9; i++)
        chk[Array[i][R]] = 1;

    for (int i = 1; i < 10; i++)
        if (!chk[i]) return false;

    return true;
}

bool CheckC(int C)
{
    memset(chk, 0, sizeof(chk));
    for (int i = 0; i < 9; i++)
        chk[Array[C][i]] = 1;

    for (int i = 1; i < 10; i++)
        if (!chk[i]) return false;

    return true;
}

bool CheckCube(int sx, int sy)
{
    memset(chk, 0, sizeof(chk));
    for (int i = sy; i < sy + 3; i++)
        for (int j = sx; j < sx + 3; j++)
            chk[Array[i][j]] = 1;

    for (int i = 1; i < 10; i++)
        if (!chk[i]) return false;

    return true;
}

void solve(int num)
{
	bool bRes = true;
	for (int i = 0; i < 9; i++) {

		bRes = CheckR(i);
		if (!bRes) break;

		bRes = CheckC(i);
		if (!bRes) break;
	}

    if (bRes) {
        for (int i = 0; i < 9; i++) {
            bRes = CheckCube(pointArray[i].x, pointArray[i].y);
            if (!bRes) break;
        }
    }

	string sRes = bRes ? "CORRECT" : "INCORRECT";
	cout << "Case " << num << ": " << sRes << "\n";
}

int main()
{
    int T;
    cin >> T;
    
    for (int i = 1; i <= T; i++) {
        input();
        solve(i);
    }
    return 0;
}