#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int cnt = 0;
    while(N--){
        char d,m;
        int x;
        cin >> d >> m >> x;
        if(x <= 90) cnt++;
    }
    cout<<cnt;
    return 0;
}