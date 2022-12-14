#include <iostream>
using namespace std;

int Array[1001];
int L, N;
int cnt1, cnt2;

int main() {

    cin >> L >> N;

    int l, r;
    int M1 = 0, M2 = 0;
    for (int i = 1; i <= N; i++) {
        cin >> l >> r;

        if (cnt1 < r - l + 1) {
            cnt1 = r - l + 1;
            M1 = i;
        }

        int t = 0;
        for (int i = l; i <= r; i++) {
            if (Array[i] == 0) {
                t++;
                Array[i]++;
            }
        }

        if (cnt2 < t) {
            cnt2 = t;
            M2 = i;
        }
    }

    cout << M1 << endl << M2;
    return 0;
}