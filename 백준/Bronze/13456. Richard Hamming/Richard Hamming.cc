#include <iostream>
using namespace std;

int Array[51];

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        for(int i=0; i<N; i++)
            cin >> Array[i];
        
        int cnt = 0;
        for(int i=0; i<N; i++){
            int x;
            cin >> x;
            if(x != Array[i]) cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}