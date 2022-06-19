#include <iostream>
using namespace std;
int main(){
    int A,B,Z;
    cin>>A>>B>>Z;
    double newZ = 0.5+ (double)Z;
    if(newZ - double(A+B) >= 0) cout<<1;
    else cout<<0;
    return 0;
}