#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int flag = 0;
	for(int i=0; i<=250; i++){
		for(int j=0; j<=250; j++){
			for(int k=0; k<=250; k++){
				if(i*a + j*b + k*c == d){
					flag = 1;
					cout<<i<<" "<<j<<" "<<k<<"\n";
				}
			}
		}
	}
	if(!flag) cout<<"impossible";
	return 0;
}