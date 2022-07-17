#include <iostream>
#include <string>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int T;
	cin >> T;
	while(T--){
		string str;
		cin >> str;
		if(str.size() >= 6 && str.size() <= 9) cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}