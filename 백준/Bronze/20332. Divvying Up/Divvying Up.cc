#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        sum += x;
    }
    
    if(sum%3 == 0) cout<<"yes";
    else cout<<"no";
    
    return 0;
}