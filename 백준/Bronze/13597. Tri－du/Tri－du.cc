#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    if(A==B) cout<<A;
    else cout<<max(A,B);
    return 0;
}