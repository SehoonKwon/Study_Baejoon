#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	if(N > 0)
		printf("int a;\nint *ptr = &a;\n");
	
	for(int i=2; i<=N; i++){
		cout<<"int ";
		for(int j=0; j<i; j++)
			cout<<"*";
		cout<<"ptr"<<i<<" = &ptr";
		if(i-1 > 1) cout<<i-1;
		cout<<";\n";
	}	
	return 0;
}