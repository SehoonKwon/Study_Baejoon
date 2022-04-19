#include <iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin >> T;
	for(int num=1; num<T+1; num++)
	{
		unsigned long long x, w;
	    cin>>x>>w;
	    int cnt=0;
	    while(1)
	    {
	    	if(x >= w) break;
		    x*=2;
		    cnt++;
	    }
	    cout<<cnt<<"\n";
	}
	return 0;
}