#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string str;
int cnt[2];

int main() {
	cin >> str;
	
	char flag = str[0];
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] != flag)
		{
			cnt[flag-'0']++;
			flag = str[i];
		}
		
		if(i == str.size() -1 )
			cnt[flag-'0']++;
	}
	
	cout << min(cnt[0], cnt[1]);
	
	return 0;
}
