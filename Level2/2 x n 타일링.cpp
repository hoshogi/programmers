/*
Title   : 2 x n 타일링
Author  : Hoseok Lee
Date    : 2022/08/26
https://school.programmers.co.kr/learn/courses/30/lessons/12900
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#define MOD 1000000007

using namespace std;

int solution(int n) {
    long long d[60001] = {1, 1, 2, };
    
    for (int i = 3; i <= n; i++) {
        d[i] += d[i - 1] + d[i - 2];
        d[i] %= MOD;
    }
    
    return d[n];
}
