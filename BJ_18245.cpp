#include <iostream>
#include <string>
using namespace std;

int main()
{
	// your code goes here
	string s;
	int cnt = 1;
	while(1)
	{
		getline(cin, s);
		if(s == "Was it a cat I saw?")
			break;
		
		for(int i = 0; i < s.size(); i = i+cnt+1)
			cout << s[i];
		cout<<"\n";
		cnt++;
	}
	
	return 0;
}
