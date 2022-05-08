#include <iostream>
using namespace std;

int N, M;
int Array[21][21];

int main(){
    cin >> N >> M;
    if(N >= 8) cout << "satisfactory";
    else cout << "unsatisfactory";
    return 0;
}