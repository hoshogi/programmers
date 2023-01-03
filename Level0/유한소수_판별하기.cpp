/*
Title   : 유한소수 판별하기
Author  : Hoseok Lee
Date    : 2023/01/03
https://school.programmers.co.kr/learn/courses/30/lessons/120878
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

int solution(int a, int b) {
    int div = gcd(a, b);
    b /= div;
    
    while (b % 2 == 0 || b % 5 == 0) {
        if (b % 2 == 0)
            b /= 2;
        if (b % 5 == 0)
            b /= 5;
    }
    
    if (b == 1)
        return 1;
    return 2;
}