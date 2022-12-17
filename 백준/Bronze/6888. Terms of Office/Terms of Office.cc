#include <iostream>
using namespace std;

int main()
{
    int X,Y;
    cin >> X >> Y;
    cout<<"All positions change in year " << X <<endl;
    
    int year = X;
    while(1){
        year = year+60;
        if(year > Y) break;
        
        cout<<"All positions change in year " << year <<endl;
    }
    return 0;
}