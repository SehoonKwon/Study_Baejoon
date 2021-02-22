#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    string s;
    int k;
    while(T--)
    {
        cin >> k >> s;
        s[k-1] = '1';
        for(int i=0; i<s.size(); i++)
            if(s[i] != '1') cout << s[i];
        cout<<"\n";
    }
    return 0;
}
