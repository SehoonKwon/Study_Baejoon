#include <iostream>
using namespace std;
 
char Array[10001];
 
int main() {
	int N;
	cin >> N;
 
	for(int i=0; i<N; i++)
		cin>>Array[i];
 
	int cnt = 0;
	for(int i=0; i<N; i++){
		char c;
		cin >> c;
		if(c == Array[i]) cnt++;
	}
 
	cout<<cnt;
 
	return 0;
}