/*
Title   : 올바른 괄호
Author  : Hoseok Lee
Date    : 2022/07/12
https://school.programmers.co.kr/learn/courses/30/lessons/12909
https://github.com/hoshogi
*/

#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int size = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            size++;
        else {
            if (size > 0)
                size--;
            else
                return false;
        }
    }
    
    if (size > 0)
        return false;
    
    return true;
}
