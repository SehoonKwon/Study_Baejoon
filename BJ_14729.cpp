#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    vector<double> v(N);
    
    for(int i=0; i<N; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    
    cout<<fixed;
    cout.precision(3);
    for(int i=0; i<7; i++)
        cout<<v[i]<<"\n";
    
    return 0;
}
