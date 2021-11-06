#include <iostream>
using namespace std;

int main()
{
    int N, x;
    cin >> N;
    
    int sum = 0;
    for(int i=0; i<N; i++)
    {
        cin >> x;
        if(i == N-1) sum += x;
        else sum += (x-1);
    }
    
    cout<<sum;
    return 0;
}
