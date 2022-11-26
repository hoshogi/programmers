/*
Title   : 문자열 정렬하기 (2)
Author  : Hoseok Lee
Date    : 2022/11/26
https://school.programmers.co.kr/learn/courses/30/lessons/120911
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (auto it : my_string) 
        answer += tolower(it);
    sort(answer.begin(), answer.end());
    return answer;
}