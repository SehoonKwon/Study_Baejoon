#include <iostream>
using namespace std;

int main()
{
    char c;
    int x;

    int sumA = 0, sumB = 0;
    while (1) {
        if (sumA >= 10 && sumB >= 10) {
            if (sumA - sumB >= 2) {
                cout << 'A';
                return 0;
            }
            else if (sumA - sumB <= -2) {
                cout << 'B';
                return 0;
            }
        }

        if (sumA >= 11 && sumB < 10) {
            cout << 'A';
            return 0;
        }
        else if (sumB >= 11 && sumA < 10) {
            cout << 'B';
            return 0;
        }

        cin >> c >> x;
        if (c == 'A')
            sumA += x;
        else
            sumB += x;
    }

    return 0;
}