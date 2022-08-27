#include <iostream>
using namespace std;

int Array[81];

int main()
{
    int S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    for (int i = 1; i < S1 + 1; i++)
        for (int j = 1; j < S2 + 1; j++)
            for (int k = 1; k < S3 + 1; k++)
                Array[i + j + k]++;

    int mCnt = 0, Ans = 0;
    for (int i = 0; i < 81; i++) {
        if (mCnt < Array[i]) {
            mCnt = Array[i];
            Ans = i;
        }
    }

    cout << Ans;

    return 0;
}