#include <iostream>
using namespace std;

int main() {
	while(1){
		double A;
		int B,C;
		cin>>A>>B>>C;
		if(A == B && B == C && C == 0) break;
		
		int flag = 0;
		if(A <= 4.5 && B >= 150 && C >= 200) { cout <<"Wide Receiver "; flag = 1; }
		if(A <= 6.0 && B >= 300 && C >= 500) { cout<<"Lineman "; flag = 1; }
		if(A <= 5.0 && B >= 200 && C >= 300) { cout<<"Quarterback"; flag = 1; }
		
		if(!flag) cout<<"No positions";
		cout<<"\n";
	}
	return 0;
}