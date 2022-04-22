#include <iostream>
using namespace std;
int main()
{
    double H, P;
    cout<<fixed;
    cout.precision(2);
    while(1)
    {
        cin>>H>>P;
        if(cin.eof()) break;
        cout<<H/P<<"\n";
    }
    return 0;
}