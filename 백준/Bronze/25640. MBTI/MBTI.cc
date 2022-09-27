#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t;
    cin >> t;
    
    int N;
    cin >> N;
    
    int cnt = 0;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        if(s == t) cnt++;
    }
    
    cout<<cnt;
    return 0;
}