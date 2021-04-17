#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int MAX=0, MIN=100;
        int N;
        cin >> N;
        while(N--)
        {
            int x;
            cin >> x;
            if (MAX < x) MAX = x;
            if (x < MIN) MIN = x;
        }
        
        cout<<(MAX-MIN)*2<<endl;
    }
    
    return 0;
}
