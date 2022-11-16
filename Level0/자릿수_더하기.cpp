/*
Title   : 자릿수 더하기
Author  : Hoseok Lee
Date    : 2022/11/15
https://school.programmers.co.kr/learn/courses/30/lessons/120906
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string num = to_string(n);
    for (auto it : num)
        answer += it - '0';
    return answer;
}