#include <iostream>
using namespace std;
int main(){
    int MAX = -1;
    int ansX=0, ansY=0;
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            int x;
            cin>>x;
            if(MAX < x)
            {
                ansX=j;
                ansY=i;
                MAX = x;
            }
        }
    }
    cout<<MAX<<endl<<ansY<<" "<<ansX;
    return 0;
}