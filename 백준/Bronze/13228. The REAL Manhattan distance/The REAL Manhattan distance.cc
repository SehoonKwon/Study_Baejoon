#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int Array[3][2];

int main(){
    int N;
    cin >> N;
    while(N--){
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                cin>>Array[j][i];
            }
        }
        cout<<abs(Array[0][0]-Array[0][1]) + abs(Array[1][0]-Array[1][1]) + Array[2][0] + Array[2][1]<<"\n";
    }
    return 0;
}