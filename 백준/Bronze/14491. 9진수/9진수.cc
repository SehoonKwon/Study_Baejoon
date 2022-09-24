#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N;
string temp;

int main()
{
    cin >> N;
   
    while(N){
        temp += to_string(N % 9);
        N /= 9;
    }
    
    reverse(temp.begin(), temp.end());
    cout<<temp;
    return 0;
}