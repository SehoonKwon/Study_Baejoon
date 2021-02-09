#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    string s;
    while(N--)
    {
        cin >> s;
        char x = s[s.size()-1];
        if(x == '2' || x == '4' || x == '6' || x == '8' || x == '0')
            cout<<"even\n";
        else
            cout<<"odd\n";
    }
    return 0;
}
