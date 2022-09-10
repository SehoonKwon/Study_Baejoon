#include <iostream>
using namespace std;

int t1, m1, t2, m2;

int main(){
    cin >> t1 >> m1 >> t2 >> m2;
    
    m1 += t1 * 60;
    m2 += t2 * 60;
    
    if(m1 > m2) m2 += 24 * 60;
    
    int d = m2 - m1;
    cout<<d<<" "<<d/30;
    return 0;    
}