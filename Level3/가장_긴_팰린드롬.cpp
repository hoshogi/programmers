/*
Title   : 가장 긴 팰린드롬
Author  : Hoseok Lee
Date    : 2023/02/01
https://school.programmers.co.kr/learn/courses/30/lessons/12904
https://github.com/hoshogi
*/

#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for (int i = 0; i < s.length(); i++) {
        int count = 1;
        for (int j = 1; j < s.length(); j++) {
            if (i - j < 0 || i + j >= s.length())
                break;
            if (s[i - j] != s[i + j]) 
                break;
            count += 2;
        }
        answer = max(answer, count);
        
        count = 0;
        int left = i;
        int right = i + 1;
        for (int j = 0; j < s.length(); j++) {
            if (left < 0 || right >= s.length())
                break;
            if (s[left] != s[right])
                break;
            count += 2;
            left--;
            right++;
        }
        answer = max(answer, count);
    }
    return answer;
}