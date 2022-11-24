/*
Title   : n의 배수 고르기
Author  : Hoseok Lee
Date    : 2022/11/24
https://school.programmers.co.kr/learn/courses/30/lessons/120905
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    
    for (auto it : numlist)
        if (it % n == 0)
            answer.push_back(it);
    return answer;
}