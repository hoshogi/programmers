/*
Title   : 문자열 정렬하기 (1)
Author  : Hoseok Lee
Date    : 2022/10/31
https://school.programmers.co.kr/learn/courses/30/lessons/120850
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for (auto it : my_string) {
        if (it >= '0' && it <= '9')
            answer.push_back(it - '0');
    }
    sort(answer.begin(), answer.end());
    return answer;
}