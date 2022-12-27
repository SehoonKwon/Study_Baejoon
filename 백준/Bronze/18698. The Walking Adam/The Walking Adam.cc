#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int cnt = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'D') break;
            else cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}