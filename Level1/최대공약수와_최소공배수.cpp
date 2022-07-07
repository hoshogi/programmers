/*
Title   : 최대공약수와 최소공배수
Author  : Hoseok Lee
Date    : 2022/07/07
https://school.programmers.co.kr/learn/courses/30/lessons/12940
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd = Gcd(n, m);
    int lcm = n * m / gcd;
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}
