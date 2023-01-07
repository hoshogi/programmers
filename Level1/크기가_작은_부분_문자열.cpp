/*
Title   : 크기가 작은 부분 문자열
Author  : Hoseok Lee
Date    : 2023/01/07
https://school.programmers.co.kr/learn/courses/30/lessons/147355
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for (int i = 0; i <= t.length() - p.length(); i++) {
        string str = t.substr(i, p.length());
        if (str <= p)
            answer++;
    }
    return answer;
}