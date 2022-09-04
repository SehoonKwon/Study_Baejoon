#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	for(int num=1; num <= N; num++){
		string s;
		cin >> s;
		
		cout << "String #"<<num<<"\n";
		for(int i=0; i<s.size();i ++){
			char nc = s[i]+1;
			if(nc > 'Z') nc = 'A';
			cout<<nc;
		}
		cout<<"\n\n";
	}
	
	return 0;
}