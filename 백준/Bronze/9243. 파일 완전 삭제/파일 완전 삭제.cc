#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
    string s1, s2;
    cin >> N >> s1 >> s2;
    if(N%2){
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='0') s1[i] = '1';
            else s1[i] = '0';
        }
        if(s1 == s2)
            cout<<"Deletion succeeded";
        else
            cout<<"Deletion failed";
    }
    else{
        if(s1 == s2)
            cout<<"Deletion succeeded";
        else
            cout<<"Deletion failed";
    }
    return 0;
}