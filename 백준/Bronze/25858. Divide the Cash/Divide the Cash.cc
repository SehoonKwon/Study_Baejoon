#include <iostream>
using namespace std;

int Array[31];
int main()
{
    int N,D;
    cin >> N >> D;
    
    int div = 0;
    for(int i=0; i<N; i++){
        int x;
        cin >> Array[i];
        div += Array[i];
    }
    
    int r = D/div;
    for(int i=0; i<N; i++)
        cout<<r*Array[i]<<"\n";
    
    return 0;
}