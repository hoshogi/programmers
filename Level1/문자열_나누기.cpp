/*
Title   : 문자열 나누기
Author  : Hoseok Lee
Date    : 2023/01/11
https://school.programmers.co.kr/learn/courses/30/lessons/140108
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0, same = 0, diff = 0;
    char x = ' ';
    
    for (int i = 0; i < s.length(); i++) {
        if (same == 0) {
            x = s[i];
            same++;
        }
        else if (s[i] == x)
            same++;
        else
            diff++;
        
        if (same == diff) {
            answer++;
            same = 0;
            diff = 0;
        }
    }
    
    if (same != 0)
        answer++;
    return answer;
}