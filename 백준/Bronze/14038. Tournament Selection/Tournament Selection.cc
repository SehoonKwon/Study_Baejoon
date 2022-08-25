#include <iostream>
using namespace std;

int main()
{
    int cnt = 0, N = 6;
    char c;
    while(N--){
        cin >> c;
        if(c == 'W') cnt++;
    }
    if(cnt > 4) cout<<1;
    else if(cnt > 2) cout<<2;
    else if(cnt > 0) cout<<3;
    else cout<<-1;
    
    return 0;
}