#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int t = N;
	while(1)
	{
		if(N > 1)
		{
			cout << N << " bottles of beer on the wall, " << N-- << " bottles of beer.\n";
            if(N == 1) cout <<"Take one down and pass it around, " << N << " bottle of beer on the wall.\n\n";
			else cout <<"Take one down and pass it around, " << N << " bottles of beer on the wall.\n\n";
		}
		else if(N == 1)
		{
			cout << N << " bottle of beer on the wall, " << N-- << " bottle of beer.\n";
			cout <<"Take one down and pass it around, no more bottles of beer on the wall.\n\n";			
		}
		else
		{
			cout<<"No more bottles of beer on the wall, no more bottles of beer.\n";
			if(t == 1) cout<<"Go to the store and buy some more, 1 bottle of beer on the wall.";
			else cout<<"Go to the store and buy some more, " <<t<<" bottles of beer on the wall.";
			break;
		}
	}
	return 0;
}