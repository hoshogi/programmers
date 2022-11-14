/*
Title   : 피자 나눠 먹기 (3)
Author  : Hoseok Lee
Date    : 2022/11/14
https://school.programmers.co.kr/learn/courses/30/lessons/120816
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int slice, int n) {
    return ceil((double)n / slice);
}