#include <iostream>
using namespace std;

int N;
int r, e, c;

int main() {
	// your code goes here
	cin >> N;
	while(N--)
	{
		cin >> r >> e >> c;
	
		if(e - c > r ) cout<<"advertise";
		else if(e - c == r) cout<<"does not matter";
		else cout<<"do not advertise";
		cout<<"\n";
	}
	return 0;
}
