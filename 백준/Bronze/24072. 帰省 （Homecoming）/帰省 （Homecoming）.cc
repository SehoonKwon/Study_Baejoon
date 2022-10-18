#include <iostream>

using namespace std;

int main() {

	int A, B, C;
    cin >> A >> B >> C;
    
	if(A > C) cout<<0;
	else{
		if(C < B) cout<<1;
		else cout<<0;
	}
	return 0;
}