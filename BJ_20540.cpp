#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    if(s[0] == 'I')
        cout<<'E';
    else
        cout<<'I';
    
    if(s[1] == 'S')
        cout<<'N';
    else
        cout<<'S';
    
    if(s[2] == 'T')
        cout<<'F';
    else
        cout<<'T';
    
    if(s[3] == 'J')
        cout<<'P';
    else
        cout<<'J';
    
    return 0;
}
