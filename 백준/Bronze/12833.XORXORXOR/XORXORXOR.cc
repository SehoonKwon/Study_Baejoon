#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(C%2) cout<<(A^B);
    else cout<<A;
    return 0;
}