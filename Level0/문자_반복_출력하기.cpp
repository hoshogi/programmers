/*
Title   : 문자 반복 출력하기
Author  : Hoseok Lee
Date    : 2022/11/03
https://school.programmers.co.kr/learn/courses/30/lessons/120825
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for (auto it : my_string) 
        for (int i = 0; i < n; i++)
            answer += it;
    return answer;
}