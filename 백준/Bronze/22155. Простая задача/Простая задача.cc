#include <iostream>
using namespace std;

#define endl "\n"

int main()
{
    int N;
    cin >> N;
    while(N--){
        int a, b;
        cin >> a >> b;
        if( (a <= 1 && b <= 2) || (a <=2 && b <=1)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}