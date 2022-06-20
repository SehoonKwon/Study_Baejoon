#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int X,L,R;
    cin>>X>>L>>R;
    int MIN = (int)1e9;
    int val = -1;
    for(int i=L; i<=R; i++)
    {
        if(abs(X-i) < MIN){
            MIN = abs(X-i);
            val = i;
        }
    }
    cout<<val;
    return 0;
}