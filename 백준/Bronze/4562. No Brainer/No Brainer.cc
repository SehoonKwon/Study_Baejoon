#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int x, y;
        cin >> x >> y;
        if(x >= y) cout<<"MMM BRAINS\n";
        else cout<<"NO BRAINS\n";
    }
    return 0;
}