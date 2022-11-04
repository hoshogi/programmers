/*
Title   : 피자 나눠 먹기 (2)
Author  : Hoseok Lee
Date    : 2022/11/04
https://school.programmers.co.kr/learn/courses/30/lessons/120815
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int solution(int n) {
    return n / gcd(n, 6);
}