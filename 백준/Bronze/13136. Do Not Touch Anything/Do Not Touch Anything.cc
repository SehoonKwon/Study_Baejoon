#include <iostream>
using namespace std;
int main()
{
    long long R,C,N,A,B;
    cin>>R>>C>>N;
    if(R%N) A = R/N + 1;
    else A = R/N;
    
    if(C%N) B = C/N + 1;
    else B = C/N;
    cout<<A*B;
    return 0;
}