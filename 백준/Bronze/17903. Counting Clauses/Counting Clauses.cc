#include <iostream>
using namespace std;

int N, M;
int Array[21][21];

int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> Array[i][j];
    if(N >= 8) cout << "satisfactory";
    else cout << "unsatisfactory";
}