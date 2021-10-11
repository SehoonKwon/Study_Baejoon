#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	for(int i=1; ; i++)
	{
		cin >> N;
		if(N == 0) break;
		
		int x;
		for(int i=0; i<N; i++)
			cin >> x;
			
		cout<<"Case "<<i<<": Sorting... done!\n";
	}
	
	return 0;
}
