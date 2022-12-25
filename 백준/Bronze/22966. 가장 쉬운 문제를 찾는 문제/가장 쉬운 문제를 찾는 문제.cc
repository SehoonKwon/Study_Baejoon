#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string sAns = "";
    int MIN = 10000;
    for(int i=0; i<N; i++){
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