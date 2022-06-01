#include <iostream>
using namespace std;
int main(){
    int a,b,c,A,B,C;
    cin>>A>>B>>C;
    cin>>a>>b>>c;
    int sum = 0;
    if(a-A > 0) sum += a-A;
    if(b-B > 0) sum += b-B;
    if(c-C > 0) sum += c-C;
    cout<<sum;
    return 0;
}