#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "SciComLove";
	int N;
	cin >> N;
	N%=10;
	
	string temp = s.substr(N, s.size()-N);
	temp += s.substr(0, N);
	cout<<temp;
	return 0;
}