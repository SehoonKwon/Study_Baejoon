#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    cout<<A+B+C-min(A, min(B,C));
    return 0;
}