/*
Title   : 외계행성의 나이
Author  : Hoseok Lee
Date    : 2022/12/04
https://school.programmers.co.kr/learn/courses/30/lessons/120834
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string num = to_string(age);
    
    for (auto it : num) 
        answer += 'a' + it - '0';
    return answer;
}