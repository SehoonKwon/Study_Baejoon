#include <iostream>
using namespace std;

#define ull unsigned long long

int main()
{
    ull N;
    cin >> N;

    ull sum = 0;
    while (N != 1) {
        if (N % 2) N = N * 3 + 1;
        else N /= 2;
        sum++;
    }
    cout << sum;
    return 0;
}