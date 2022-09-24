#include <iostream>
using namespace std;

int main() {
	
	int p1,p2,s1,s2;
	cin>>p1>>s1>>s2>>p2;
	
	int A = p1+p2;
	int B = s1+s2;
	
	if( A > B ) cout<<"Persepolis";
	else if(A < B) cout <<"Esteghlal";
	else{
		if(p2 > s1) cout<<"Persepolis";
		else if(p2 < s1) cout <<"Esteghlal";
		else cout<<"Penalty";
	}
	
	
	return 0;
}