#include <iostream>
using namespace std;
 
int main() {
	int X;
	cin >> X;
	if(X == 1996 || X == 1997 || X == 2000 || X == 2007 || X == 2008 || X == 2013 || X == 2018)
		cout<<"SPbSU";
	else if(X==2006)
		cout<<"PetrSU, ITMO";
	else
		cout<<"ITMO";
	return 0;
}