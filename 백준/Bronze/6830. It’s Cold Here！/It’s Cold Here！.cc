#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sAns = "";
    int MIN = 10000;
    while (1) {
        int x;
        string s;
        cin >> s >> x;
        if (cin.eof()) break;

        if (x < MIN) {
            MIN = x;
            sAns = s;
        }
    }

    cout << sAns;

    return 0;
}