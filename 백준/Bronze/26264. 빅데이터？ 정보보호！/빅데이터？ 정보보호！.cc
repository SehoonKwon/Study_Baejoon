#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s;
    cin >> s;

    int bCnt = 0, sCnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 's') {
            sCnt++;
            i += 7;
        }
        else {
            bCnt++;
            i += 6;
        }
    }

    if (bCnt > sCnt) cout << "bigdata?";
    else if (bCnt < sCnt) cout << "security!";
    else cout << "bigdata? security!";

    return 0;
}