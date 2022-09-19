#include <iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int nCntA = 0, nCntM = 0;
    for(int i=0; i<N; i++){
        int a, b;
        cin >> a >> b;
        if(a > b) nCntA++;
        else if(a == b) nCntM++;
    }
    
    cout<<nCntA<<" "<<N-nCntA-nCntM; 
	return 0;
}