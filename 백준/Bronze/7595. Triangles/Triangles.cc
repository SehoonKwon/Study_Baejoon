#include <iostream>
using namespace std;

int main() {
	while(1)
	{
		int x;
		cin >> x;
		if(!x) break;
		
		for(int i=1; i <= x; i++){
			for(int j=0; j<i; j++)
				cout<<"*";
			cout<<"\n";
		}
	}
	return 0;
}