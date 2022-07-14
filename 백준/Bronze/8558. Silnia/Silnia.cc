#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int res = 1;
    for(int i=2; i<=N; i++){
        res *= i;
        res %= 10;
    }
    cout<<res;
    return 0;
}