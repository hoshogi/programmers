/*
Title   : 숨어있는 숫자의 덧셈 (1)
Author  : Hoseok Lee
Date    : 2022/11/23
https://school.programmers.co.kr/learn/courses/30/lessons/120851
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for (auto it : my_string) 
        if (it >= '0' && it <= '9')
            answer += it - '0';
    return answer;
}