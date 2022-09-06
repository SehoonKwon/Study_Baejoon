#include <iostream>
using namespace std;

#define endl "\n"

int main() {
	for(int num=1; ; num++){
		int A,B;
		cin>>A>>B;
		if(A==0) break;
		
		cout<<"Hole #"<<num<<endl;
		if(B == 1) cout<<"Hole-in-one."<<endl;
		else{
			int res = A-B;
			if(res < -2) res = -2;
			
			switch(res){
				case 0:
					cout<<"Par."<<endl;
					break;
				case -1:
					cout<<"Bogey."<<endl;
					break;
				case 1:
					cout<<"Birdie."<<endl;
					break;
				case 2:
					cout<<"Eagle."<<endl;
					break;
				case -2:
					cout<<"Double Bogey."<<endl;
					break;
				case 3:
					cout<<"Double Eagle."<<endl;
					break;				
			}
		}
		cout<<endl;
	}
	return 0;
}