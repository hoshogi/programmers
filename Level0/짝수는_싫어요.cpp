/*
Title   : 짝수는 싫어요
Author  : Hoseok Lee
Date    : 2022/11/17
https://school.programmers.co.kr/learn/courses/30/lessons/120813
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for (int i = 1; i <= n; i += 2)
        answer.push_back(i);
    return answer;
}