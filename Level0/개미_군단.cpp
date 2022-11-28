/*
Title   : 개미 군단
Author  : Hoseok Lee
Date    : 2022/11/29
https://school.programmers.co.kr/learn/courses/30/lessons/120837
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    for (int i = 5; i > 0; i -= 2) {
        answer += hp / i;
        hp %= i;
    }
    return answer;
}