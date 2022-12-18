/*
Title   : 문자열 밀기
Author  : Hoseok Lee
Date    : 2022/12/18
https://school.programmers.co.kr/learn/courses/30/lessons/120921
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    deque<char> dq(A.begin(), A.end());
    
    for (int i = 0; i <= A.length(); i++) {
        string str(dq.begin(), dq.end());
        if (str == B)
            return answer;
        dq.push_front(dq.back());
        dq.pop_back();
        answer++;
    }
    return -1;
}