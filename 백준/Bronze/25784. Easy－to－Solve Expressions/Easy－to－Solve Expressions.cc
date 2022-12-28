#include <iostream>
#include <algorithm>
using namespace std;

int Array[3];

int main()
{
    for (int i = 0; i < 3; i++)
        cin >> Array[i];

    sort(Array, Array + 3);

    if (Array[0] + Array[1] == Array[2]) cout << 1;
    else if (Array[0] * Array[1] == Array[2]) cout << 2;
    else cout << 3;

    return 0;
}