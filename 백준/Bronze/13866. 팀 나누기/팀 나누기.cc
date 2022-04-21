#include <iostream>
#include <algorithm>
using namespace std;
int Array[4];
int main()
{
    cin>>Array[0]>>Array[1]>>Array[2]>>Array[3];
    sort(Array,Array+4);
    cout<<abs((Array[0]+Array[3]) - (Array[1]+Array[2]));
   return 0; 
}