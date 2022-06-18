#include <iostream>
#include <string>
using namespace std;

char Array[]={'a','e','i','o','u'};

int main(){
    int N;
    string s;
    cin >> N >> s;
    int cnt = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<5; j++){
            if(s[i] == Array[j]){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}