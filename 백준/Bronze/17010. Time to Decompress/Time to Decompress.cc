#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--){
        char c;
        int k;
        cin >> k >> c;
        for(int i=0; i<k; i++)
            cout<<c;
        cout<<"\n";
    }
    return 0;
}