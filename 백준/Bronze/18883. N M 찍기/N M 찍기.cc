#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int cnt = 1;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<cnt++;
            if(j < M - 1) cout<<" ";
        }       
        cout<<"\n";
    }
    return 0;
}