#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
		int x, y;
		cin >> x >> y;
		if(x >= 0 && x <= 23 && y >= 0 && y <= 59)
			cout<<"Yes ";
		else
			cout<<"No ";
		
		if(x >= 1 && x <= 12)
		{
			if(x == 2)
			{
				if(y >=1 && y<=29) cout<<"Yes\n";
				else cout<<"No\n";
			}
			else if(x == 4 || x == 6 || x == 9 || x == 11)
			{
				if(y >=1 && y<=30) cout<<"Yes\n";
				else cout<<"No\n";
			}
			else
			{
				if(y >=1 && y<=31) cout<<"Yes\n";
				else cout<<"No\n";				
			}
		}
		else
			cout<<"No\n";
	}
	return 0;
}