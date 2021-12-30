#include <iostream>
#include <string>
#include <vector>
using namespace std;

int isP(string str)
{
	for(int i=0; i<str.size()/2; i++)
		if(str[i] != str[str.size() -1 -i]) return 0;
		
	return 1;
}

void solve()
{
	int K;
	cin >> K;
		
	vector<string> sv;
	while(K--)
	{
		string str;
		cin >> str;
		sv.push_back(str);
	}
		
	for(int i=0; i<sv.size(); i++)
	{
		for(int j=0; j<sv.size(); j++)
		{
			if(i == j) continue;
			int c = isP(sv[i] + sv[j]);
			if(c)
			{
				cout<<sv[i]+sv[j]<<"\n";
				return;
			}
		}
	}
		
	cout << "0\n";
}

int main() {
	int T;
	cin >> T;
	while(T--)
		solve();
	return 0;
}
