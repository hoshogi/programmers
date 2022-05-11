/*
Title   : 같은 숫자는 싫어
Author  : Hoseok Lee
Date    : 2022/05/11
https://programmers.co.kr/learn/courses/30/lessons/12906
https://github.com/hoshogi
*/

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int temp = -1;
    
    for (auto it : arr) {
        if (temp != it) {
            answer.push_back(it);
            temp = it;
        }
    }
    
    return answer;
}
