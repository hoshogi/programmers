/*
Title   : 대문자와 소문자
Author  : Hoseok Lee
Date    : 2022/10/02
https://school.programmers.co.kr/learn/courses/30/lessons/120893
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (auto it : my_string) {
        if (it >= 'A' && it <= 'Z')
            answer += tolower(it);
        else
            answer += toupper(it);
    }
    return answer;
}
