#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int A[1001], B[1001];

int main()
{
    cin >> N >> M;
    for(int i=0; i<N; i++)
        cin >> A[i];
    for(int i=0; i<M; i++)
        cin >> B[i];
    
    int MAX = 0;
    int C = max(N, M);
    for(int i=0; i<C; i++)
        MAX = max(MAX, B[i]-A[i]);
    cout<<MAX;
    return 0;
}