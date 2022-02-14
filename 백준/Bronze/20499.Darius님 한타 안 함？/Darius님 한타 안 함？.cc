#include <iostream>
using namespace std;

int main()
{
    int K,D,A;
    char t;
    cin>>K>>t>>D>>t>>A;
    if(D == 0 || K+A < D) cout<<"hasu";
    else cout<<"gosu";
    return 0;
}