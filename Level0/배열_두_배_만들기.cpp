/*
Title   : 배열 두 배 만들기
Author  : Hoseok Lee
Date    : 2022/10/31
https://school.programmers.co.kr/learn/courses/30/lessons/120809
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (auto it : numbers)
        answer.push_back(it * 2);
    return answer;
}