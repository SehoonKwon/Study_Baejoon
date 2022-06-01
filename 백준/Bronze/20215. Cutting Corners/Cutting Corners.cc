#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int w, h;
    cin>>w>>h;
    cout<<fixed;
    cout.precision(6);
    cout<<w+h-sqrt(w*w+h*h);
    return 0;
}