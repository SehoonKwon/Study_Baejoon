#include <iostream>
using namespace std;

int N;
int Array[501][501];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= 5 * N; j++)
            Array[i][j] = 1;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= 5 * N; j++)
            Array[j][i] = 1;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= 5 * N; j++)
            Array[j][5 * N + 1 - i] = 1;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= 5 * N; j++)
            Array[5 * N + 1 - i][j] = 1;

    for (int i = 1; i <= 5 * N; i++) {
        for (int j = 1; j <= 5 * N; j++) {
            if (Array[i][j]) cout << "@";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}