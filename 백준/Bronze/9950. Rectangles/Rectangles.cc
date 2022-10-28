#include <iostream>
using namespace std;

int main() {
	while(1){
		int a,b,c;
		cin >> a >> b >> c;
		if(a == b && b == c && c == 0) break;
		
		if(a == 0)
			cout<<c/b<<" "<<b<<" "<<c;
		else if(b == 0)
			cout<<a<<" "<<c/a<<" "<<c;
		else
			cout<<a<<" "<<b<<" "<<a*b;
		cout<<"\n";
	}
	return 0;
}