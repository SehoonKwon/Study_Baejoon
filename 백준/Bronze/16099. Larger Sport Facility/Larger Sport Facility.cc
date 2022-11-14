#include <iostream>
using namespace std;

#define ull unsigned long long

int main()
{
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        ull a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(a*b > c*d) cout<<"TelecomParisTech\n";
        else if(a*b < c*d) cout<<"Eurecom\n";
        else cout<<"Tie\n";
    }
    return 0;
}