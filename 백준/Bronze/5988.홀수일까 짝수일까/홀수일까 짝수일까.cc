#include <iostream>
#include <string>
using namespace std;

int N;
string str;

int main()
{
    cin >> N;
    while(N--)
    {
        cin >> str;
        char X = str[str.size()-1];
        if(X == '1' || X == '3' || X == '5' || X == '7' || X == '9') cout<<"odd\n";
        else cout<<"even\n";
    }
    return 0;
}