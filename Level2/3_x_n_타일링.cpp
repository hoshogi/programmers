/*
Title   : 3 x n 타일링
Author  : Hoseok Lee
Date    : 2022/08/19
https://school.programmers.co.kr/learn/courses/30/lessons/12902
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#define MOD 1000000007

using namespace std;

int solution(int n) {
    long long d[5001] = {1, 0, 3, };
    
    if (n % 2 != 0)
        return 0;
    
    for (int i = 4; i <= n; i += 2) {
            d[i] = 2;
            d[i] += 3 * d[i - 2];
            d[i] %= MOD;
        for (int j = i - 4; j >= 2; j -= 2) {
            d[i] += 2 * d[j];
            d[i] %= MOD;
        }
    }
    
    return d[n];
}
