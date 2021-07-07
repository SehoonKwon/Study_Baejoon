#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int N;
string s[31];
char chk[128];

void input()
{
	cin >> N;
	cin.ignore();
	for(int i=0; i<N; i++)
		getline(cin, s[i]);
}

void solve()
{
	for(int i=0; i<N; i++)
	{
		//첫번째 글자 단축키 확인
		int flag = 0; //첫번째 글자 확인
		int flag2 = 0; //조건1 성공유무
		for(int j=0; j<s[i].size(); j++)
		{
			char X, x;
			if(s[i][j] >= 'a')
			{
				X = s[i][j] -'a' + 'A';
				x = s[i][j];
			}
			else
			{
				X = s[i][j];
				x = s[i][j]-'A'+'a';
			}
			
			if(flag == 0 && (chk[x] == 0))
			{
				chk[x] = 1;
				s[i].insert(j, "[");
				s[i].insert(j+2, "]");
				flag2 = 1;
				break;
			}
			else if(s[i][j] ==' ') flag = 0;
			else flag = 1;
		}
		if(!flag2)
		{
			for(int j=0; j<s[i].size(); j++)
			{
				if(s[i][j] == ' ') continue;
				char X, x;
				if(s[i][j] >= 'a')
				{
					X = s[i][j] -'a' + 'A';
					x = s[i][j];
				}
				else
				{
					X = s[i][j];
					x = s[i][j]-'A'+'a';
				}
				
				if(chk[x] == 0)
				{
					chk[x] = 1;
					s[i].insert(j, "[");
					s[i].insert(j+2, "]");
					break;
				}
			}
		}
	}
	
	for(int i=0; i<N; i++)
		cout<<s[i]<<"\n";
}

int main() {
	// your code goes here
	input();
	solve();
	return 0;
}
