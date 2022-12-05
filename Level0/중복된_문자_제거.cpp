/*
Title   : 중복된 문자 제거
Author  : Hoseok Lee
Date    : 2022/12/05
https://school.programmers.co.kr/learn/courses/30/lessons/120888
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> s;
    
    for (auto it : my_string) {
        if (s.find(it) == s.end()) 
            answer += it;
        s.insert(it);
    }
    return answer;
}