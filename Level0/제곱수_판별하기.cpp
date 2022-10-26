/*
Title   : 제곱수 판별하기
Author  : Hoseok Lee
Date    : 2022/10/26
https://school.programmers.co.kr/learn/courses/30/lessons/120909
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int num = sqrt(n);
    
    if (num * num == n)
        return 1;
    return 2;
}