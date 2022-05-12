/*
Title   : 가운데 글자 가져오기
Author  : Hoseok Lee
Date    : 2022/05/11
https://programmers.co.kr/learn/courses/30/lessons/12903
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if (s.length() % 2 == 0)
        answer += s.substr(s.length() / 2 - 1, 2);
    
    else
        answer += s.substr(s.length() / 2, 1);
    
    return answer;
}
