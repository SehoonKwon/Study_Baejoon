#include <iostream>
using namespace std;

int N;
int Array[1001];

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
    for(int i=0; i<N; i++)
        cin>>Array[i];
    
    int cnt = 0, color = 0;
    for(int i=0; i<N; i++)
    {
        if(color == Array[i])
        {
            cnt++;
            color++;
            if(color == 3) color = 0;
        }
        else continue;
    }
    cout << cnt;
	return 0;
}
