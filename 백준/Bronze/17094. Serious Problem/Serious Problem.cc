#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    char c;
    int A=0, B=0;
    for(int i=0; i<N; i++){
        cin >> c;
        if(c == '2') A++;
        else B++;
    }
    if(A == B) cout<<"yee";
    else if(A > B) cout<<2;
    else cout<<'e';
    
	return 0;
}