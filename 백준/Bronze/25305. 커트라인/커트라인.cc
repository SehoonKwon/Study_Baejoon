#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
int Array[1001];

int main() {
	cin >> N >> K;
	vector<int> v(N);
	for(int i=0; i<N; i++)
		cin >> v[i];
		
	sort(v.rbegin(), v.rend());
	cout<<v[K-1];
	
	return 0;
}