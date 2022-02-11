#include <iostream>
using namespace std;
int N, x;
int Array[6];
int main(){
    cin>>N;
    for(int i=0; i<5; i++)
    {
        cin >> x;
        Array[x]++;
    }
    cout<<Array[N];
    return 0;
}