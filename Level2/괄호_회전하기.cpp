/*
Title   : 괄호 회전하기
Author  : Hoseok Lee
Date    : 2023/01/17
https://school.programmers.co.kr/learn/courses/30/lessons/76502
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

bool check(string str) {
    stack<char> s;
    
    for (auto it : str) {
        if (it == '(' || it == '{' || it == '[') 
            s.push(it);
        else {
            if (s.empty())
                return false;
            if (it == ')' && s.top() != '(') 
                return false;
            if (it == '}' && s.top() != '{') 
                return false;            
            if (it == ']' && s.top() != '[')
                return false;
            s.pop();
        }
    }
    if (s.empty())
        return true;
    return false;
}

int solution(string s) {
    int answer = 0;
    deque<char> dq;
    
    for (auto it : s) 
        dq.push_back(it);
    
    for (int i = 0; i < dq.size(); i++) {
        string str(dq.begin(), dq.end());

        if (check(str))
            answer++;
        dq.push_back(dq.front());
        dq.pop_front();
    }
    return answer;
}