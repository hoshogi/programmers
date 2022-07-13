/*
Title   : 멀리 뛰기
Author  : Hoseok Lee
Date    : 2022/07/13
https://school.programmers.co.kr/learn/courses/30/lessons/12914
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long fibonacci[2001] = {0, 1, 2, };
    
    for (int i = 3; i <= n; i++)
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1234567;
    return fibonacci[n];
}
