#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(1){
    	if(N % 2) N = (N-1)/2 + 1;
    	else {
    		cout<<N;
    		break;
    	}
    }
    return 0;
}