#include <iostream>
using namespace std;

int Array[3];

int main()
{
    for(int i=0; i<3; i++)
    {
        int x;
        cin >> x;
        Array[x]++;
    }
    if(Array[1] < Array[2]) cout<<2;
    else cout<<1;
    return 0;
}