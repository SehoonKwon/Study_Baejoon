#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B,C;
    int MAX=0;
    cin>>A>>B>>C;
    MAX=max(A, max(B,C));
    cout<<-(A+B+C-3*MAX);
    return 0;
}