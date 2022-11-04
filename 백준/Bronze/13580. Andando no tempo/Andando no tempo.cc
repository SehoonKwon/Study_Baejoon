#include <iostream>
#include <algorithm>
using namespace std;

int Array[3];

int main()
{
    for (int i = 0; i < 3; i++)
        cin >> Array[i];

    sort(Array, Array + 3);

    if (Array[0] + Array[1] == Array[2] || Array[0] == Array[1] || Array[1] == Array[2]) cout << 'S';
    else cout << 'N';

    return 0;
}