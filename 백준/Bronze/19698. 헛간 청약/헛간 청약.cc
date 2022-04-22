#include <iostream>
using namespace std;
int main(){
    int N,H,W,L;
    cin>>N>>W>>H>>L;
    int ans = (W/L)*(H/L);
    if(N < ans) cout<<N;
    else cout<<ans;
    return 0;
}