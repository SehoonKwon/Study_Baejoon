#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        if(A+B+C == 180)
            printf("%d %d %d Seems OK\n", A, B, C);
        else
            printf("%d %d %d Check\n", A, B, C);
    }
    
    return 0;
}