/*
Title   : 두 원 사이의 정수 쌍
Author  : Hoseok Lee
Date    : 2023/04/14
https://school.programmers.co.kr/learn/courses/30/lessons/181187
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int r1, int r2) {
    long long answer = 1;
    
    for (long long i = 1; i < r2; i++) {
        if (i <= r1) 
            answer +=  floor(sqrt((long long)r2 * r2 - i * i)) - ceil(sqrt((long long)r1 * r1 - i * i)) + 1;
        else 
            answer +=  floor(sqrt((long long)r2 * r2 - i * i)) + 1;
    }
    answer *= 4;
    return answer;
}