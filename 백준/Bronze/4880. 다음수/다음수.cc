#include <iostream>
using namespace std;
 
int main() {
	while(1){
		int A,B,C;
		cin>>A>>B>>C;
		if(A == 0 && B == 0 && C == 0) break;
		if(A == 0 || B == 0){
			int D = B-A;
			cout<< "AP " << C+D << "\n";
		}
		else{
			if(B-A == C-B){
				int D = B-A;
				cout<< "AP " << C+D << "\n";
			}
			else{
				int r = B/A;
				cout<<"GP "<<C*r<<"\n";
			}
		}
	}
	return 0;
}