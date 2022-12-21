#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, double> mymap;

int main()
{
    mymap["Paper"] = 57.99;
    mymap["Printer"] = 120.50;
    mymap["Planners"] = 31.25;
    mymap["Binders"] = 22.50;
    mymap["Calendar"] = 10.95;
    mymap["Notebooks"] = 11.20;
    mymap["Ink"] = 66.95;

    string s;
    double sum = 0;
    while (1) {
        cin >> s;
        if (s == "EOI") break;

        sum += mymap[s];
    }

    cout << "$"<< sum;

    return 0;
}