/*
Title   : 배열 원소의 길이
Author  : Hoseok Lee
Date    : 2022/11/01
https://school.programmers.co.kr/learn/courses/30/lessons/120854
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for (auto it : strlist) 
        answer.push_back(it.length());
    return answer;
}