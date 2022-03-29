#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> mymap;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--)
    {
        mymap.clear();
        int N,M,x;
        cin >> N;
        for(int i=0; i<N; i++)
        {
            cin >> x;
            mymap[x] = 1;
        }
        cin >> M;
        for(int i=0; i<M; i++)
        {
            cin >> x;
            cout<<mymap[x]<<"\n";
        }
    }
    return 0;
}