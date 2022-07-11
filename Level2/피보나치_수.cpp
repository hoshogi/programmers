/*
Title   : 피보나치 수
Author  : Hoseok Lee
Date    : 2022/07/11
https://school.programmers.co.kr/learn/courses/30/lessons/12945
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int fibonacci[100001] = {0, 1, };
    
    for (int i = 2; i <= n; i++) {
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1234567;
    }
    
    return fibonacci[n];
}
