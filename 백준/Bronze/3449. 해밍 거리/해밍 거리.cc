#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;

        int cnt = 0;
        for (int i = 0; i < s1.size(); i++)
            if (s1[i] != s2[i]) cnt++;

        printf("Hamming distance is %d.\n", cnt);
    }
    return 0;
}