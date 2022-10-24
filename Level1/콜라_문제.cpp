/*
Title   : 콜라 문제
Author  : Hoseok Lee
Date    : 2022/10/24
https://school.programmers.co.kr/learn/courses/30/lessons/132267
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a) {
        int plus = (n / a) * b;
        int left = n % a;
        answer += plus;
        n = plus + left;
    }
    return answer;
}