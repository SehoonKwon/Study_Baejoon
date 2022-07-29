#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#define ll long long

int N;
ll Array[100001];

int main() {
	cin >> N;
	for(int i=0; i<N; i++)
		cin>>Array[i];
	
	sort(Array, Array+N, greater<int>());	
	ll pay = 0;
	int cnt = 0;
	
	for(int i=0; i < N; i++){
		if(cnt == 2){
			cnt = 0;
			continue;
		}
		pay += Array[i];
		cnt++;
	}
	
	cout<<pay;
	return 0;
}