/*
Title   : N개의 최소공배수
Author  : Hoseok Lee
Date    : 2022/07/11
https://school.programmers.co.kr/learn/courses/30/lessons/12953
https://github.com/hoshogi
*/

#include <string>
#include <vector>
using namespace std;

int gcd (int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int solution(vector<int> arr) {
    int answer = 1;
    
    for (int i = 0; i < arr.size(); i++)
        answer = (answer * arr[i]) / gcd(answer, arr[i]);
    
    return answer;
}
