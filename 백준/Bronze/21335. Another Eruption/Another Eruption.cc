#include <iostream>
#include <cmath>
using namespace std;

#define Pi 3.141592

int main(){
    double x;
    cin >> x;
    x /= Pi;
    x = sqrt(x);
    
    cout<<fixed;
    cout.precision(6);
    cout<<2*Pi*x;
    return 0;
}