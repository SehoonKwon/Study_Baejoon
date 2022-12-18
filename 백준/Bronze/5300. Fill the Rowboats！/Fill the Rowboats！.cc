#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++){
        cout << i << " ";
        if (i > 1 && i % 6 == 0) cout << "Go! ";
    }
    if (N % 6 != 0) cout << "Go!";
    return 0;
}