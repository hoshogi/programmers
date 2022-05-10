/*
Title   : 문자열 다루기 기본
Author  : Hoseok Lee
Date    : 2022/05/10
https://programmers.co.kr/learn/courses/30/lessons/12918
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6)
        return false;
    
    for (int i = 0; i < s.length(); i++)
        if (!(s[i] >= '0' && s[i] <= '9'))
            return false;
    
    return true;
}
