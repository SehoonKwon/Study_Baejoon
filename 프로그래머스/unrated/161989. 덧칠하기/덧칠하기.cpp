#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    int last = -1;
    for(int i = 0; i<section.size(); i++){
        if(last < section[i]) {
            last = section[i];
            last += m;
            last -= 1;
            answer++;
        }
    }    

    return answer;
}