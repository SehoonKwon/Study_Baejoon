#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int Array[27];

int main() {
	while(1)
	{
		memset(Array, 0, sizeof(Array));
		string str;
		getline(cin, str);
		if(str == "*") break;
		
		for(int i=0; i<str.size(); i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				Array[str[i]-'a']++;
		}
		
		int flag = 0;
		for(int i=0; i<26; i++)
			if(Array[i] == 0) flag = 1;
		
		if(flag) cout<<'N'<<endl;
		else cout<<'Y'<<endl;
	}
	return 0;
}