#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--)
    {
        unsigned long long N;
        cin >> N;
        cout<<N*N<<"\n";
    }
    return 0;
}