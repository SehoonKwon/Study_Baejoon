#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
		int p;
		cin >> p;
		
		int N;
		cin >> N;
		for(int i=0; i<N; i++){
			int a, b;
			cin >> a >> b;
			p += a*b;
		}
		cout<<p<<"\n";
	}
	return 0;
}