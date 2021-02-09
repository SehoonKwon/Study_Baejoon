#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int sum = 0;
    while(N--)
    {   
        int x;
        scanf("%1d", &x);
        sum += x;
    }
    
    cout<<sum;
    return 0;
}
