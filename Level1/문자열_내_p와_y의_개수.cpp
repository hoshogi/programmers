/*
Title   : 문자열 내 p와 y의 개수
Author  : Hoseok Lee
Date    : 2022/06/20
https://programmers.co.kr/learn/courses/30/lessons/12916
https://github.com/hoshogi
*/

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p = 0, y = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            p++;
        if (s[i] == 'y' || s[i] == 'Y')
            y++;
    }
    
    if (p == y)
        return true;
    else
        return false;
}
