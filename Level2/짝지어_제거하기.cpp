/*
Title   : 짝지어 제거하기
Author  : Hoseok Lee
Date    : 2022/09/08
https://school.programmers.co.kr/learn/courses/30/lessons/12973
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s) {
    stack<char> letter;
    
    for (int i = 0; i < s.length(); i++) {
        if (letter.empty())
            letter.push(s[i]);
        else {
            if (letter.top() == s[i])
                letter.pop();
            else
                letter.push(s[i]);
        }
    }
    
    if (letter.empty())
        return 1;
    else
        return 0;
}
