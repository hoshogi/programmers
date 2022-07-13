/*
Title   : JadenCase 문자열 만들기
Author  : Hoseok Lee
Date    : 2022/07/13
https://school.programmers.co.kr/learn/courses/30/lessons/12951
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool start = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            start = true;
        }
        else {
            if (start) {
                s[i] = toupper(s[i]);
                start = false;
            }
                
            else
                s[i] = tolower(s[i]);
        }
    }
    
    return s;
}
