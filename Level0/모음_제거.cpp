/*
Title   : 모음 제거
Author  : Hoseok Lee
Date    : 2022/11/22
https://school.programmers.co.kr/learn/courses/30/lessons/120849
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (auto it : my_string) {
        if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u')
            continue;
        answer += it;
    }
    return answer;
}