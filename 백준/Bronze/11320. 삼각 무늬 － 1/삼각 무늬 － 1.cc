#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int A,B;
        cin>>A>>B;
        int R = A/B;
        int sum = 0;
        for(int i=0; i<R; i++)
            sum +=(2*i)+1;
        cout<<sum<<"\n";
    }
    return 0;
}