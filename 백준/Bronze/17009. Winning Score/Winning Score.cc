#include <iostream>
using namespace std;
int A,B,C;
int main()
{
    int sumA = 0, sumB = 0;
    cin>>A>>B>>C;
    sumA = A*3 + B*2 + C;
    cin>>A>>B>>C;
    sumB = A*3 + B*2 + C;
    if(sumA > sumB) cout<<"A";
    else if(sumA < sumB) cout<<"B";
    else cout<<"T";
    return 0;
}