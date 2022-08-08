#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
		string str;
		double x;
		cin >> x;
		getline(cin, str);
		for(int i=0; i<str.size(); i++){
			if(str[i] == '@')
				x *= 3;
			else if(str[i] == '%')
				x += 5;
			else if(str[i] == '#')
				x -= 7;
		}
		printf("%.2lf\n", x);
	}
	return 0;
}